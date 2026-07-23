/*
 * XREFs of ViUnlockContextPointer @ 0x140928E64
 * Callers:
 *     VfInsertContext @ 0x140309D80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140309F50 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
