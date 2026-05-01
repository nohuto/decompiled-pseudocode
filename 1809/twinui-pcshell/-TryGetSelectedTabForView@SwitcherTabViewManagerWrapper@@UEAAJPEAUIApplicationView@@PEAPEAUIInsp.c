/*
 * XREFs of ?TryGetSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1802763E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsViewTabbed@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180272E50 (-IsViewTabbed@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 */

__int64 __fastcall SwitcherTabViewManagerWrapper::TryGetSelectedTabForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IInspectable **a3)
{
  int IsViewTabbed; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  IsViewTabbed = SwitcherTabViewManagerWrapper::IsViewTabbed(this, a2, &v10);
  if ( IsViewTabbed < 0 )
  {
    v7 = 43LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
      (const char *)(unsigned int)IsViewTabbed);
    return (unsigned int)IsViewTabbed;
  }
  if ( v10 )
  {
    IsViewTabbed = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IInspectable **))(**((_QWORD **)this + 4) + 48LL))(
                     *((_QWORD *)this + 4),
                     a2,
                     a3);
    if ( IsViewTabbed < 0 )
    {
      v7 = 46LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
