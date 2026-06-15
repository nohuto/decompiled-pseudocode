/*
 * XREFs of ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180054FB0
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800574E0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18005509C (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800551D0 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005EF84 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180061E4C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddOsProcessingModeSupport(CEndpointCharacteristics *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupport(this);
  if ( v2 < 0 )
  {
    v6 = 2091LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(this);
  if ( v2 < 0 )
  {
    v6 = 2092LL;
    goto LABEL_11;
  }
  v9 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v9);
  if ( v2 < 0 )
  {
    v6 = 2093LL;
    goto LABEL_11;
  }
  v9 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  v2 = ((__int64 (__fastcall *)(CEndpointCharacteristics *, __int64, struct _GUID *, _QWORD))CEndpointCharacteristics::AddInternalVoiceProcessingMode)(
         this,
         v3,
         &v9,
         0LL);
  if ( v2 < 0 )
  {
    v6 = 2094LL;
    goto LABEL_11;
  }
  v9 = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
  v2 = ((__int64 (__fastcall *)(CEndpointCharacteristics *, __int64, struct _GUID *, __int64))CEndpointCharacteristics::AddInternalVoiceProcessingMode)(
         this,
         v4,
         &v9,
         1LL);
  if ( v2 < 0 )
  {
    v6 = 2095LL;
    goto LABEL_11;
  }
  v9 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v9);
  if ( v2 < 0 )
  {
    v6 = 2096LL;
    goto LABEL_11;
  }
  if ( !*((_DWORD *)this + 46) )
    return 0LL;
  v9 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v7 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v9);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x833,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
