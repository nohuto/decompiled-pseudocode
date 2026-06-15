/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056510
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180050BA0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x18005638C (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800C9A60 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE540 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE640 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE730 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE7F0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CED10 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800CFECC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800D29F0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D2C50 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D2E30 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800DAE50 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800DECA0 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800EC074 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r10d
  unsigned __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v4;
  }
  else
  {
    v4 = 0;
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - a1;
      while ( v5 + v3 )
      {
        v7 = *(_WORD *)&a1[v6];
        if ( !v7 )
          break;
        *(_WORD *)a1 = v7;
        a1 += 2;
        if ( !--v3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      a1 -= 2;
      v4 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
