/*
 * XREFs of ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800159D4 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001D580 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180025824 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x18004B734 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F0AC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_ @ 0x18006532C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--_lambda_d16d110d62607e9e7a123dfd70e3b2fb_.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800C6C4C (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E1358 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x1800E214C (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x1800E219C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6804 (--$_Emplace_reallocate@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComP.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6A04 (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800E7084 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800E7408 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7960 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7B20 (-GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Micr.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7D30 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7F80 (-GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WR.c)
 *     ??$?0UIStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAUIStreamGroupProxy@@@Z @ 0x1800E9224 (--$-0UIStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAUIStreamGroupProx.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED988 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1801113B0 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180111790 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180124D14 (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
