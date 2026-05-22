/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005AA30
 * Callers:
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x180059F98 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18005A960 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 *     ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x18006F71C (--$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z.c)
 *     ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x18006F950 (--$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetConstantForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800E2EA0 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetAllConstantsForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800E4140 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_1800E4140.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?UpdateConstantForTypeAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800E4340 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_1800E4340.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?UpdateConstantForDeviceAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800E4540 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@W_ea_1800E4540.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800E5D00 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@Fo.c)
 *     ?OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ @ 0x1800EB1B0 (-OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v3; // r10
  unsigned __int64 v4; // rax
  UINT32 v5; // edx
  HRESULT StringReference; // eax

  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v4 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v5 = v4;
  if ( (unsigned int)v4 < (int)v4 + 1 )
    v5 = v4;
  StringReference = WindowsCreateStringReference(v3, v5, (HSTRING_HEADER *)a1, (HSTRING *)(a1 + 24));
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    JUMPOUT(0x18005AABFLL);
  }
  return a1;
}
