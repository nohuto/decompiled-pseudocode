/*
 * XREFs of ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023F8E0
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00E9C8C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F184 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F5C4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTooltipHandleTimer(struct tagTOOLTIPWND *a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // edx
  struct tagWND *DesktopWindow; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v2 = 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && (unsigned int)TooltipAnimate(a1) )
        SetTooltipTimer(a1, 2, *((_DWORD *)a1 + 3));
    }
    else
    {
      xxxResetTooltip(a1);
    }
  }
  else
  {
    DesktopWindow = (struct tagWND *)GetDesktopWindow(*(_QWORD *)a1);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
    v14 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
    v15 = DesktopWindow;
    HMLockObject(DesktopWindow);
    if ( xxxSetParentWorker(*(struct tagWND **)a1, DesktopWindow, 0LL, 0) )
      v2 = xxxShowTooltip(a1);
    else
      v2 = 0;
    ThreadUnlock1(v11, v10, v12);
  }
  return v2;
}
