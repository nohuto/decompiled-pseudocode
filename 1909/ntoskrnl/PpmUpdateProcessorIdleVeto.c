/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1402F0B40
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmUpdateIdleVeto @ 0x1402F06A0 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x140302738 (PpmEventProcessorVetoRequest.c)
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

  memset(v14, 0, 0xA8uLL);
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
