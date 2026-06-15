/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C1A4
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154 (_lambda_bf1bae6b7e2166dc9e61c759e3ea5164_--operator().c)
 * Callees:
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C1D4 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_i.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1801107BC (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 */

void __fastcall LogAecEffectPolicyInsertion(
        const struct _AEC_POLICY_RESULTS *a1,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        __int64 a4)
{
  bool v4; // zf
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_DWORD *)a1 + 15) == 4;
  v5 = (__int128)*a3;
  if ( v4 )
    LogAecEffectPolicy<8>(a1, a2, &v5, a4, v5, *((_QWORD *)&v5 + 1));
  else
    LogAecEffectPolicy<70368744177672>(a1, a2, &v5, a4, v5, *((_QWORD *)&v5 + 1));
}
