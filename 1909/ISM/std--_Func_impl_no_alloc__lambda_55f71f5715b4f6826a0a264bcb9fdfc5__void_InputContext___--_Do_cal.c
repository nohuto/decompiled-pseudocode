/*
 * XREFs of std::_Func_impl_no_alloc__lambda_55f71f5715b4f6826a0a264bcb9fdfc5__void_InputContext___::_Do_call @ 0x1800BF070
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_55f71f5715b4f6826a0a264bcb9fdfc5__void_InputContext___::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax

  v2 = *a2;
  if ( !**a2 )
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v2, *(__int64 **)(a1 + 8));
  v2[10] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
  result = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v2 + 22) = *(_DWORD *)(result + 112);
  return result;
}
