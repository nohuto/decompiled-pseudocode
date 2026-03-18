/*
 * XREFs of EtwpFinalizePendingApc @ 0x14032CE6C
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140108DC8 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpCancelStackWalkApc @ 0x14032CE50 (EtwpCancelStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x14032D310 (EtwpStackWalkApc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int *a1, __int64 a2)
{
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 120LL), (*((_WORD *)a1 + 417) & 7) + 24);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 58, (PSLIST_ENTRY)a2);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 240);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
    1u);
}
