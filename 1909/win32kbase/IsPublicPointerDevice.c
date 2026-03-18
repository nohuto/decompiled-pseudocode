/*
 * XREFs of IsPublicPointerDevice @ 0x1C00A6348
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00A6280 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00A62D0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C018DD6C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL) != 7;
  return result;
}
