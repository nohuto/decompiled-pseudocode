/*
 * XREFs of _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x180062B6C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800551D0 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x180067078 (_lambda_7015787212d530e04e17b0823ea9804b_--operator().c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180038694 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

struct _GUID *__fastcall lambda_e86e403555f745251996716a8cfcb9a8_::operator()(__int64 a1, struct _GUID *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  GUID *v5; // rdx
  int v6; // r11d
  GUID v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = 16LL * *(int *)(a1 + 8);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)(v4 + *(_QWORD *)a1 + 72LL),
                       (_QWORD *)(a1 + 12)) == -1
    && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)(v4 + v3 + 72),
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    v5 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v8 = *v5;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v3, a2, v6, &v8, 1);
  return a2;
}
