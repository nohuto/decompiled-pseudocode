/*
 * XREFs of ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x1800464B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsLockedToPeriodicity(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 21) != 0;
}
