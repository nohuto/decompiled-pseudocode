/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C020D218
 * Callers:
 *     xxxConsoleControl @ 0x1C0020828 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v3 = 1;
  v4 = ValidateHwnd(a2);
  v7 = v4;
  if ( !v4 || (((*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
  v17 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
  v18 = v7;
  HMLockObject(v7);
  while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    xxxSleepThread2(0, 1, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 23LL) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v7, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v7, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v7, 1) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v15 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v7, 0) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v15 = gbFullScreen == 2;
    }
    if ( v15 )
    {
LABEL_22:
      ThreadUnlock1(v13, v12, v14);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(v13, v12, 3, 17, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
    }
    v3 = 0;
    goto LABEL_22;
  }
  ThreadUnlock1(v10, v9, v11);
  return 0LL;
}
