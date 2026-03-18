/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x14010B4C0
 * Callers:
 *     FsRtlAddMcbEntry @ 0x140282050 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14010BAE0 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
