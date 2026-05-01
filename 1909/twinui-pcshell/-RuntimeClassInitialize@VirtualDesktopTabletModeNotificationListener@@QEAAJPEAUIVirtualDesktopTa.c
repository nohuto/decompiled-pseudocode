/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@@Z @ 0x18040FDAC
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModeNotificationListener@@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Z @ 0x18040F9E8 (--$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTab.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopTabletModeNotificationListener::RuntimeClassInitialize(
        VirtualDesktopTabletModeNotificationListener *this,
        struct IVirtualDesktopTabletModePolicy *a2,
        struct IServiceProvider *a3)
{
  struct IVirtualDesktopTabletModePolicy *v3; // rax
  struct IVirtualDesktopTabletModePolicy *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct IVirtualDesktopTabletModePolicy *)*((_QWORD *)this + 2);
  if ( v3 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopTabletModePolicy *))(*(_QWORD *)a2 + 8LL))(a2);
      v3 = (struct IVirtualDesktopTabletModePolicy *)*((_QWORD *)this + 2);
    }
    v8 = v3;
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 3, (__int64)a3);
  return 0LL;
}
