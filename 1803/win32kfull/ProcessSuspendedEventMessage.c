/*
 * XREFs of ProcessSuspendedEventMessage @ 0x1C0102C18
 * Callers:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C003BFF0 (_ScheduleDispatchNotification.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0102CF4 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C0102D2C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  int v8; // r11d
  HWND v9; // rbp
  struct tagQMSG *v10; // rdi
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v12; // edx
  unsigned int v13; // r11d

  if ( a2 != 9 )
    return 1LL;
  if ( a4 >= 0x400 )
    v8 = 1;
  else
    v8 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( a3 )
        v9 = *a3;
      else
        v9 = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce((struct tagMLIST *)(*(_QWORD *)(a1 + 424) + 24LL), a4, v9, v10);
        v10 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( *((_DWORD *)QMsgForCoalesce + 24) == 9
          && *((_QWORD *)QMsgForCoalesce + 13) == a1
          && !(unsigned int)ProcessComplexCoalescence(
                              v13,
                              v12,
                              a5,
                              a6,
                              (unsigned __int64 *)QMsgForCoalesce + 4,
                              (__int64 *)QMsgForCoalesce + 5) )
        {
          return 0LL;
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
