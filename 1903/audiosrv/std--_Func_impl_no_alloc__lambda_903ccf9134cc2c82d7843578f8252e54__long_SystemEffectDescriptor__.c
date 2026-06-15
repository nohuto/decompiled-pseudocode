/*
 * XREFs of std::_Func_impl_no_alloc__lambda_903ccf9134cc2c82d7843578f8252e54__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move @ 0x180067A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_903ccf9134cc2c82d7843578f8252e54__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180153638;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
