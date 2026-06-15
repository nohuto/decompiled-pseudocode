/*
 * XREFs of std::_Func_impl_no_alloc__lambda_12caadf06097df6adadb33ec639f4e18__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move @ 0x18004A140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_12caadf06097df6adadb33ec639f4e18__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18015C4C0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
