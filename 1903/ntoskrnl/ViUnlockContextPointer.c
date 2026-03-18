/*
 * XREFs of ViUnlockContextPointer @ 0x140966384
 * Callers:
 *     VfInsertContext @ 0x140327770 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140327940 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
