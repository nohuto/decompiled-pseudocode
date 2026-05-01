/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@@Z @ 0x180264390
 * Callers:
 *     ??$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18025B9E0 (--$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall XamlExplorerHostWindow::RuntimeClassInitialize(
        XamlExplorerHostWindow *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        int a3,
        struct IPrivilegedPresentationOperations *a4,
        struct IXamlExplorerHost *a5)
{
  struct IXamlExplorerHost *v9; // rdx
  struct IXamlExplorerHostWindowCreatedCallback *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IXamlExplorerHostWindowCreatedCallback **)this + 6) != a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v11 = (struct IXamlExplorerHostWindowCreatedCallback *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, (__int64)a4);
  v9 = a5;
  *((_DWORD *)this + 20) = a3;
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 8, (__int64)v9);
  return 0LL;
}
