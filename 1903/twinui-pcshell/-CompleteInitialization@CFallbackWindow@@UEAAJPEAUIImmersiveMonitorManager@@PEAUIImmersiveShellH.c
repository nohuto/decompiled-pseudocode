/*
 * XREFs of ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x180123B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18012470C (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::CompleteInitialization(
        CFallbackWindow *this,
        struct IImmersiveMonitorManager *a2,
        struct IImmersiveShellHookService *a3)
{
  __int64 (__fastcall *v6)(struct IImmersiveMonitorManager *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor **v7; // r14
  int v8; // ebx
  __int64 (__fastcall *v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IImmersiveMonitorManager *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 64LL);
  v7 = (struct IImmersiveMonitor **)((char *)this + 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  v8 = v6(a2, v7);
  if ( v8 >= 0 )
  {
    v11 = 0LL;
    v9 = **(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = v9(a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, &v11);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v11 + 24LL))(
             v11,
             ((unsigned __int64)this + 8) & -(__int64)(this != (CFallbackWindow *)72),
             (char *)this + 40);
      if ( v8 >= 0 )
      {
        CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 72), *v7);
        (*(void (__fastcall **)(char *, struct IImmersiveShellHookService *))(*((_QWORD *)this - 6) + 32LL))(
          (char *)this - 48,
          a3);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return (unsigned int)v8;
}
