/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140897FB0
 * Callers:
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x1402D5A40 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1648), -a2);
}
