/*
 * XREFs of ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004DF2C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180046410 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall MPCGestureHandler::AttachProvider(
        char **a1,
        __int64 *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 **result; // rax
  __int64 v7; // rdi
  char *v8; // rbx
  char *v9; // r12
  __int64 v10; // r15
  char *v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *a2;
  if ( *a2 )
    result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(*a2);
  v8 = a1[114];
  v9 = a1[115];
  while ( v8 != v9 )
  {
    v10 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)v8);
      result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v10 == v7 )
      break;
    v8 += 8;
  }
  if ( v7 )
    result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v11 = a1[115];
  if ( v8 != v11 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x179,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      a4);
    JUMPOUT(0x18004E04FLL);
  }
  if ( a1[116] == v11 )
  {
    result = (wil::details::in1diag3 **)std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
                                          a1 + 114,
                                          v11,
                                          a2);
  }
  else
  {
    v12 = *a2;
    *(_QWORD *)v11 = *a2;
    if ( v12 )
      result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    a1[115] += 8;
  }
  if ( *a2 )
    return (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
