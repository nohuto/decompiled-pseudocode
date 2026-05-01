/*
 * XREFs of _lambda_84b1643b811106f063aa32e54d395206_::operator() @ 0x18018F834
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_84b1643b811106f063aa32e54d395206___::Invoke @ 0x1801905A0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_84b1643b811106f063_ea_1801905A0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_84b1643b811106f063aa32e54d395206_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v9 = 0LL;
  if ( (*v2)(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v9) < 0
    || (**(_BYTE **)(a1 + 8) = 1,
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *(_QWORD *)a1),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
