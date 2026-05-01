/*
 * XREFs of ?MoveItemToDesktop@CGridTelemetryController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x18039A8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::MoveItemToDesktop(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        struct IVirtualDesktopItem *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *, struct IVirtualDesktopItem *))(*(_QWORD *)v3 + 72LL))(
      v3,
      a2,
      a3);
}
