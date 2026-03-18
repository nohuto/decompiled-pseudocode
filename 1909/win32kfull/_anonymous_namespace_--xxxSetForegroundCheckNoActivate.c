/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D6298
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01D6420 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  __int64 TopLevelWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // bl
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  CompositionInputWindowUIOwner = a1;
  v12 = 0LL;
  v2 = 0;
  v13 = 0LL;
  v14 = 0LL;
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
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
    v13 = CompositionInputWindowUIOwner;
    HMLockObject(CompositionInputWindowUIOwner);
  }
  v9 = xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0);
  if ( v2 )
    ThreadUnlock1(v8, v7, v10);
  return v9;
}
