/*
 * XREFs of _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x18004B348
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154 (_lambda_bf1bae6b7e2166dc9e61c759e3ea5164_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18004D3FC (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 */

__int64 __fastcall lambda_e86e403555f745251996716a8cfcb9a8_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  GUID *v5; // rdx
  unsigned int v6; // r11d
  GUID v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = 16LL * *((int *)a1 + 2);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)(v4 + *a1 + 72),
                       (__int64 *)((char *)a1 + 12)) == -1
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
