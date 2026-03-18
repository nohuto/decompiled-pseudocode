/*
 * XREFs of PoFxIdleDevice @ 0x1401457DC
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14015E1C4 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F5050 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9BA4 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402FAC54 (PopPepResetDeviceAccountingLevel.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402FB520 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopPlIdleDeviceIterator @ 0x140305070 (PopPlIdleDeviceIterator.c)
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140702480 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14072FFA4 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407302F4 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x14087AE38 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408A6BA0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1400B1570 (PoFxIdleComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rbp
  KIRQL v3; // di
  ULONG_PTR v4; // rsi
  unsigned int i; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v1 = 0LL;
  if ( v1 )
  {
    v2 = (volatile LONG *)(v1 + 88);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 816LL) & 1) == 0 )
    {
      --*(_DWORD *)(v1 + 120);
      if ( (*(_DWORD *)(v1 + 296) & 4) != 0 )
      {
        v4 = *(_QWORD *)(v1 + 80);
        for ( i = 0; i < *(_DWORD *)(v4 + 820); ++i )
          PoFxIdleComponent(v4, i);
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
  }
}
