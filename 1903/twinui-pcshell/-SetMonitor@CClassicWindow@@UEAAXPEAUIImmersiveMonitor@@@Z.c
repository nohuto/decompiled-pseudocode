/*
 * XREFs of ?SetMonitor@CClassicWindow@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x1800827D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindow::SetMonitor(
        CClassicWindow *this,
        void (__fastcall ***a2)(struct IImmersiveMonitor *, GUID *, __int64 *))
{
  __int64 *v2; // rsi
  void (__fastcall *v4)(struct IImmersiveMonitor *, GUID *, __int64 *); // rbx

  v2 = (__int64 *)((char *)this + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  if ( a2 )
  {
    v4 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v4((struct IImmersiveMonitor *)a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v2);
  }
}
