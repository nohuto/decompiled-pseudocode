/*
 * XREFs of PopFxActivateComponentWorker @ 0x1400FE2B0
 * Callers:
 *     PopFxActivateComponent @ 0x1400FE190 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA88 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1400FE190 (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FECCC (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x1400FF438 (PopPluginComponentActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // r8
  char v10; // bl
  KIRQL v11; // al
  int v12; // ecx
  __int64 v13; // rbp
  KIRQL v14; // r15
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  result = PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v12 = *(_DWORD *)(a2 + 172);
    v13 = 0LL;
    *(_DWORD *)(a2 + 184) = v12;
    v14 = v11;
    v15 = v12 == 0;
    if ( v12 )
    {
      do
      {
        v16 = *(_QWORD *)(a2 + 176);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL * *(unsigned int *)(v16 + 8 * v13));
        *(_BYTE *)(v16 + 8 * v13 + 4) = 1;
        PopFxActivateComponent(a1, v17, 2, a3);
        if ( *(int *)(v17 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v13 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *(_DWORD *)(a2 + 172) );
      v15 = *(_DWORD *)(a2 + 184) == 0;
    }
    v10 = v15;
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 128));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v14;
    __writecr8(v14);
  }
  else
  {
    v10 = 1;
  }
  if ( a3 )
    return PopFxCompleteComponentActivation(a1);
  if ( v10 )
  {
    LOBYTE(v9) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v9, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
