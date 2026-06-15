/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_7015787212d530e04e17b0823ea9804b___ @ 0x180067EDC
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180053A40 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Copy @ 0x180068A80 (std--_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_7015787212d530e04e17b0823ea9804b___(
        _OWORD *a1)
{
  char *result; // rax

  result = (char *)operator new(0xC0uLL);
  *(_QWORD *)result = off_180152610;
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
