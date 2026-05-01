/*
 * XREFs of ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1800983A0
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180097500 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098750 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180099CDC (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KioskPositioner::HandleApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rcx
  __int64 v5; // r8
  _QWORD v6[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 77);
  v6[0] = off_1803CC828;
  v6[1] = this;
  v5 = *((_QWORD *)this + 26);
  v6[7] = v6;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *, __int64, _QWORD *))(*(_QWORD *)v3 + 16LL))(
          v3,
          a2,
          v5,
          v6) )
    KioskPositioner::SetUwpViewFullScreen(this, a2, 0LL);
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 48LL))(a2);
}
