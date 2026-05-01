/*
 * XREFs of std::_Func_impl_no_alloc__lambda_68c656283d9006bd46440e35f225ab57__long_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_::_Do_call @ 0x1801F0150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_68c656283d9006bd46440e35f225ab57__long_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a2;
  v3 = **a2;
  *(_OWORD *)v7 = *(_OWORD *)(a1 + 8);
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD))(v3 + 48))(v2, v7, 0LL);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59B,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
