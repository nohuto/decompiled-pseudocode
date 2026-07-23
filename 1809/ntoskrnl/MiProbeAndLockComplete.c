/*
 * XREFs of MiProbeAndLockComplete @ 0x1400935EC
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
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
    ++dword_14043B900;
  }
  return (unsigned int)a2;
}
