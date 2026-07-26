/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C007316C
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C0075F58 (ndisSetBusySync.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C0072414 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00726E8 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072CB0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C0074CC8 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdfSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int32 a2, unsigned int a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v7; // r14
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r15
  __int64 v11; // r9
  _DWORD *v12; // rcx
  PKSPIN_LOCK v13; // rcx
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx

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
    if ( (unsigned __int8)byte_1C00A025E >= 4u )
      WPP_SF_qD(0x24u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a1, a2);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0qq(v14, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2);
    if ( v7 )
      ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
    else
      KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
  }
}
