/*
 * XREFs of ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C00669D8
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0066594 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C0081244 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MDL_RANGE::Unlock(PMDL *this)
{
  MmUnlockPages(*this);
  IoFreeMdl(*this);
  *this = 0LL;
}
