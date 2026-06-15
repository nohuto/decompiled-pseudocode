/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_bf1bae6b7e2166dc9e61c759e3ea5164___ @ 0x180107420
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Copy @ 0x18010DFF0 (std--_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffec_ea_18010DFF0.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_bf1bae6b7e2166dc9e61c759e3ea5164___(
        _OWORD *a1)
{
  HANDLE ProcessHeap; // rax
  char *result; // rax

  ProcessHeap = GetProcessHeap();
  result = (char *)HeapAlloc(ProcessHeap, 0, 0xC0uLL);
  *(_QWORD *)result = off_180158680;
  *(_OWORD *)(result + 8) = *a1;
  *(_OWORD *)(result + 24) = a1[1];
  *(_OWORD *)(result + 40) = a1[2];
  *(_OWORD *)(result + 56) = a1[3];
  *(_OWORD *)(result + 72) = a1[4];
  *(_OWORD *)(result + 88) = a1[5];
  *(_OWORD *)(result + 104) = a1[6];
  *(_OWORD *)(result + 120) = a1[7];
  a1 += 8;
  *(_OWORD *)(result + 136) = *a1;
  *(_OWORD *)(result + 152) = a1[1];
  *(_OWORD *)(result + 168) = a1[2];
  *((_QWORD *)result + 23) = *((_QWORD *)a1 + 6);
  return result;
}
