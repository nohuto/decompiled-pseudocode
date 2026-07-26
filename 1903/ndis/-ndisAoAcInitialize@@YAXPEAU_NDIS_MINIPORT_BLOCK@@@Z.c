/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C43C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisAoAcInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int v3; // edx
  unsigned __int8 v4; // al

  AoAc = a1->AoAc;
  if ( AoAc || (AoAc = (_NDIS_MINIPORT_AOAC *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x498uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(AoAc, 0, sizeof(_NDIS_MINIPORT_AOAC));
    KeInitializeSpinLock(&AoAc->Lock);
    AoAc->HandleList.Blink = &AoAc->HandleList;
    AoAc->HandleList.Flink = &AoAc->HandleList;
    AoAc->PendingIrpList.Blink = &AoAc->PendingIrpList;
    AoAc->PendingIrpList.Flink = &AoAc->PendingIrpList;
    KeInitializeEvent(&AoAc->PowerSuspendCompleteEvent, NotificationEvent, 1u);
    KeInitializeEvent(&AoAc->NicQuietCheckCompleteEvent, NotificationEvent, 1u);
    KeInitializeEvent(&AoAc->WdfAoAcDisengagedEvent, NotificationEvent, 1u);
    v4 = ndisCsResiliency;
    AoAc->ActiveState = NdisNicActive;
    AoAc->StopFlags.Value |= 0x100u;
    AoAc->IsInCsResiliency = v4;
    AoAc->WakeWorkItemScheduled = 0;
    AoAc->RemoteWakeEnabled = 1;
    AoAc->DirectedMacPatternPlumbed = 0;
    AoAc->WdfAoAcTransition = 0;
    AoAc->DerefTimeoutMilliseconds = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer(&AoAc->TempRefTimer, (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, a1);
    AoAc->TempRefWorkItem.Context = a1;
    AoAc->TempRefWorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisAoAcTempRefWorkItem;
    AoAc->WakeWorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisAoAcWakeWorkItem;
    AoAc->WakeWorkItem.Context = a1;
    a1->AoAc = AoAc;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      10,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      (char)a1);
  }
}
