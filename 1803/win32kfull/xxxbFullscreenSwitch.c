/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C01D27FC
 * Callers:
 *     xxxConsoleControl @ 0x1C0011F74 (xxxConsoleControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  v4 = ValidateHwnd(a2);
  v5 = v4;
  if ( !v4 )
    return 4294967291LL;
  v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669;
  if ( (v6 & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v15;
  v15[1] = v5;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
  while ( ghSwitcher )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 23LL) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v5, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v5, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 1) || ghSwitcher )
        goto LABEL_19;
      v13 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 0) || ghSwitcher )
        goto LABEL_19;
      v13 = gbFullScreen == 2;
    }
    if ( v13 )
    {
LABEL_20:
      ThreadUnlock1(v11, v10, v12);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  ThreadUnlock1(ThreadWin32Thread, v7, v9);
  return 0LL;
}
