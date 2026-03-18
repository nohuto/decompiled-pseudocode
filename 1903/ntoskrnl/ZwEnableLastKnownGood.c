/*
 * XREFs of ZwEnableLastKnownGood @ 0x1401C1BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnableLastKnownGood(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
