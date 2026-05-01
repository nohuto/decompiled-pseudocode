/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800783D0
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180078110 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180188780 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180188960 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18018A758 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1802F857C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>::reset(
        HWND *a1,
        HWND a2)
{
  HWND v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DestroyWindow(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
