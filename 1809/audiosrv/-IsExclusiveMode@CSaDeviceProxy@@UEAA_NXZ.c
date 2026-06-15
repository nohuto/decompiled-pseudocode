/*
 * XREFs of ?IsExclusiveMode@CSaDeviceProxy@@UEAA_NXZ @ 0x1800434F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsExclusiveMode(CSaDeviceProxy *this)
{
  return *((_BYTE *)this + 65);
}
