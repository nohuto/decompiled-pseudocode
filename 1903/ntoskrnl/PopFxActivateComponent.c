/*
 * XREFs of PopFxActivateComponent @ 0x1400B099C
 * Callers:
 *     PoFxActivateComponent @ 0x1400B0930 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400B0ABC (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x14076F460 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopFxActivateComponentWorker @ 0x1400B0ABC (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v8; // r8
  NTSTATUS result; // eax
  char v10; // bp
  _BYTE *v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  KIRQL v13; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  result = *(_DWORD *)(a1 + 816);
  if ( (result & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v10 = 0;
    }
    v11 = v15;
    if ( (a3 & 2) != 0 )
      v11 = 0LL;
    result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( result == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      LOBYTE(v8) = a4;
      result = PopFxActivateComponentWorker(a1, a2, v8, v11);
    }
    else
    {
      if ( result < 0 )
      {
LABEL_8:
        if ( v10 )
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        return result;
      }
      if ( (result & 0x40000000) != 0 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v13;
        __writecr8(v13);
      }
    }
    if ( (a3 & 1) != 0 )
      result = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
  return result;
}
