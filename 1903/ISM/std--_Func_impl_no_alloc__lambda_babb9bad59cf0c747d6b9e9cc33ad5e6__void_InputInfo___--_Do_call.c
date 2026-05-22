/*
 * XREFs of std::_Func_impl_no_alloc__lambda_babb9bad59cf0c747d6b9e9cc33ad5e6__void_InputInfo___::_Do_call @ 0x1800BF350
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_babb9bad59cf0c747d6b9e9cc33ad5e6__void_InputInfo___::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(**(_QWORD **)(a1 + 8) + 232LL) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1674LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      a4);
    JUMPOUT(0x1800BF395LL);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 16), 0LL);
}
