/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8f57676e7b858bb260e910e9da6dd95c__void_InputContext_____ptr64_::_Do_call @ 0x180085DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8f57676e7b858bb260e910e9da6dd95c__void_InputContext_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( !**a2 )
  {
    v4 = **(_QWORD **)(a1 + 8);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(**(_QWORD **)(a1 + 8));
      v5 = *v2;
      *v2 = v4;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v2[2] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  result = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v2 + 6) = *(_DWORD *)(result + 168);
  return result;
}
