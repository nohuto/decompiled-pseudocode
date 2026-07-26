/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6B4C
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C00B990C (ndisSetBusySync.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B5880 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00B5D40 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelIdleRequestSync @ 0x1C00B7FE0 (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C00B851C (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int32 a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  __int16 i; // bp
  KIRQL v8; // r14
  __int64 v9; // r9
  int v10; // edx
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  _DWORD *v12; // rcx

  SelectiveSuspend = a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, 0LL) )
      break;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    if ( !i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          15,
          36,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          (char)a1,
          a2);
      }
      if ( (byte_1C00E8041 & 8) != 0 )
        McTemplateK0qq(v11, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2);
    }
    ndisCancelIdleRequestSync((char)a1, a2);
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3, v9);
  ndisSelectiveSuspendSetResumeBusyReason(v12, 0, a2, a3);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
}
