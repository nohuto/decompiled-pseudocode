/*
 * XREFs of ndisSignalD0RequestComplete @ 0x1C0014420
 * Callers:
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C00A6EC0 (ndisSignalD0CompleteWorkItem.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9B80 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BC49C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

int __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // al
  _NDIS_MINIPORT_EVENT LastD0Reason; // si
  int v6; // ecx
  unsigned __int64 MaxWakeIrpLatencyMs; // rax
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  ULONGLONG v9; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LastD0Reason = a1->LastD0Reason;
  a1->SyncFlags &= ~2u;
  a1->LastD0CompleteStatus = a2;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
  if ( (byte_1C00E8043 & 4) != 0 )
    McTemplateK0jqxq(
      v6,
      (unsigned int)&DevicePowerOnComplete,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      a2);
  if ( LastD0Reason == NdisMEventD0_SystemResume )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, NdisSSSystemPower);
  }
  else if ( (unsigned __int16)LastD0Reason > NdisMEventD0_SystemResume
         && ((unsigned __int16)LastD0Reason <= NdisMEventD0_AoAcWake || LastD0Reason == NdisMEventD0_AoAcSurpriseWake) )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  LODWORD(MaxWakeIrpLatencyMs) = KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
  AoAc = a1->AoAc;
  if ( AoAc )
  {
    ++AoAc->WakeIrpCount;
    v9 = KeQueryUnbiasedInterruptTime() - AoAc->WakeIrpStartTime + 5000;
    MaxWakeIrpLatencyMs = AoAc->MaxWakeIrpLatencyMs;
    AoAc->LastWakeIrpLatencyMs = v9 / 0x2710;
    if ( MaxWakeIrpLatencyMs <= v9 / 0x2710 )
      MaxWakeIrpLatencyMs = v9 / 0x2710;
    AoAc->TotalWakeIrpLatencyMs += v9 / 0x2710;
    AoAc->MaxWakeIrpLatencyMs = MaxWakeIrpLatencyMs;
  }
  return MaxWakeIrpLatencyMs;
}
