/*
 * XREFs of GreGetStockObject @ 0x1C001F590
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 *     bInitICM @ 0x1C01F3DF8 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C001F53C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00C83E0 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v6; // eax
  void *result; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v4 + 340) )
    {
      LOBYTE(v2) = *(_DWORD *)(v4 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
  }
  if ( (unsigned int)v1 > 0x11 )
  {
LABEL_11:
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v1];
  }
  v6 = 205824;
  if ( !_bittest(&v6, v1) || (v2 & 0xF) != 0 || (result = gahStockObjects96[v1]) == 0LL )
  {
    if ( (_DWORD)v1 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_11;
  }
  return result;
}
