/*
 * XREFs of xxxHungAppDemon @ 0x1C00AE720
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     zzzCalcStartCursorHide @ 0x1C00ABC40 (zzzCalcStartCursorHide.c)
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C00AE9B8 (IdleTimerProc.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00CFA70 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 */

struct tagWND *xxxHungAppDemon()
{
  unsigned __int64 v0; // rdx
  struct tagWND *result; // rax
  struct tagWND *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = (struct tagWND *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(struct tagWND **)(grpdeskRitInput + 8LL);
    if ( *((_QWORD *)result + 3) )
    {
      v11 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = VWPLNextBase((struct tagVWPL *)gpvwplHungRedraw, v0, v2, &v11, v9, v10);
        v2 = result;
        if ( !result )
          break;
        if ( (unsigned int)IsHungWindow(result) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v3, v4);
          v12 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
          v13 = v2;
          HMLockObject(v2);
          v8 = *((_QWORD *)v2 + 5);
          if ( (*(_BYTE *)(v8 + 19) & 0x10) != 0 )
          {
            ClearHungFlag(v2, 0x310u);
            ProcessHungWindow(v2);
            v8 = *((_QWORD *)v2 + 5);
          }
          if ( (*(_BYTE *)(v8 + 19) & 8) != 0 )
          {
            ClearHungFlag(v2, 0x308u);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v8, v6, v7);
        }
      }
    }
  }
  return result;
}
