/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C000DA70
 * Callers:
 *     xxxDesktopThread @ 0x1C000D660 (xxxDesktopThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     zzzWakeInputIdle @ 0x1C000DC44 (zzzWakeInputIdle.c)
 *     SleepInputIdle @ 0x1C000DDCC (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C000DE4C (xxxRemoveQueueCompletion.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0046E70 (IsMulDestroyBrushInternalSupported.c)
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C005FD6C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, char a2)
{
  LegacyInputDispatcher *v4; // r14
  int v5; // esi
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  bool v11; // al
  __int64 result; // rax
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+94h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C032FBC0;
  if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
    v4 = (LegacyInputDispatcher *)qword_1C0326F70;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
  {
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 15615;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 720LL));
  }
  if ( !a1 )
  {
    IsMulDestroyBrushInternalSupported();
    goto LABEL_10;
  }
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) & 0x1CFF) != 0 )
  {
LABEL_21:
    if ( a1 )
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
    return (unsigned int)v5;
  }
  else if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x400) == 0
         || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0LL, 0LL, 11);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(gptiCurrent);
    while ( 1 )
    {
LABEL_10:
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v8, v9);
      if ( a1 )
      {
        v10 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v13 = 0;
        v14 = 384;
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(gpMouseSensor, (struct CEventBitmap *)&v13, v4);
        if ( v5 < 0 )
          goto LABEL_14;
        v10 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v10;
LABEL_14:
      EnterCrit(0LL, 1LL);
      if ( v5 != *((_DWORD *)v4 + 15) )
        goto LABEL_27;
      v11 = (unsigned int)xxxRemoveQueueCompletion() != 0;
      if ( a1 )
      {
LABEL_16:
        if ( !v6 )
        {
          if ( a1 )
            xxxUpdateInputHangInfo(0LL, 1LL);
          if ( v5 == *((_DWORD *)v4 + 15) )
          {
            SleepInputIdle(gptiCurrent);
            v5 = a1 != 0 ? v5 : 0;
          }
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v11
          || (v7 = 3LL,
              LOBYTE(v7) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0,
              ((unsigned __int8)v7 & ((a2 & 8) != 0)) != 0) )
        {
LABEL_27:
          v6 = 0;
          goto LABEL_16;
        }
        v6 = 1;
      }
    }
  }
  return result;
}
