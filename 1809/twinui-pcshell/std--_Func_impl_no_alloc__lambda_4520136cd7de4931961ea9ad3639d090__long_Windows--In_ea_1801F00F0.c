/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4520136cd7de4931961ea9ad3639d090__long_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_::_Do_call @ 0x1801F00F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4520136cd7de4931961ea9ad3639d090__long_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v3; // rcx
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  v4 = *(_OWORD *)(a1 + 8);
  v5 = **a2;
  v6 = *(unsigned int *)(a1 + 24);
  *(_OWORD *)v10 = v4;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(v5 + 48))(v3, v10, v6);
  v8 = v7;
  if ( v7 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BB,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
