/*
 * XREFs of ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x1800FE140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800FE6F8 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::Invoke(IUnknown **this)
{
  int VisibleApp; // eax
  void *ppvOut; // [rsp+40h] [rbp+10h] BYREF
  struct IImmersiveApplication *v5; // [rsp+48h] [rbp+18h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  VisibleApp = CFallbackWindow::_GetVisibleApp((CFallbackWindow *)(this - 12), &v5);
  ppvOut = 0LL;
  if ( VisibleApp < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *(this - 10),
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 4LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *(this - 10),
           &IID_IImmersiveApplicationManager,
           &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 64LL))(
        ppvOut,
        v5,
        1LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  UiaRaiseAutomationEvent(
    (IRawElementProviderSimple *)((unsigned __int64)(this - 1) & -(__int64)(this != (IUnknown **)96)),
    20009);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return 0LL;
}
