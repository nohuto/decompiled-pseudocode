/*
 * XREFs of ?GetViewForTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x180270610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitcherTabViewManagerWrapper::GetViewForTab(
        SwitcherTabViewManagerWrapper *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, struct IApplicationView **))(**((_QWORD **)this + 4)
                                                                                            + 24LL))(
         *((_QWORD *)this + 4),
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    (const char *)(unsigned int)v3);
  return v4;
}
