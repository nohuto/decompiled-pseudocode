/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D6428
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01D65B0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010BDC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C001152C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  __int64 TopLevelWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  CompositionInputWindowUIOwner = a1;
  v13 = 0LL;
  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 27LL) & 8) != 0
    || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) != 0 )
  {
    return 0;
  }
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
    v13 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
    v14 = CompositionInputWindowUIOwner;
    HMLockObject(CompositionInputWindowUIOwner);
  }
  v10 = xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0);
  if ( v2 )
    ThreadUnlock1(v9, v8, v11);
  return v10;
}
