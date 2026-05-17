/*
 * XREFs of RtlpHpTagContextUpdate @ 0x180046F54
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180046EEC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 */

signed __int64 __fastcall RtlpHpTagContextUpdate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180163B58 + 8LL * (unsigned __int16)a2 - 8);
  RtlAcquireSRWLockShared(&RtlpHpTagContext, a2, a3, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  return RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
