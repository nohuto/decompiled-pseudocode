/*
 * XREFs of ?HandleSwitchToView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180141AA0
 * Callers:
 *     ?HandleSwitchToView@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x18009DB50 (-HandleSwitchToView@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180141178 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::HandleSwitchToView(FullScreenPositioner *this, struct IUnknown *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = FullScreenPositioner::FullScreenViewGetsFocus((FullScreenPositioner *)((char *)this - 104), a2);
  if ( v3 < 0 )
  {
    v4 = 857LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].AddRef)(a2);
  if ( v3 < 0 )
  {
    v4 = 858LL;
    goto LABEL_5;
  }
  return (unsigned int)v3;
}
