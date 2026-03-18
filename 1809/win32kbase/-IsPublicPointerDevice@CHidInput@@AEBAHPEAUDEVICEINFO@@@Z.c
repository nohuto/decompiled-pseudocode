/*
 * XREFs of ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0092C0C
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B00 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B70 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0095780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHidInput::IsPublicPointerDevice(CHidInput *this, struct DEVICEINFO *a2)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    return *(_DWORD *)(*((_QWORD *)a2 + 60) + 24LL) != 7;
  return result;
}
