/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180089D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(__int64 **this, struct DeviceInfo *a2)
{
  return DWMInputRouter::OnDeviceChange(this, a2, 1);
}
