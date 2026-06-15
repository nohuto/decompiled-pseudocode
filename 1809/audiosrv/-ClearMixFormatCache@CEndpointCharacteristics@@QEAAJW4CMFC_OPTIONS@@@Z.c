/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250
 * Callers:
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004C0C0 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     wil::details::lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___::_lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___ @ 0x1800CE850 (wil--details--lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___--_lambda_call__lambda_8ed1.c)
 *     wil::details::lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___::_lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___ @ 0x1800CE8DC (wil--details--lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___--_lambda_call__lambda_abe0.c)
 *     _lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator() @ 0x1800CECC8 (_lambda_f2d43d9fce42a4bdda65a41e87b82fa0_--operator().c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3C20 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4B14 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x18012EB04 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ClearMixFormatCache(*(struct IPropertyStore **)(a1 + 40), a2 <= 1, (a2 & 0xFFFFFFFD) == 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    6738LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
