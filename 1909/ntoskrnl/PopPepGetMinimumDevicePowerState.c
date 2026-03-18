/*
 * XREFs of PopPepGetMinimumDevicePowerState @ 0x1402F91B0
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F4B00 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FA948 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A51B0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetMinimumDevicePowerState(__int64 a1, char a2, char a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // di
  int v7; // ebp
  KIRQL CurrentIrql; // si
  unsigned int v11; // eax
  _DWORD *v12; // rcx
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v6 = 0;
  v7 = 1 << a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( a3 )
    CurrentIrql = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v11 = 0;
    v12 = (_DWORD *)(a1 + 144);
    do
    {
      if ( (v7 & *v12) == 0 )
        break;
      ++v11;
      ++v12;
    }
    while ( v11 < 3 );
    *a4 = v11 + 1;
    if ( a5 )
    {
      v13 = 0;
      v14 = (_DWORD *)(a1 + 156);
      do
      {
        if ( (v7 & *v14) == 0 )
          break;
        ++v13;
        ++v14;
      }
      while ( v13 < 3 );
      *a5 = v13 + 1;
    }
    v6 = 1;
  }
  if ( a3 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
