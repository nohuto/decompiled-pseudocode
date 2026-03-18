/*
 * XREFs of ProcessSuspendedEventMessage @ 0x1C012E4E0
 * Callers:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C00FF110 (_ScheduleDispatchNotification.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C012E5D4 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C012E60C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  HWND v10; // rbp
  struct tagQMSG *v11; // rdi
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v13; // edx
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

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
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        (__int64)v14,
        *(_QWORD *)(a1 + 424));
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce((struct tagMLIST *)(*(_QWORD *)(a1 + 424) + 24LL), a4, v10, v11);
        v11 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( *((_DWORD *)QMsgForCoalesce + 24) == 9
          && *((_QWORD *)QMsgForCoalesce + 13) == a1
          && !(unsigned int)ProcessComplexCoalescence(
                              v9,
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
