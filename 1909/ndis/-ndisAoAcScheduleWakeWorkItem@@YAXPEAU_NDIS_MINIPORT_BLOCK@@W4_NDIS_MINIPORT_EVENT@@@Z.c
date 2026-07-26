/*
 * XREFs of ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BB16C
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6E90 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BCCB0 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 *     McTemplateK0jqx @ 0x1C00A6360 (McTemplateK0jqx.c)
 */

void __fastcall ndisAoAcScheduleWakeWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !AoAc->WakeWorkItemScheduled && (unsigned __int8)ndisReferenceMiniport((__int64)a1) )
  {
    AoAc->WakeWorkItemScheduled = 1;
    AoAc->WakeWorkItemWakeReason = a2;
    if ( a2 == NdisMEventD0_AoAcWake )
      AoAc->WakeFlags.Value |= 1u;
    if ( (byte_1C00E8083 & 4) != 0 )
      McTemplateK0jqx(
        v7,
        &DeviceWaitWakeComplete,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        9u,
        0x26u,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    ndisScheduleWorkItemInternal((__int64)&AoAc->WakeWorkItem);
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
}
