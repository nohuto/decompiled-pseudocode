/*
 * XREFs of std::_Func_impl_no_alloc__lambda_74c2b2c0e9aa5d0a847dc755b1427617__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy___::_Do_call @ 0x180033F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Func_impl_no_alloc__lambda_74c2b2c0e9aa5d0a847dc755b1427617__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h]

  v7 = a1;
  v2 = *a2;
  v3 = 0;
  *a2 = 0LL;
  v7 = v2;
  v8 = &v7;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 88LL))(v2 + 8) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 32LL))(v7 + 8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x163,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v4,
        -2);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v7);
    return 1;
  }
  else
  {
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v7);
  }
  return v3;
}
