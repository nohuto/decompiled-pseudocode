/*
 * XREFs of PoFxIdleDevice @ 0x140159F08
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x140142DEC (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402D9598 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD2F0 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402DDCA8 (PopPepResetDeviceAccountingLevel.c)
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1406E7F30 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C64 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EDE38 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EE154 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3EC (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x14083F3F8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140841840 (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086A900 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxIdleComponent @ 0x1400FECEC (PopFxIdleComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 808LL) & 1) == 0 )
    {
      --*(_DWORD *)(v1 + 120);
      if ( (*(_DWORD *)(v1 + 296) & 4) != 0 )
      {
        v4 = *(_QWORD *)(v1 + 80);
        for ( i = 0; i < *(_DWORD *)(v4 + 812); ++i )
          PopFxIdleComponent(v4, i, 2);
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
