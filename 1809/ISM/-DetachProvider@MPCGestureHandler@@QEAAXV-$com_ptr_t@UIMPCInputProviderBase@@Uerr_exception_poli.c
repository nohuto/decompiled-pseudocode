/*
 * XREFs of ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004E058
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045CE4 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandler::DetachProvider(_QWORD *a1, _QWORD *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*a2);
  v7 = (_QWORD *)a1[114];
  v8 = (_QWORD *)a1[115];
  while ( v7 != v8 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v9 == v6 )
      break;
    ++v7;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 == (_QWORD *)a1[115] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x188,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      a4);
    JUMPOUT(0x18004E1B7LL);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
  ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 10), v10);
  v11 = (__int64 *)a1[115];
  v12 = v7 + 1;
  if ( v12 != v11 )
  {
    do
    {
      v13 = *v12;
      *v12 = 0LL;
      v14 = *(v12 - 1);
      *(v12 - 1) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      ++v12;
    }
    while ( v12 != v11 );
    v11 = (__int64 *)a1[115];
  }
  v15 = *(v11 - 1);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  a1[115] -= 8LL;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
}
