/*
 * XREFs of std::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)___lambda_903ccf9134cc2c82d7843578f8252e54__void_ @ 0x180066E50
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180061E4C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor____::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor______lambda_903ccf9134cc2c82d7843578f8252e54__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_180153638;
  result = a1;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
