/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x18004E58C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180036F20 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x18004C898 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004E6C4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x18004E8C8 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x18004FE48 (RtlpHpSegSegmentFree.c)
 *     RtlpHeapLogRangeReserve @ 0x1801016D8 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180107428 (RtlpHpTlLogMemStats.c)
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
  __int64 v13; // rcx
  __int64 v14; // rsi

  v3 = a2 + 2;
  v5 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( !v5 )
    return 0LL;
  v7 = (unsigned int)-*(_DWORD *)a1;
  v8 = v7;
  v9 = (_DWORD)v7 != 0x100000;
  v10 = 2 * ((unsigned __int64)(v5 - qword_180166A68) >> 20);
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
      v13 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v13 = 2147353480LL;
    if ( *(_BYTE *)v13 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v5, v8);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v14 = v5;
    v5 = 0LL;
  }
  else
  {
    while ( (int)RtlCSparseBitmapBitmaskWrite(&BaseAddress, v10, v6, v9 + 1) >= 0 )
    {
      v10 += 2LL;
      if ( v10 >= v11 )
        goto LABEL_5;
    }
    v14 = 0LL;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(a1);
  return v14;
}
