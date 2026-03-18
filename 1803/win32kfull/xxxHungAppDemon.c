/*
 * XREFs of xxxHungAppDemon @ 0x1C001DAC0
 * Callers:
 *     <none>
 * Callees:
 *     IdleTimerProc @ 0x1C001DC24 (IdleTimerProc.c)
 *     zzzCalcStartCursorHide @ 0x1C001DF00 (zzzCalcStartCursorHide.c)
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 */

__int64 xxxHungAppDemon()
{
  __int64 result; // rax
  unsigned int v1; // edi
  struct tagVWPL *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= gtimeStartCursorHide )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( *(_QWORD *)(result + 24) )
    {
      v1 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = (__int64)gpvwplHungRedraw;
        if ( !gpvwplHungRedraw || *((_DWORD *)gpvwplHungRedraw + 3) )
          break;
        if ( v1 >= *(_DWORD *)gpvwplHungRedraw )
          goto LABEL_21;
        result = v1 + 1;
        if ( gpvwplHungRedraw[2 * v1 + 3] != v2 )
          result = v1;
        v1 = result;
        if ( (unsigned int)result >= *(_DWORD *)gpvwplHungRedraw )
        {
LABEL_21:
          v1 = 0;
          v2 = 0LL;
        }
        else
        {
          _mm_lfence();
          result = 2LL * (unsigned int)result;
          v2 = gpvwplHungRedraw[2 * v1 + 3];
        }
        if ( !v2 )
          break;
        if ( (unsigned int)IsHungWindow(v2) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v7[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v7;
          v7[1] = v2;
          _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
          v6 = *((_QWORD *)v2 + 5);
          if ( (*(_BYTE *)(v6 + 19) & 0x10) != 0 )
          {
            ClearHungFlag(v2);
            ProcessHungWindow(v2);
            v6 = *((_QWORD *)v2 + 5);
          }
          if ( (*(_BYTE *)(v6 + 19) & 8) != 0 )
          {
            ClearHungFlag(v2);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v6, v4, v5);
        }
      }
    }
  }
  return result;
}
