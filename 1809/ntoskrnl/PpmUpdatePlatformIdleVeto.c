/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x1402D66D0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14028E530 (KeFindFirstSetLeftAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x1402D6470 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x1402E5F2C (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // edi
  __int64 v3; // rax
  __int64 v4; // r14
  KIRQL v5; // si
  __int64 v6; // r8
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  int FirstSetLeftAffinity; // eax
  struct _KPRCB *v10; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v13[44]; // [rsp+30h] [rbp-D8h] BYREF

  if ( !PpmPlatformStates )
    return (unsigned int)-1073741637;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 >= *(_DWORD *)PpmPlatformStates )
    return (unsigned int)-1073741811;
  v4 = PpmPlatformStates + 384 * v3;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 80, v12);
  if ( updated < 0 )
    goto LABEL_19;
  LOBYTE(v6) = *(_BYTE *)(a1 + 12);
  PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6);
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( !v12[0] )
      goto LABEL_19;
    if ( *(_BYTE *)(a1 + 12) )
      PopDeepSleepSetDisengageReason(9u);
    else
      PopDeepSleepClearDisengageReason(9u);
  }
  if ( v12[0] )
  {
    v7 = KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number];
    if ( ((*(_QWORD *)(v4 + 8LL * (v7 >> 6) + 136) >> (v7 & 0x3F)) & 1) == 0 )
    {
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v5);
      v13[0] = 1310721;
      memset(&v13[1], 0, 0xA4uLL);
      FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)(v4 + 128));
      KeAddProcessorAffinityEx(v13, FirstSetLeftAffinity);
      PopExecuteOnTargetProcessors((__int64)v13, (__int64)PsGetHostSilo, 0LL, 0LL);
      return (unsigned int)updated;
    }
  }
LABEL_19:
  KxReleaseSpinLock(&PpmIdleVetoLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  __writecr8(v5);
  return (unsigned int)updated;
}
