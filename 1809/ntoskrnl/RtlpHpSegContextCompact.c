/*
 * XREFs of RtlpHpSegContextCompact @ 0x1401B6530
 * Callers:
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14000B57C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14000B644 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14000B704 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14000B82C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegSegmentFree @ 0x1401547C4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegHeapRemoveSegment @ 0x1402FCD60 (RtlpHpSegHeapRemoveSegment.c)
 *     RtlpHpSegLockRelease @ 0x1402FCD8C (RtlpHpSegLockRelease.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  _QWORD *v3; // rbx
  char v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rsi
  unsigned __int64 i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // rdx
  _QWORD *result; // rax
  _QWORD *v16; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v17; // [rsp+38h] [rbp-8h]
  char v18; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v3 = &v16;
  v17 = &v16;
  v16 = &v16;
  if ( !v2 )
  {
    v6 = RtlpHpSegLockAcquire(a1, a2);
    v18 = v6;
    v8 = *(_QWORD **)(a1 + 72);
    if ( v8 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        for ( i = (unsigned __int64)&v8[4 * *(unsigned __int8 *)(a1 + 10)];
              i < (unsigned __int64)(v8 + 1024);
              i += 32LL * *(unsigned __int8 *)(i + 31) )
        {
          if ( (*(_BYTE *)(i + 24) & 1) == 0 && *(_WORD *)(i + 28) != 0xFFFF )
          {
            RtlpHpSegFreeRangeRemove(a1, i);
            *(_BYTE *)(i + 24) |= 1u;
            v10 = 32LL * ((unsigned int)*(unsigned __int8 *)(i + 31) - 1);
            *(_BYTE *)(v10 + i + 24) |= 1u;
            i = RtlpHpSegPageRangeCoalesce(a1, i, a2, 1, &v18);
            v11 = RtlpHpSegFreeRangeInsert(a1, i, 0);
            if ( v11 )
            {
              v8 = (_QWORD *)v8[1];
              RtlpHpSegHeapRemoveSegment(a1, v11);
              v13 = v17;
              if ( *v17 != &v16 )
                __fastfail(3u);
              v12[1] = v17;
              *v12 = &v16;
              *v13 = v12;
              v17 = (_QWORD **)v12;
              break;
            }
          }
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != (_QWORD *)(a1 + 72) );
      v6 = v18;
    }
    LOBYTE(v7) = v6;
    RtlpHpSegLockRelease(a1, a2, v7);
    v3 = v16;
  }
  while ( 1 )
  {
    result = &v16;
    if ( v3 == &v16 )
      break;
    v14 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    RtlpHpSegSegmentFree(a1, v14, 0x7FFFFFFF, 1);
  }
  return result;
}
