/*
 * XREFs of ?xxxSetForegroundCheckNoActivate@@YAHPEAUtagWND@@@Z @ 0x1C01C30C4
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01C32A0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  unsigned int v1; // edi
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v3; // esi
  __int64 TopLevelWindow; // rax
  __int64 v5; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  CompositionInputWindowUIOwner = a1;
  v3 = 0;
  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
    v3 = 1;
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
  if ( v3 == 1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = CompositionInputWindowUIOwner;
    _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
  }
  LOBYTE(v1) = (unsigned int)xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0x40u) != 0;
  if ( v3 == 1 )
    ThreadUnlock1(v8, v7);
  return v1;
}
