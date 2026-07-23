/*
 * XREFs of RtlpHpSegContextCompact @ 0x18004F270
 * Callers:
 *     RtlpHpHeapCompact @ 0x18004F1D0 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180036634 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180036698 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800367E0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegSegmentFree @ 0x18004FE48 (RtlpHpSegSegmentFree.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, char a2)
{
  bool v2; // zf
  int v5; // r15d
  _QWORD *i; // rsi
  _QWORD *v7; // rbx
  _QWORD *result; // rax
  unsigned __int64 j; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD **v14; // rcx
  _QWORD *v15; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-8h]
  char v17; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v16 = &v15;
  v15 = &v15;
  if ( !v2 )
  {
    v5 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v17 = -1;
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    {
      for ( j = (unsigned __int64)&i[4 * *(unsigned __int8 *)(a1 + 10)];
            j < (unsigned __int64)(i + 1024);
            j += 32LL * *(unsigned __int8 *)(j + 31) )
      {
        if ( (*(_BYTE *)(j + 24) & 1) == 0 && *(_WORD *)(j + 28) != 0xFFFF )
        {
          RtlpHpSegFreeRangeRemove(a1, j);
          *(_BYTE *)(j + 24) |= 1u;
          v10 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v10 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, j, a2, 1, &v17);
          v11 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0);
          if ( v11 )
          {
            v12 = *v11;
            i = (_QWORD *)i[1];
            if ( *(_QWORD **)(*v11 + 8LL) != v11
              || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11)
              || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = (_QWORD **)v16, --*(_QWORD *)(a1 + 88), *v14 != &v15) )
            {
              __fastfail(3u);
            }
            v11[1] = v14;
            *v11 = &v15;
            *v14 = v11;
            v16 = v11;
            break;
          }
        }
      }
    }
    if ( !v5 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  }
  v7 = v15;
  while ( 1 )
  {
    result = &v15;
    if ( v7 == &v15 )
      break;
    v7 = (_QWORD *)*v7;
    RtlpHpSegSegmentFree(a1);
  }
  return result;
}
