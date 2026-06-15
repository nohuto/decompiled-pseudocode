/*
 * XREFs of ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18000DFA4
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006BA4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180008490 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180014940 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180052CAC (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180053A40 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180115B58 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 * Callees:
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000F54C (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsConnectorModeSupported(
        CEndpointCharacteristics *this,
        __int64 a2,
        struct _GUID *a3)
{
  __int64 SupportedConnectorModesInternal; // rax
  unsigned int v5; // r9d
  int v6; // ecx
  int v7; // r10d
  __int64 v8; // r8
  __int64 v9; // rax

  SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, a2, 0LL);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(SupportedConnectorModesInternal + 8);
  if ( v7 <= 0 )
  {
LABEL_7:
    v6 = -1;
  }
  else
  {
    v8 = *(_QWORD *)SupportedConnectorModesInternal;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 16LL * v6) - *(_QWORD *)&a3->Data1;
      if ( !v9 )
        v9 = *(_QWORD *)(v8 + 16LL * v6 + 8) - *(_QWORD *)a3->Data4;
      if ( !v9 )
        break;
      if ( ++v6 >= v7 )
        goto LABEL_7;
    }
  }
  LOBYTE(v5) = v6 != -1;
  return v5;
}
