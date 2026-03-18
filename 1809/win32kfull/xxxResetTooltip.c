/*
 * XREFs of xxxResetTooltip @ 0x1C00DE0BC
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0151258 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00DE190 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 31LL) & 0x10) != 0 )
  {
    v3 = 0LL;
    xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, 0, 0, 0, 0, 151, 1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v5 )
      v3 = *(_QWORD *)(v5 + 104);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    xxxSetParentWorker(*(struct tagWND **)a1, (struct tagWND *)v3, 0LL, 0);
    ThreadUnlock1(v8, v7);
  }
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
