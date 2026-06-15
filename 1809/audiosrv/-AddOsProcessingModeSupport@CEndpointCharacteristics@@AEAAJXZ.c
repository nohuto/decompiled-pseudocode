/*
 * XREFs of ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004BC40
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C940 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CA54 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CC48 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddOsProcessingModeSupport(CEndpointCharacteristics *this)
{
  int v2; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v3; // edx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupport(this);
  if ( v2 < 0 )
  {
    v5 = 2050LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2,
      v8.Data1);
    return (unsigned int)v2;
  }
  v2 = CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(this);
  if ( v2 < 0 )
  {
    v5 = 2051LL;
    goto LABEL_10;
  }
  v8 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v8);
  if ( v2 < 0 )
  {
    v5 = 2052LL;
    goto LABEL_10;
  }
  v2 = CEndpointCharacteristics::AddInternalSpeechProcessingMode(this, v3);
  if ( v2 < 0 )
  {
    v5 = 2053LL;
    goto LABEL_10;
  }
  v8 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v8);
  if ( v2 < 0 )
  {
    v5 = 2054LL;
    goto LABEL_10;
  }
  if ( !*((_DWORD *)this + 46) )
    return 0LL;
  v8 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v6 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v8);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x809,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v6,
    v8.Data1);
  return v7;
}
