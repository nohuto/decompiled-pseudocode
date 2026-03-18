/*
 * XREFs of ViUnlockContextPointer @ 0x140966384
 * Callers:
 *     VfInsertContext @ 0x1403271C0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140327390 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
