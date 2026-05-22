/*
 * XREFs of wistd::__function::__func__lambda_8de94adaca024a5e8a1c65b0c4e4c0ea__void___cdecl(void)_::operator() @ 0x18002A560
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_8de94adaca024a5e8a1c65b0c4e4c0ea__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(ViewHierarchy *), _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 48LL) + 136LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL),
             ViewHierarchy::RegisterMessageProxyReconnectAdapterStatic,
             *(_QWORD *)(a1 + 8),
             4LL);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)result,
      v2);
    __debugbreak();
  }
  return result;
}
