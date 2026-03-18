/*
 * XREFs of xxxResetTooltip @ 0x1C01369EC
 * Callers:
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023FF00 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00CB2A0 (xxxSetWindowPosAndBand.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0136A3C (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *v2; // rcx
  struct tagWND *result; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]

  KillTooltipTimer(a1);
  v2 = *(struct tagWND **)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 31LL) & 0x10) != 0 )
  {
    v4 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    xxxSetWindowPosAndBand(v2, 0LL, 0, 0, 0, 0, 151, 1);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v8 )
      v4 = *(struct tagWND **)(v8 + 104);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    v13 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
    v14 = v4;
    HMLockObject(v4);
    xxxSetParentWorker(*(struct tagWND **)a1, v4, 0LL, 0);
    ThreadUnlock1(v11, v10, v12);
  }
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
