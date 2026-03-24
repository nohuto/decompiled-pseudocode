/*
 * XREFs of MiProbeAndLockComplete @ 0x1400936AC
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400949E0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093854 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402A7FDC (MiAddMdlTracker.c)
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
    ++dword_14043A840;
  }
  return (unsigned int)a2;
}
