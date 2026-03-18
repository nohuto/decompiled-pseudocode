/*
 * XREFs of ProcessSuspendedEventMessage @ 0x1C0124B64
 * Callers:
 *     _ScheduleDispatchNotification @ 0x1C0026670 (_ScheduleDispatchNotification.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C0008274 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0124CC8 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v9; // r10d
  HWND v10; // rdi
  struct tagQMSG *v11; // r11
  struct tagQMSG *QMsgForCoalesce; // rax
  int v13; // edx
  int v14; // r10d

  if ( a2 != 9 )
    return 1LL;
  if ( a4 >= 0x400 )
    v9 = 1;
  else
    v9 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
  if ( v9 )
  {
    if ( v9 >= 2 )
    {
      if ( a3 )
        v10 = *a3;
      else
        v10 = 0LL;
      v11 = 0LL;
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce((struct tagMLIST *)(*(_QWORD *)(a1 + 432) + 24LL), a4, v10, v11);
        v11 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( *((_DWORD *)QMsgForCoalesce + 24) == 9
          && *((_QWORD *)QMsgForCoalesce + 13) == a1
          && !ProcessComplexCoalescence(
                v14,
                v13,
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
