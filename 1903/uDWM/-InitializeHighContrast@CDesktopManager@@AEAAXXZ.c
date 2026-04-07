/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18004F724
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002C664 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044E58 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this)
{
  char IsImmersiveColorUsingHighContrast; // al
  DWORD SysColor; // ecx

  IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  SysColor = 0;
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 142) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 142) = 0;
  }
  *((_DWORD *)this + 143) = SysColor;
}
