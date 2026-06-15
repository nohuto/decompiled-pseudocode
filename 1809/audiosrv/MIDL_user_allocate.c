/*
 * XREFs of MIDL_user_allocate @ 0x180014480
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x1800467F0 (PolicyConfigGetDeviceFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x1800B4D60 (s_sndevtResolveSoundAlias.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800BFD20 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800BFE20 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800BFF10 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800BFFD0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C0570 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800C82F0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800C8810 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800D67E0 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetMixFormat @ 0x1800D6D80 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DBA40 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     asm_AudioServerGetApplicationSubmixFormat @ 0x1800F24F0 (asm_AudioServerGetApplicationSubmixFormat.c)
 *     asm_GetApplicationSubmixes @ 0x1800F3060 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size > 0x40000 )
    return 0LL;
  else
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
}
