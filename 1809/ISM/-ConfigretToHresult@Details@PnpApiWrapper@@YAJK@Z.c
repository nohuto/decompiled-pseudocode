/*
 * XREFs of ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800766E8
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180076734 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180076A38 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180076B94 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x180076F70 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     ?UnregisterNotification@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x18007706C (-UnregisterNotification@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpApiWrapper::Details::ConfigretToHresult(PnpApiWrapper::Details *this)
{
  if ( !(_DWORD)this )
    return 0LL;
  if ( (_DWORD)this == 2 )
    return 2147942414LL;
  if ( (_DWORD)this != 13 )
  {
    if ( (_DWORD)this == 19 )
      return 2147500037LL;
    if ( (_DWORD)this != 37 )
    {
      if ( (_DWORD)this == 51 )
        return 2147942405LL;
      if ( (_DWORD)this != 55 )
        return 2147549183LL;
    }
  }
  return 2147943568LL;
}
