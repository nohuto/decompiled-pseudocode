/*
 * XREFs of SelectWindowRgn @ 0x1C00EE40C
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0010E80 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C0235600 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0034798 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C00EE53C (DwmAsyncChildClipRgnChange.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025958C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

char __fastcall SelectWindowRgn(struct tagWND *a1, HRGN a2, int a3)
{
  struct tagMONITOR *v3; // rax
  int v5; // esi
  HRGN MonitorRegionForDpi; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rax
  __int64 v13; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v15; // r9

  v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
  v5 = 0;
  MonitorRegionForDpi = a2;
  v8 = *((_QWORD *)v3 + 21);
  if ( v8 )
  {
    LOBYTE(v3) = *((_BYTE *)v3 + 21);
    if ( ((unsigned __int8)v3 & 8) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x508u, 1);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return (char)v3;
      GreDeleteObject(v8);
      v5 = 1;
    }
    v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v3 + 21) = 0LL;
  }
  if ( (unsigned __int64)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      v13 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v13 + 31) & 1) == 0 )
        return (char)v3;
      if ( (*(_BYTE *)(v13 + 19) & 0x40) == 0 )
        return (char)v3;
      v3 = _MonitorFromWindowInternal(a1, 0, 0);
      if ( !v3 )
        return (char)v3;
      WindowCompositedDpi = GetWindowCompositedDpi(a1);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v15, WindowCompositedDpi);
      SetOrClrWF(1, (__int64)a1, 0x508u, 1);
    }
    else
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(MonitorRegionForDpi, *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL));
      GreSetRegionOwner(MonitorRegionForDpi, 0LL);
      v5 = 1;
    }
    v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v3 + 21) = MonitorRegionForDpi;
  }
  if ( v5 )
  {
    LODWORD(v3) = IsWindowDesktopComposed(a1);
    if ( (_DWORD)v3 )
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v11 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v11 + 26) & 8) != 0 )
          GreUpdateSpriteClipRgn(v10, *(struct PDEVOBJ **)a1, *(HRGN *)(v11 + 168), a3);
      }
      v12 = (void *)ReferenceDwmApiPort(v10, v9, v11);
      LOBYTE(v3) = DwmAsyncChildClipRgnChange(v12);
    }
  }
  return (char)v3;
}
