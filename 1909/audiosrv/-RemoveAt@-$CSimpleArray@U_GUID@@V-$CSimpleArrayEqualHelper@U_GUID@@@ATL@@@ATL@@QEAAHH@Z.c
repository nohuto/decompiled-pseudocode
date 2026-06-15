/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180119EC8
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180052594 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18005390C (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180053A40 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x180055234 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180062C8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x1800680D4 (_lambda_7015787212d530e04e17b0823ea9804b_--operator().c)
 *     _lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator() @ 0x18006879C (_lambda_dafa27b10e800d3b9522ef34e8247ca2_--operator().c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  __int64 v2; // r9
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v4 )
    return 0LL;
  if ( a2 != v4 - 1 )
  {
    v5 = v4 - a2;
    v6 = *(_QWORD *)a1 + 16 * v2;
    v7 = 16LL * (v5 - 1);
    if ( v7 )
    {
      if ( !v6 || v6 == -16 )
      {
        *(_DWORD *)_o__errno(v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * v5 < v7 )
      {
        *(_DWORD *)_o__errno(v6) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0((void *)v6, (const void *)(v6 + 16), 16LL * (v5 - 1));
      v4 = *(_DWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 8) = v4 - 1;
  return 1LL;
}
