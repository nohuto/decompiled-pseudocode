/*
 * XREFs of PopFxActivateComponent @ 0x1400FE190
 * Callers:
 *     PoFxActivateComponent @ 0x1400FE110 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400FE2B0 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1400FE2B0 (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  NTSTATUS result; // eax
  char v8; // si
  char *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  KIRQL v11; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  char v13; // [rsp+30h] [rbp-58h] BYREF

  result = *(_DWORD *)(a1 + 808);
  if ( (result & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v8 = 0;
    }
    v9 = &v13;
    if ( (a3 & 2) != 0 )
      v9 = 0LL;
    result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( result == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      result = PopFxActivateComponentWorker(a1, a2, a4, v9);
    }
    else
    {
      if ( result < 0 )
      {
LABEL_8:
        if ( v8 )
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        return result;
      }
      if ( (result & 0x40000000) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v11;
        __writecr8(v11);
      }
    }
    if ( (a3 & 1) != 0 )
      result = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
  return result;
}
