/*
 * XREFs of IsChildWindowDpiIsolationEnabled @ 0x1C0118198
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall IsChildWindowDpiIsolationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v8; // ecx
  char CurrentThreadDpiAwarenessContext; // al

  v4 = 0;
  if ( gfDwmChildWindowDpiIsolationEnabled )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(v6 + 292) == 1 )
      {
        if ( a1 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, v6, a3, a4);
          v6 = *(_QWORD *)(a2 + 40);
          LOBYTE(v8) = CurrentThreadDpiAwarenessContext;
        }
        if ( (*(_DWORD *)(v6 + 288) & 0xF) == 2 || (v8 & 0xF) != 2 )
          return 1;
      }
    }
  }
  return v4;
}
