/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x1402F5358
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1402F41DC (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402F5C3C (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1402F5CE0 (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

__int64 __fastcall PopFxSetDripsBlockedByDeviceActivity(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( byte_140444881 )
  {
    if ( PopFxGlobalDeviceAccountingInfo == a1 )
      goto LABEL_8;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      qword_140444888 = MEMORY[0xFFFFF78000000008];
    else
      PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0LL);
  }
  if ( PopFxGlobalDeviceAccountingInfo != a1 )
  {
    LOBYTE(v2) = a1;
    PopFxGlobalDeviceAccountingInfo = a1;
    PopFxUpdateDeviceIRPhaseAccounting(v2);
  }
LABEL_8:
  KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
