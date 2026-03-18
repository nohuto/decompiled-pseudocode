/*
 * XREFs of FxProbeAndLockWithAccess @ 0x1C0095908
 * Callers:
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxProbeAndLockWithAccess(_MDL *Mdl, char Operation, _LOCK_OPERATION a3)
{
  MmProbeAndLockPages(Mdl, 0, a3);
  return 0LL;
}
