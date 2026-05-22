/*
 * XREFs of std::_Func_impl_no_alloc__lambda_20e753dbe0ab8835e7d499c1ad6579b9__void_InputInfo_____ptr64_::_Do_call @ 0x180085F00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_20e753dbe0ab8835e7d499c1ad6579b9__void_InputInfo_____ptr64_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(**(_QWORD **)(a1 + 8) + 208LL) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x561,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      a4);
    JUMPOUT(0x180085F45LL);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 16), 0LL);
}
