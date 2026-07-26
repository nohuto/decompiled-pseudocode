/*
 * XREFs of ndisSelectiveSuspendStop @ 0x1C00B9798
 * Callers:
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A72F8 (ndisWdfNotifySystemPower.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00B5F10 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B6210 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B62CC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisCancelIdleRequestSync @ 0x1C00B81B0 (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C00B86EC (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r12
  char v6; // bp
  unsigned int v7; // r14d
  KIRQL v8; // r15
  int v9; // edx
  char v10; // r13
  bool v11; // zf
  unsigned int Value; // eax
  KIRQL v13; // dl
  __int64 v14; // rdx
  KIRQL v15; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  v10 = ndisIsPowerReferencedForSelectiveSuspend((__int64)SelectiveSuspend, v7 != 0) == 0;
  if ( v7
    && !SelectiveSuspend->PendingControlOps.Value
    && !SelectiveSuspend->PendingPnPEventCount
    && !SelectiveSuspend->PendingDirectOidCount
    && !SelectiveSuspend->PendingCancelDirectOidCount
    && !SelectiveSuspend->PendingSendNblCount
    && !SelectiveSuspend->PendingCancelSendCount
    && !SelectiveSuspend->PendingReceiveReturnCount
    && !SelectiveSuspend->StopFlags.Value )
  {
    v6 = 1;
    KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      15,
      34,
      (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      (char)a1,
      a2);
  }
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        SelectiveSuspend->StopFlags.Value |= 0x40u;
        break;
      case 8:
        ++SelectiveSuspend->PendingPnPOpCount;
        SelectiveSuspend->StopFlags.Value |= 0x80u;
        break;
      case 11:
        SelectiveSuspend->StopFlags.Value |= 0x400u;
        break;
      case 13:
        ++SelectiveSuspend->PendingBindChangesCount;
        SelectiveSuspend->StopFlags.Value |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        SelectiveSuspend->StopFlags.Value |= 0x20u;
        break;
      case 1:
        SelectiveSuspend->StopFlags.Value |= 1u;
        break;
      case 2:
        SelectiveSuspend->StopFlags.Value |= 2u;
        break;
      case 3:
        SelectiveSuspend->StopFlags.Value |= 4u;
        SelectiveSuspend->Flags.Value |= 0x400u;
        break;
      case 4:
        SelectiveSuspend->StopFlags.Value |= 8u;
        break;
      case 5:
        SelectiveSuspend->StopFlags.Value |= 0x10u;
        break;
    }
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v10, a2, 0);
  if ( v7 )
  {
    if ( v6 )
      goto LABEL_42;
    v11 = KeReadStateEvent(&SelectiveSuspend->WdfD0LockedForSSEvent) == 0;
  }
  else
  {
    Value = SelectiveSuspend->Flags.Value;
    if ( (Value & 1) != 0 )
    {
      KeCancelTimer(&SelectiveSuspend->IdleTimer.Timer);
      SelectiveSuspend->Flags.Value &= ~1u;
      v5 = 1;
      Value = SelectiveSuspend->Flags.Value;
    }
    v11 = (Value & 0x200) == 0;
  }
  if ( !v11 )
  {
    v13 = v8;
LABEL_51:
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v13);
    return;
  }
LABEL_42:
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
  if ( !v7 )
  {
    ndisCancelWaitWake((__int64)a1);
    if ( v5 )
    {
      KeFlushQueuedDpcs();
      KeWaitForSingleObject(&SelectiveSuspend->IdleWorkItemCompleteEvent, Executive, 0, 0, 0LL);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v15 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value |= 0x200u;
    v13 = v15;
    goto LABEL_51;
  }
  if ( a2 == 6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
    ndisWdfSelectiveSuspendResumeOperations(a1, v14, 1);
  }
  else if ( v6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
  }
  else
  {
    KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
  }
}
