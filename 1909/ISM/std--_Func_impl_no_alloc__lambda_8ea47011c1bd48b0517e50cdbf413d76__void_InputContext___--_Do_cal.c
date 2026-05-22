/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___::_Do_call @ 0x1800BF170
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_DWORD *__fastcall std::_Func_impl_no_alloc__lambda_8ea47011c1bd48b0517e50cdbf413d76__void_InputContext___::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rbx
  _DWORD *result; // rax

  v2 = *a2;
  if ( !**a2 )
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v2, *(__int64 **)(a1 + 8));
  v2[10] = **(_QWORD **)(a1 + 16);
  result = *(_DWORD **)(a1 + 24);
  *((_DWORD *)v2 + 22) = *result;
  return result;
}
