/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C01B3BC0
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01B3B48 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355D0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 */

__int64 RequestModernAppClose(void)
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rdi
  __int64 *v3; // rsi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // rax
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v1 )
    return 0LL;
  if ( gbLockScreenActive )
  {
    LOBYTE(v0) = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 236LL) == 17;
    return (unsigned int)v0;
  }
  v3 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v1);
  if ( CompositionInputWindowUIOwner )
    v1 = (__int64)CompositionInputWindowUIOwner;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)v1);
  if ( TopLevelHostForComponent )
    v1 = (__int64)TopLevelHostForComponent;
  TopLevelWindow = GetTopLevelWindow(v1);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    v7 = (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 234LL) & 0x40) == 0;
    v8 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 96);
    if ( v7 )
      v8 = v3;
    v3 = v8;
  }
  while ( TopLevelWindow );
  if ( !v8 )
    return 0LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x20u, *v8);
  v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  if ( v9 )
    v0 = *(struct tagTHREADINFO **)(v9 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v0, 0);
  return 1LL;
}
