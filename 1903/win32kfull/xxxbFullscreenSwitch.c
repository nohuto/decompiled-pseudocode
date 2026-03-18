/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C020D4C8
 * Callers:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int64 result; // rax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v3 = 1;
  v4 = ValidateHwnd(a2);
  v8 = v4;
  if ( !v4 || (((*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v18 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
  v19 = v8;
  HMLockObject(v8);
  while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    xxxSleepThread2(0, 1, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 23LL) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v8, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v8, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v8, 1) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v16 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v8, 0) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v16 = gbFullScreen == 2;
    }
    if ( v16 )
    {
LABEL_22:
      ThreadUnlock1(v14, v13, v15);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(v14, v13, 3, 17, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
    }
    v3 = 0;
    goto LABEL_22;
  }
  ThreadUnlock1(v11, v10, v12);
  return 0LL;
}
