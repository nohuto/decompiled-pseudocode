/*
 * XREFs of IsChildWindowDpiIsolationEnabled @ 0x1C0110FE0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall IsChildWindowDpiIsolationEnabled(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v6; // ecx
  char CurrentThreadDpiAwarenessContext; // al

  v2 = 0;
  if ( gfDwmChildWindowDpiIsolationEnabled )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(v4 + 292) == 1 )
      {
        if ( a1 )
        {
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, v4);
          v4 = *(_QWORD *)(a2 + 40);
          LOBYTE(v6) = CurrentThreadDpiAwarenessContext;
        }
        if ( (*(_DWORD *)(v4 + 288) & 0xF) == 2 || (v6 & 0xF) != 2 )
          return 1;
      }
    }
  }
  return v2;
}
