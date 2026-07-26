/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6524
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C00B990C (ndisSetBusySync.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B5880 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00B5D40 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B6040 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C00B851C (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdfSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int32 a2, unsigned int a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v7; // bp
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r15
  __int64 v11; // r9
  _DWORD *v12; // rcx
  PKSPIN_LOCK v13; // rcx
  int v14; // edx
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  LOBYTE(v9) = 1;
  v10 = v8;
  if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v9) )
  {
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3, v11);
    ndisSelectiveSuspendSetResumeBusyReason(v12, 0, a2, a3);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v10);
  }
  else
  {
    if ( !SelectiveSuspend->PendingControlOps.Value
      && !SelectiveSuspend->PendingPnPEventCount
      && !SelectiveSuspend->PendingDirectOidCount
      && !SelectiveSuspend->PendingCancelDirectOidCount
      && !SelectiveSuspend->PendingSendNblCount
      && !SelectiveSuspend->PendingCancelSendCount
      && !SelectiveSuspend->PendingReceiveReturnCount
      && !SelectiveSuspend->StopFlags.Value )
    {
      v7 = 1;
      KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
    }
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3, v11);
    KeReleaseSpinLock(v13, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        15,
        37,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        (char)a1,
        a2);
    }
    if ( (byte_1C00E8041 & 8) != 0 )
      McTemplateK0qq(v15, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2);
    if ( v7 )
      ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
    else
      KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
  }
}
