/*
 * XREFs of ?Uninitialize@CFallbackWindow@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1800FE660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFallbackWindow::Uninitialize(HWND *this, struct IImmersiveMonitorManager *a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (**(int (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2)(
         a2,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v4) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 10));
  RemovePropW(*(this - 4), L"UIA_WindowVisibilityOverridden");
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
