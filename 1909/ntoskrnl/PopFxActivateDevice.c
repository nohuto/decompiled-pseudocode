/*
 * XREFs of PopFxActivateDevice @ 0x140145FF4
 * Callers:
 *     PoFxActivateDevice @ 0x140145FD8 (PoFxActivateDevice.c)
 *     PopFxActivateDevicesForSx @ 0x14015E790 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14015F308 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxStartDevicePowerManagement @ 0x140195D20 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F4B00 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402FA704 (PopPepResetDeviceAccountingLevel.c)
 *     PopPlActivateDeviceIterator @ 0x1403049D0 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PoFxActivateComponent @ 0x1400E0A20 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

LONG __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // si
  ULONG_PTR v8; // rbx
  LONG result; // eax
  unsigned int i; // edi
  __int64 j; // rsi
  ULONG_PTR v12; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  if ( (*(_DWORD *)(v5 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 816LL) & 1) != 0 )
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
    v8 = 0LL;
    ++*(_DWORD *)(v5 + 120);
    if ( (*(_DWORD *)(v5 + 296) & 4) != 0 )
    {
      v8 = *(_QWORD *)(v5 + 80);
      PopFxAddRefDevice(v8);
      for ( i = 0; i < *(_DWORD *)(v8 + 820); ++i )
        PoFxActivateComponent(v8, i, 2LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v14);
    }
    result = v7;
    __writecr8(v7);
    if ( v8 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 820); j = (unsigned int)(j + 1) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v8 + 824) + 8 * j);
        if ( (*(_DWORD *)(v12 + 88) & 0x3FFFFFFF) == 0
          || (KeWaitForSingleObject((PVOID)(v12 + 104), Executive, 0, 0, 0LL), *(int *)(v12 + 88) >= 0) )
        {
          PopFxBugCheck(0x608uLL, v12, v12 + 88, 0LL);
        }
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u);
        if ( (PopPoFxSystemIrpWaitForReportDevicePoweredReg || (*(_DWORD *)(v8 + 816) & 0x80u) != 0) && a3 )
          _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x800u);
      }
      KeWaitForSingleObject((PVOID)(v8 + 560), Executive, 0, 0, 0LL);
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 236), 0xFFFFFFFF);
      if ( result == 1 )
        return KeSetEvent((PRKEVENT)(v8 + 240), 0, 0);
    }
  }
  return result;
}
