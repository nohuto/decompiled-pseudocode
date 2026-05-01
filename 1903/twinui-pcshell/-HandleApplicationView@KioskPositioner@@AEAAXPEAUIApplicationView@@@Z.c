/*
 * XREFs of ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18039CE2C
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18039BFB0 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18039D1E0 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18039E770 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

void __fastcall KioskPositioner::HandleApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  __int64 *v3; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 80);
  v5 = *((_QWORD *)this + 26);
  v6 = *v3;
  v7[0] = off_18045FFE8;
  v7[7] = v7;
  v7[1] = this;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct IApplicationView *, __int64, _QWORD *))(v6 + 16))(
          v3,
          a2,
          v5,
          v7) )
    KioskPositioner::SetUwpViewFullScreen(this, a2, 0LL);
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 48LL))(a2);
}
