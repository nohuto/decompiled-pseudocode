/*
 * XREFs of _lambda_f29621112cb61d54fa7d920aa1c0b80f_::__lambda_f29621112cb61d54fa7d920aa1c0b80f_ @ 0x18030BD90
 * Callers:
 *     _Concurrency::_Continuation_func_transformer_Concurrency::task_bool__void_::_Perform_::_1_::dtor$5 @ 0x18030E014 (_Concurrency--_Continuation_func_transformer_Concurrency--task_bool__void_--_Perfor_ea_18030E014.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f29621112cb61d54fa7d920aa1c0b80f_::__lambda_f29621112cb61d54fa7d920aa1c0b80f_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
