/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180068BF0
 * Callers:
 *     VerifyCriticalProcessing @ 0x1800060A4 (VerifyCriticalProcessing.c)
 *     ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800DF4D0 (-GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E1520 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E15A0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18012E780 (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x1800636F4 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(*a1);
  return v1;
}
