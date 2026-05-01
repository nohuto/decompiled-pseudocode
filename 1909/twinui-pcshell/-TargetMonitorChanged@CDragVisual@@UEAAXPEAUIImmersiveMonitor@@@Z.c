/*
 * XREFs of ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x1803F8A70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803F754C (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

void __fastcall CDragVisual::TargetMonitorChanged(CDragVisual *this, IUnknown *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+60h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  if ( !v4 || (*(int (__fastcall **)(__int64, IUnknown *, int *))(*(_QWORD *)v4 + 96LL))(v4, a2, &v6) >= 0 && !v6 )
  {
    if ( *v2 )
    {
      *((_DWORD *)this + 30) = -1;
      *((_BYTE *)this + 250) = 1;
    }
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(v2, (__int64)a2);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_ImmersiveLayout,
           &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
           &ppvOut) < 0
      || (*(int (__fastcall **)(void *, __int64, char *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, 10LL, (char *)this + 168) < 0 )
    {
      ((void (__fastcall *)(IUnknown *, char *))a2->lpVtbl[3].QueryInterface)(a2, (char *)this + 168);
    }
    IUnknown_GetScaleFactor(a2, (enum DEVICE_SCALE_FACTOR *)this + 80);
    SetWindowPos(*((HWND *)this + 16), 0LL, 0, 0, 0, 0, 0x13u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
}
