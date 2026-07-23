/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1402D6900
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmUpdateIdleVeto @ 0x1402D6470 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x1402E61F4 (PpmEventProcessorVetoRequest.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  struct _KPRCB *Prcb; // rbp
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  struct _KPRCB *v12; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v14[44]; // [rsp+30h] [rbp-D8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return (unsigned int)-1073741811;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  IdleStates = Prcb->PowerState.IdleStates;
  v7 = v5;
  if ( !IdleStates )
  {
    updated = -1073741637;
    goto LABEL_5;
  }
  v10 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v10 >= IdleStates->ProcessorIdleCount )
  {
    updated = -1073741811;
LABEL_5:
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    return (unsigned int)updated;
  }
  updated = PpmUpdateIdleVeto(
              *(_BYTE *)(a1 + 16),
              *(_DWORD *)(a1 + 12),
              (__int64)&IdleStates->State[v10].VetoAccounting,
              v13);
  if ( updated < 0 )
    goto LABEL_5;
  LOBYTE(v11) = *(_BYTE *)(a1 + 16);
  PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v11);
  if ( !v13[0] || Prcb == KeGetCurrentPrcb() )
    goto LABEL_5;
  KxReleaseSpinLock(&PpmIdleVetoLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  __writecr8(v7);
  v14[0] = 1310721;
  memset(&v14[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v14, ProcessorIndexFromNumber);
  PopExecuteOnTargetProcessors((__int64)v14, (__int64)PsGetHostSilo, 0LL, 0LL);
  return (unsigned int)updated;
}
