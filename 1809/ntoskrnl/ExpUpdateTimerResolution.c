/*
 * XREFs of ExpUpdateTimerResolution @ 0x1400E1F48
 * Callers:
 *     ExSetTimerResolution @ 0x1403199A0 (ExSetTimerResolution.c)
 *     NtSetTimerResolution @ 0x140664D30 (NtSetTimerResolution.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400E1EE8 (PoTraceSystemTimerResolutionUpdate.c)
 *     ExpUpdateTimerConfiguration @ 0x1400E2088 (ExpUpdateTimerConfiguration.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // bl
  int v6; // edi
  __int64 result; // rax
  __int64 i; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  ULONG v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
    a2 = v11;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( a2 >= ExpLastRequestedTime || KeMaximumIncrement <= a2 )
      goto LABEL_18;
  }
  else
  {
    a2 = KeMaximumIncrement;
    v11 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount )
    {
      if ( ExpKernelRequestedTimerResolution < KeMaximumIncrement )
        a2 = ExpKernelRequestedTimerResolution;
      v11 = a2;
    }
    for ( i = ExpTimerResolutionListHead; (__int64 *)i != &ExpTimerResolutionListHead; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 876) & 0x1000) != 0 )
      {
        if ( *(_DWORD *)(i + 24) < a2 )
          a2 = *(_DWORD *)(i + 24);
        v11 = a2;
      }
    }
  }
  if ( a2 < KeMinimumIncrement )
    a2 = KeMinimumIncrement;
  v11 = a2;
  if ( a2 != ExpLastRequestedTime )
  {
    v6 = KeTimeIncrement;
    ExpLastRequestedTime = a2;
    KxReleaseSpinLock(&ExpKernelResolutionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
    ExpUpdateTimerConfiguration(&v11, 0LL, 0LL);
    result = v11;
    if ( v6 != v11 )
    {
      PoTraceSystemTimerResolutionUpdate();
      return v11;
    }
    return result;
  }
LABEL_18:
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v5);
  return (unsigned int)KeTimeIncrement;
}
