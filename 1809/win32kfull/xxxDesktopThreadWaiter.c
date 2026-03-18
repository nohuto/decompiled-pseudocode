/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C00BC0B4
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C0005990 (IsMulDestroyBrushInternalSupported.c)
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzWakeInputIdle @ 0x1C00BC2A0 (zzzWakeInputIdle.c)
 *     SleepInputIdle @ 0x1C00BC434 (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C00BC4C0 (xxxRemoveQueueCompletion.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
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

  v4 = (LegacyInputDispatcher *)qword_1C0317620;
  if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
    v4 = (LegacyInputDispatcher *)qword_1C0317628;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
  {
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 15615;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
  }
  if ( !a1 )
  {
    IsMulDestroyBrushInternalSupported();
    goto LABEL_10;
  }
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) & 0x1CFF) != 0 )
  {
LABEL_21:
    if ( a1 )
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 0;
    return (unsigned int)v5;
  }
  else if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) == 0
         || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0LL, 0LL, 11);
    }
    xxxUpdateInputHangInfo(0LL, 0);
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
            xxxUpdateInputHangInfo(0LL, 1);
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
              LOBYTE(v7) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 8) != 0,
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
