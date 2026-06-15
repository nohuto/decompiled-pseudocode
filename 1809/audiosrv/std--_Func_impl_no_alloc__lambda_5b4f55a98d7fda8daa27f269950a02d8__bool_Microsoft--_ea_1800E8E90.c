/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5b4f55a98d7fda8daa27f269950a02d8__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64_::_Do_call @ 0x1800E8E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_5b4f55a98d7fda8daa27f269950a02d8__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // esi
  _DWORD *v5; // rax
  char v6; // bl

  v4 = **(_DWORD **)(a1 + 8);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2) == v4 )
    return 1;
  v5 = *(_DWORD **)(a1 + 16);
  v6 = 0;
  if ( *v5 == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 112LL))(*a2, v4) )
      return 1;
  }
  return v6;
}
