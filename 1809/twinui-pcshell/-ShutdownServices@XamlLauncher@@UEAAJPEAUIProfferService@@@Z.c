/*
 * XREFs of ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x18029CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::ShutdownServices(XamlLauncher *this, struct IProfferService *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(struct IProfferService *, _QWORD))a2->lpVtbl->RevokeService)(
         a2,
         *((unsigned int *)this + 20));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 20) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x257,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
