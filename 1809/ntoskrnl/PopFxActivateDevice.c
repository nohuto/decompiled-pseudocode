/*
 * XREFs of PopFxActivateDevice @ 0x14015A1A8
 * Callers:
 *     PopFxActivateDevicesForSx @ 0x140142E40 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14014357C (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxActivateDevice @ 0x14015A18C (PoFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x14018BE10 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402D9888 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402DDF98 (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PoFxActivateComponent @ 0x1400FE110 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

LONG __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax
  ULONG_PTR v10; // rbx
  unsigned int i; // edi
  struct _KPRCB *v12; // rcx
  __int64 j; // rdi
  ULONG_PTR v14; // rsi

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  if ( (*(_DWORD *)(v5 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 808LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 88));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v7;
    __writecr8(v7);
  }
  else
  {
    v10 = 0LL;
    ++*(_DWORD *)(v5 + 120);
    if ( (*(_DWORD *)(v5 + 296) & 4) != 0 )
    {
      v10 = *(_QWORD *)(v5 + 80);
      PopFxAddRefDevice((struct _IO_REMOVE_LOCK *)v10);
      for ( i = 0; i < *(_DWORD *)(v10 + 812); ++i )
        PoFxActivateComponent(v10, i, 2LL);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u);
      if ( (PopPoFxSystemIrpWaitForReportDevicePoweredReg || (*(_DWORD *)(v10 + 808) & 0x80u) != 0) && a3 )
        _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x800u);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    result = v7;
    __writecr8(v7);
    if ( v10 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v10 + 812); j = (unsigned int)(j + 1) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v10 + 816) + 8 * j);
        if ( (*(_DWORD *)(v14 + 88) & 0x3FFFFFFF) != 0 )
        {
          KeWaitForSingleObject((PVOID)(v14 + 104), Executive, 0, 0, 0LL);
          if ( *(int *)(v14 + 88) < 0 )
            continue;
        }
        PopFxBugCheck(0x608uLL, v14, v14 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v10 + 552), Executive, 0, 0, 0LL);
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 228), 0xFFFFFFFF);
      if ( result == 1 )
        return KeSetEvent((PRKEVENT)(v10 + 232), 0, 0);
    }
  }
  return result;
}
