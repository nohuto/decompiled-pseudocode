/*
 * XREFs of ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x18008C320
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800079B0 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputRouter::SupportedInputUpdatedForTarget(
        DWMInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 92);
  v4 = (_QWORD *)*((_QWORD *)this + 93);
  while ( v2 != v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IDWMSupportedInputTarget *))(*(_QWORD *)*v2 + 24LL))(*v2, a2);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x807,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18008C38BLL);
    }
    ++v2;
  }
}
