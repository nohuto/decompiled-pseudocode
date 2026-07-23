/*
 * XREFs of RtlpHpTagContextUpdate @ 0x180046F54
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180046EEC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpTagContextUpdate(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180163B58 + 8LL * a2 - 8);
  RtlAcquireSRWLockShared(&RtlpHpTagContext);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
