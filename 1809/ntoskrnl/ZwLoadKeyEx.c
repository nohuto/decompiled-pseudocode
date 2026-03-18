/*
 * XREFs of ZwLoadKeyEx @ 0x1401BA1D0
 * Callers:
 *     PiDrvDbLoadHive @ 0x1406837C8 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
