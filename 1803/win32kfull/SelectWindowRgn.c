/*
 * XREFs of SelectWindowRgn @ 0x1C00C4C7C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2230 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     NtUserSetWindowRgnEx @ 0x1C01F5F90 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C00C4D8C (DwmAsyncChildClipRgnChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00C4F48 (GreUpdateSpriteClipRgn.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

char __fastcall SelectWindowRgn(struct tagWND *a1, HRGN a2, unsigned int a3, __int64 a4)
{
  struct tagMONITOR *v4; // rax
  int v6; // esi
  HRGN MonitorRegionForDpi; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rax
  __int64 v14; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v16; // r9

  v4 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
  v6 = 0;
  MonitorRegionForDpi = a2;
  v9 = *((_QWORD *)v4 + 21);
  if ( v9 )
  {
    LOBYTE(v4) = *((_BYTE *)v4 + 21);
    if ( ((unsigned __int8)v4 & 8) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 1288, 1);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return (char)v4;
      GreDeleteObject(v9);
      v6 = 1;
    }
    v4 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v4 + 21) = 0LL;
  }
  if ( (unsigned __int64)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      v14 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v14 + 31) & 1) == 0 )
        return (char)v4;
      if ( (*(_BYTE *)(v14 + 19) & 0x40) == 0 )
        return (char)v4;
      v4 = _MonitorFromWindowInternal(a1, 0LL, 0LL, a4);
      if ( !v4 )
        return (char)v4;
      WindowCompositedDpi = GetWindowCompositedDpi(a1);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v16, WindowCompositedDpi);
      SetOrClrWF(1, (__int64)a1, 1288, 1);
    }
    else
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(
          MonitorRegionForDpi,
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
      GreSetRegionOwner(MonitorRegionForDpi, 0LL);
      v6 = 1;
    }
    v4 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v4 + 21) = MonitorRegionForDpi;
  }
  if ( v6 )
  {
    LODWORD(v4) = IsWindowDesktopComposed(a1);
    if ( (_DWORD)v4 )
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v12 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
          GreUpdateSpriteClipRgn(v11, *(_QWORD *)a1, *(_QWORD *)(v12 + 168), a3);
      }
      v13 = (void *)ReferenceDwmApiPort(v11, v10, v12);
      LOBYTE(v4) = DwmAsyncChildClipRgnChange(v13);
    }
  }
  return (char)v4;
}
