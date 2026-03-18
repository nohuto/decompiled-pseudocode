/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x1401B8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustTokenClaimsAndDeviceGroups(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
