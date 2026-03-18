/*
 * XREFs of ViUnlockContextPointer @ 0x140927E64
 * Callers:
 *     VfInsertContext @ 0x140309A90 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140309C60 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
