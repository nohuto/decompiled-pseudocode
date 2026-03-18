/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140898790
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x1402D5CE0 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1648), -a2);
}
