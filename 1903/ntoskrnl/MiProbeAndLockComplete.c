/*
 * XREFs of MiProbeAndLockComplete @ 0x1400EEE40
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402BF84C (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  struct _MDL *v4; // rbx

  MiUnlockProbePacketWorkingSet(a1);
  v4 = *(struct _MDL **)(a1 + 56);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( a2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_1404662E0;
  }
  return (unsigned int)a2;
}
