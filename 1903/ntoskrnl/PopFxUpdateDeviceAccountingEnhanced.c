/*
 * XREFs of PopFxUpdateDeviceAccountingEnhanced @ 0x1401692B8
 * Callers:
 *     PopPepDeviceDState @ 0x14017B274 (PopPepDeviceDState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1400B1768 (PopFxUpdateAccountingActiveTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // di
  __int64 result; // rax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a1 + 592;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 592));
  if ( *(int *)(v3 + 16) <= 0 )
  {
    v8 = *(_DWORD *)(v3 + 12);
    if ( v8 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v8 )
        {
          PopFxUpdateAccountingActiveTime(v3, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v3 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v3 + 8) = 1;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
