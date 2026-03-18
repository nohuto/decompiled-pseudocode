/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C000DC88
 * Callers:
 *     xxxDesktopThread @ 0x1C000D5F0 (xxxDesktopThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     SleepInputIdle @ 0x1C000DE60 (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C000DEEC (xxxRemoveQueueCompletion.c)
 *     zzzWakeInputIdle @ 0x1C000DFF4 (zzzWakeInputIdle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxUpdateInputHangInfo @ 0x1C003EC90 (xxxUpdateInputHangInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0044F50 (IsMulDestroyBrushInternalSupported.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C012FDE4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01647DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0164800 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, char a2)
{
  LegacyInputDispatcher *v4; // r14
  int v5; // esi
  char v6; // r15
  int v7; // eax
  LeaveEnterCrit *v8; // rcx
  bool v9; // al
  __int64 result; // rax
  char v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+94h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C032C058;
  if ( gptiCurrent == gTermIO[2] )
    v4 = (LegacyInputDispatcher *)qword_1C032A628;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
  {
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 15615;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 728LL));
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
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v11);
      if ( a1 )
      {
        v7 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v12 = 0;
        v13 = 768;
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(gpMouseSensor, (struct CEventBitmap *)&v12, v4);
        if ( v5 < 0 )
          goto LABEL_14;
        v7 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v7;
LABEL_14:
      LeaveEnterCrit::~LeaveEnterCrit(v8);
      if ( v5 != *((_DWORD *)v4 + 15) )
        goto LABEL_37;
      v9 = (unsigned int)xxxRemoveQueueCompletion() != 0;
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
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0 && (a2 & 8) != 0 )
        {
LABEL_37:
          v6 = 0;
          goto LABEL_16;
        }
        v6 = 1;
      }
    }
  }
  return result;
}
