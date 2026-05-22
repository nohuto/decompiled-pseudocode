/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800BFD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 < 0x120 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      80LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\kernelinputconnection\\kernelinputconnection.h",
      a4);
    __debugbreak();
  }
  v4 = *(_QWORD *)(a1 + 120);
  v7 = a2;
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v7);
  return 0LL;
}
