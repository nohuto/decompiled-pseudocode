/*
 * XREFs of ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180115CB0
 * Callers:
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18005509C (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180061E4C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator() @ 0x180067740 (_lambda_dafa27b10e800d3b9522ef34e8247ca2_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  GUID *v11; // r8
  _OWORD *v12; // rdx

  v5 = _o__recalloc(*a1, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v5 )
    return 0LL;
  v6 = a1[1];
  *a1 = v5;
  v7 = _o__recalloc(v6, *((_DWORD *)a1 + 4) + 1, 16LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = *a1;
  v10 = 16LL * *((int *)a1 + 4);
  a1[1] = v7;
  v11 = (GUID *)(v10 + v9);
  if ( v11 )
  {
    *v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v8 = a1[1];
  }
  v12 = (_OWORD *)(v8 + v10);
  if ( v12 )
    *v12 = *a3;
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
