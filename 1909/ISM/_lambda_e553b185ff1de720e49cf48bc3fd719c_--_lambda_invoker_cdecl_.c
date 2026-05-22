/*
 * XREFs of _lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_ @ 0x1800D33B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059B94 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 1;
  if ( a1[1] )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
    *v2 = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*a1 + 104LL))(*a1, a2 + 8, v2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      138LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return 0;
}
