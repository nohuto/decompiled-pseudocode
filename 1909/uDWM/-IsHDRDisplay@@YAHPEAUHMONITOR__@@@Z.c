/*
 * XREFs of ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18002C528
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x18007FF24 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18002C5CC (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 */

__int64 __fastcall IsHDRDisplay(HMONITOR a1)
{
  unsigned int v1; // ebx
  DISPLAYCONFIG_PATH_INFO v3; // [rsp+20h] [rbp-88h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+70h] [rbp-38h] BYREF
  __int64 v5; // [rsp+84h] [rbp-24h]
  int v6; // [rsp+8Ch] [rbp-1Ch]

  v1 = 0;
  if ( !(unsigned int)TryGetPathInfoFromHMonitor(a1, &v3) )
    return 0LL;
  requestPacket.adapterId = v3.targetInfo.adapterId;
  requestPacket.id = v3.targetInfo.id;
  v5 = 0LL;
  v6 = 0;
  requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_ADVANCED_COLOR_INFO;
  requestPacket.size = 32;
  if ( DisplayConfigGetDeviceInfo(&requestPacket) < 0 )
    return 0LL;
  if ( (v5 & 2) != 0 )
    return (v5 & 4) == 0;
  return v1;
}
