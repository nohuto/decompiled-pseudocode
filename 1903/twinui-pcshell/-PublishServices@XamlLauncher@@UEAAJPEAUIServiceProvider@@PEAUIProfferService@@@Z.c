/*
 * XREFs of ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802F4710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::PublishServices(
        XamlLauncher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(struct IProfferService *, SID *, unsigned __int64, char *))a3->lpVtbl->ProfferService)(
         a3,
         &SID_ImmersiveLauncher,
         ((unsigned __int64)this - 8) & -(__int64)(this != (XamlLauncher *)56),
         (char *)this + 104);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16E,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
