/*
 * XREFs of ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B038
 * Callers:
 *     VerifyCriticalProcessing @ 0x1800060A4 (VerifyCriticalProcessing.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180059178 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$0 @ 0x180072650 (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$1 @ 0x1800729E4 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$1.c)
 *     _VerifyCriticalProcessing_::_1_::dtor$3 @ 0x180072D68 (_VerifyCriticalProcessing_--_1_--dtor$3.c)
 *     _CAudioSrv::Terminate_::_1_::dtor$0 @ 0x1800C15C3 (_CAudioSrv--Terminate_--_1_--dtor$0.c)
 *     ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800DF4D0 (-GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E1520 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     _std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call_::_1_::dtor$0 @ 0x1800E1588 (_std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call_--_1_--dtor$.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E15A0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     _std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call_::_1_::dtor$0 @ 0x1800E15FA (_std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call_--_1_--dtor$.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18012E780 (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 *     _CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$0 @ 0x18012E821 (_CSpatialAudioTech--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::FreeAtmosCheck_::_1_::dtor$0 @ 0x18012EC64 (_CSpatialAudioTech--FreeAtmosCheck_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1);
}
