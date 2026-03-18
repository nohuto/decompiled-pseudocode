/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C01F7184
 * Callers:
 *     xxxConsoleControl @ 0x1C00B28FC (xxxConsoleControl.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  v4 = ValidateHwnd(a2);
  v5 = v4;
  if ( !v4 )
    return 4294967291LL;
  v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v6 & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v13;
  v13[1] = v5;
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
        xxxShowWindowEx(v5, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v5, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 1) || ghSwitcher )
        goto LABEL_19;
      v11 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 0) || ghSwitcher )
        goto LABEL_19;
      v11 = gbFullScreen == 2;
    }
    if ( v11 )
    {
LABEL_20:
      ThreadUnlock1(v10, v9);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    v3 = 0;
    goto LABEL_20;
  }
  ThreadUnlock1(ThreadWin32Thread, v7);
  return 0LL;
}
