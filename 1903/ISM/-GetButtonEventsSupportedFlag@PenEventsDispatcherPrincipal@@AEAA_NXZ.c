/*
 * XREFs of ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180031FFC
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180031A10 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 *     ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180032EE0 (-SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Ro.c)
 *     ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x1800331B8 (-SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(PenEventsDispatcherPrincipal *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 188) )
    return *((_DWORD *)this + 48) != 0;
  return result;
}
