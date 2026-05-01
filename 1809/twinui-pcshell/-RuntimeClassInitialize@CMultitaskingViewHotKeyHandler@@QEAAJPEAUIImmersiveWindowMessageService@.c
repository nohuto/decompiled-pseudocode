/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1802E8090
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1802E752C (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(
        CMultitaskingViewHotKeyHandler *this,
        struct IImmersiveWindowMessageService *a2,
        struct IImmersiveMonitorManager *a3,
        struct IApplicationTargetingTracker *a4,
        struct IMultitaskingViewTaskScheduler *a5,
        struct IApplicationViewCollection *a6)
{
  struct IApplicationTargetingTracker *v10; // rax
  struct IImmersiveWindowMessageService *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IImmersiveWindowMessageService **)this + 4) != a2 )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v12 = (struct IImmersiveWindowMessageService *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 5, (__int64)a3);
  v10 = (struct IApplicationTargetingTracker *)*((_QWORD *)this + 6);
  if ( v10 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IApplicationTargetingTracker *))(*(_QWORD *)a4 + 8LL))(a4);
      v10 = (struct IApplicationTargetingTracker *)*((_QWORD *)this + 6);
    }
    v12 = v10;
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a6);
  return CMultitaskingViewHotKeyHandler::_RegisterHotKeys(this);
}
