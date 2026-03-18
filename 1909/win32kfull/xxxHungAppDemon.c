/*
 * XREFs of xxxHungAppDemon @ 0x1C004F540
 * Callers:
 *     <none>
 * Callees:
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     zzzCalcStartCursorHide @ 0x1C004CA60 (zzzCalcStartCursorHide.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C004F7D8 (IdleTimerProc.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C0071140 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ProcessHungWindow @ 0x1C01514D4 (ProcessHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 */

struct tagWND *xxxHungAppDemon()
{
  unsigned __int64 v0; // rdx
  struct tagWND *result; // rax
  struct tagWND *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v8; // [rsp+28h] [rbp-30h]
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = (struct tagWND *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(struct tagWND **)(grpdeskRitInput + 8LL);
    if ( *((_QWORD *)result + 3) )
    {
      v9 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = VWPLNextBase((struct tagVWPL *)gpvwplHungRedraw, v0, v2, &v9, v7, v8);
        v2 = result;
        if ( !result )
          break;
        if ( (unsigned int)IsHungWindow(result) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v10 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
          v11 = v2;
          HMLockObject(v2);
          v6 = *((_QWORD *)v2 + 5);
          if ( (*(_BYTE *)(v6 + 19) & 0x10) != 0 )
          {
            ClearHungFlag(v2, 0x310u);
            ProcessHungWindow(v2);
            v6 = *((_QWORD *)v2 + 5);
          }
          if ( (*(_BYTE *)(v6 + 19) & 8) != 0 )
          {
            ClearHungFlag(v2, 0x308u);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v6, v4, v5);
        }
      }
    }
  }
  return result;
}
