/*
 * XREFs of WPP_SF_qg_guid_ @ 0x1800C8B00
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C78D0 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7BA0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, a2, (__int64 *)va);
}
