/*
 * XREFs of WPP_SF_qdg @ 0x1800C896C
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18004E640 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18005FBB0 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005FE80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180060254 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C6498 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7BA0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE1F0 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800E64C0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
