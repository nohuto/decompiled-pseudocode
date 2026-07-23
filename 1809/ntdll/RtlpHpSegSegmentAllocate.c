/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x18005D2C8
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18001DC90 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x180064230 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18005D3FC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x18005D600 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x1800661D0 (RtlpHpSegSegmentFree.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180109F84 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  _BOOL8 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi

  v3 = a2 + 2;
  v5 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( !v5 )
    return 0LL;
  v7 = (unsigned int)-*(_DWORD *)a1;
  v8 = v7;
  v9 = (_DWORD)v7 != 0x100000;
  v10 = 2 * ((unsigned __int64)(v5 - qword_180166948) >> 20);
  v11 = v10 + 2 * (v7 >> 20);
  if ( v10 >= v11 )
  {
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v8 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_QWORD *)(a1 + 56), v5, v3 << 12, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v14 = 2147353480LL;
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v5, v8, v13);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v15 = v5;
    v5 = 0LL;
  }
  else
  {
    while ( (int)RtlCSparseBitmapBitmaskWrite(&unk_180166908, v10, v6, v9 + 1) >= 0 )
    {
      v10 += 2LL;
      if ( v10 >= v11 )
        goto LABEL_5;
    }
    v15 = 0LL;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(a1);
  return v15;
}
