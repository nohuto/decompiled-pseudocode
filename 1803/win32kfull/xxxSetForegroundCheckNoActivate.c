/*
 * XREFs of xxxSetForegroundCheckNoActivate @ 0x1C01A1BA0
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01A19F0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v2; // edi
  int v3; // eax
  __int64 TopLevelWindow; // rax
  __int64 v5; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) )
  {
    LOBYTE(v3) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( v3 )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
      v2 = 1;
    }
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0LL;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 27LL) & 8) != 0
    || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) != 0 )
  {
    return 0LL;
  }
  if ( v2 == 1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v12;
    v12[1] = CompositionInputWindowUIOwner;
    _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
  }
  v9 = xxxSetForegroundWindow2(CompositionInputWindowUIOwner, 0LL, 0, 0);
  if ( v2 == 1 )
    ThreadUnlock1(v8, v7, v10);
  return v9;
}
