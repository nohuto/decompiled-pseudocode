/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180012790
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v2; // edi
  bool v4; // bp
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // r14d
  int v8; // eax

  v2 = a2 & 9;
  v4 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v5 = a2 & 0x40;
  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v6 = 2101248;
    v7 = 16781312;
  }
  else
  {
    v6 = 0x200000;
    v7 = 0x1000000;
  }
  if ( v4 && (v6 & *((_DWORD *)this + 20)) != v6 )
  {
    *((_DWORD *)this + 20) |= v6;
    CVisual::PropagateDirtyChildren(this);
  }
  if ( v2 )
  {
    v8 = *((_DWORD *)this + 20);
    if ( (v8 & 0x40000) == 0 )
    {
      *((_DWORD *)this + 20) = v8 | 0x40000;
      CVisual::PropagateDirtyChildren(this);
      v8 = *((_DWORD *)this + 20);
    }
    if ( (v8 & 0x4000000) == 0 )
    {
      *((_DWORD *)this + 20) = v8 | 0x4000000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  if ( v5 )
    CVisual::SetDirtyFlags(this, v7);
}
