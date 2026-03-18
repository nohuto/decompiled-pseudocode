/*
 * XREFs of IsChildWindowDpiIsolationEnabled @ 0x1C00F2158
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall IsChildWindowDpiIsolationEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  int v7; // ecx
  char CurrentThreadDpiAwarenessContext; // al

  v3 = 0;
  if ( gfDwmChildWindowDpiIsolationEnabled )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(v5 + 292) == 1 )
      {
        if ( a1 )
        {
          v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, v5, a3);
          v5 = *(_QWORD *)(a2 + 40);
          LOBYTE(v7) = CurrentThreadDpiAwarenessContext;
        }
        if ( (*(_DWORD *)(v5 + 288) & 0xF) == 2 || (v7 & 0xF) != 2 )
          return 1;
      }
    }
  }
  return v3;
}
