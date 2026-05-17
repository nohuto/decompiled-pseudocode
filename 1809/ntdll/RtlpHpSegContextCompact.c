/*
 * XREFs of RtlpHpSegContextCompact @ 0x180068ADC
 * Callers:
 *     RtlpHpHeapCompact @ 0x180068A30 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18001DF1C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18001DF80 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegSegmentFree @ 0x1800661D0 (RtlpHpSegSegmentFree.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  bool v4; // zf
  char v5; // r13
  int v7; // r15d
  _QWORD *i; // rsi
  _QWORD *v9; // rbx
  _QWORD *result; // rax
  unsigned __int64 j; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD **v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-8h]
  char v20; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 88) == 0LL;
  v19 = &v18;
  v5 = a2;
  v18 = &v18;
  if ( !v4 )
  {
    v7 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
    v20 = -1;
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
          v12 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v12 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, j, v5, 1, &v20);
          v13 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0LL);
          if ( v13 )
          {
            v14 = *v13;
            i = (_QWORD *)i[1];
            if ( *(_QWORD **)(*v13 + 8LL) != v13
              || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13)
              || (*v15 = v14, *(_QWORD *)(v14 + 8) = v15, v16 = (_QWORD **)v19, --*(_QWORD *)(a1 + 88), *v16 != &v18) )
            {
              __fastfail(3u);
            }
            v13[1] = v16;
            *v13 = &v18;
            *v16 = v13;
            v19 = v13;
            break;
          }
        }
      }
    }
    if ( !v7 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  }
  v9 = v18;
  while ( 1 )
  {
    result = &v18;
    if ( v9 == &v18 )
      break;
    v17 = (__int64)v9;
    v9 = (_QWORD *)*v9;
    RtlpHpSegSegmentFree(a1, v17, 0x7FFFFFFFu, 1);
  }
  return result;
}
