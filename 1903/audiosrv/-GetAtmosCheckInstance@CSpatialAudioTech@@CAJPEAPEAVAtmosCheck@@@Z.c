/*
 * XREFs of ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180068790
 * Callers:
 *     VerifyCriticalProcessing @ 0x180006084 (VerifyCriticalProcessing.c)
 *     ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800DF970 (-GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E19C0 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E1A40 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18012EBC0 (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180043548 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall CSpatialAudioTech::GetAtmosCheckInstance(struct AtmosCheck **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(&CSpatialAudioTech::s_atmosLock, &lpCriticalSection);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&CSpatialAudioTech::s_spAtmosCheck);
  v2 = lpCriticalSection;
  *a1 = (struct AtmosCheck *)CSpatialAudioTech::s_spAtmosCheck;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
