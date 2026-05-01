/*
 * XREFs of _lambda_3f71cdeb8240cb075049aeb0082167b8_::operator() @ 0x1801703B8
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3f71cdeb8240cb075049aeb0082167b8___::Invoke @ 0x180171190 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3f71cdeb8240cb075049aeb0082167b.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3f71cdeb8240cb075049aeb0082167b8_::operator()(
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
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, *(_QWORD *)a1),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
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
