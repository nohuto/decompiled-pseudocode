/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C0002950
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001C90 (CiSchedulerSleep.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001E30 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerWait @ 0x1C00020D0 (CiSchedulerWait.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002C40 (CiSchedulerRemoveTaskIndex.c)
 *     CiProcessSuspend @ 0x1C0002DF0 (CiProcessSuspend.c)
 * Callees:
 *     <none>
 */

void __fastcall CiSchedulerUpdateTimer(unsigned __int64 a1)
{
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_12;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v2 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( a1 <= v2 )
      {
        v3 = a1 - v2;
        if ( v3 < -2000 )
          v3 += 2000LL;
      }
      else
      {
        v3 = 0LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v3, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    return;
  }
LABEL_12:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
}
