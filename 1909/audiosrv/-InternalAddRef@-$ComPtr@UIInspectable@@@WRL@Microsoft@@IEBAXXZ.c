/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002A5B0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180035F38 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180043994 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180051F98 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180059178 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180063970 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1800697F0 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_ @ 0x18006AE3C (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--_lambda_a70780d56f8e66bb41551630c0bd5b4d_.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800D503C (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800EC530 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x1800ED31C (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x1800ED36C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F16E8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComP.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F1D14 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F2098 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F25C0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F2770 (-GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Micr.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F29A0 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F2BD0 (-GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WR.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800F2F3C (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     ??$?0UIStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAUIStreamGroupProxy@@@Z @ 0x1800F3E54 (--$-0UIStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAUIStreamGroupProx.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800F906C (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x180107158 (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1801081C8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18010CCA0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z.c)
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18011D430 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18011D810 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012EA8C (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x18013FB88 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
