/*
 * XREFs of PopFxCompleteComponentActivation @ 0x1400FECCC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400FE2B0 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA88 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopPluginComponentActive @ 0x1400FF438 (PopPluginComponentActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 i; // rbp
  LONG result; // eax
  __int64 v8; // rax
  bool v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  bool v15; // zf
  __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v18; // [rsp+60h] [rbp+18h]

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 188); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(a2 + 192);
      v9 = 0;
      v10 = *(unsigned int *)(v8 + 8 * i + 4);
      v18 = *(_DWORD *)(v8 + 8 * i);
      v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 816) + 8LL * v18);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 128));
      v13 = *(_QWORD *)(v11 + 176);
      v14 = v12;
      if ( *(_BYTE *)(v13 + 8 * v10 + 4) == 1 )
      {
        *(_BYTE *)(v13 + 8 * v10 + 4) = 0;
        v15 = (*(_DWORD *)(v11 + 184))-- == 1;
        v9 = v15;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 128));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v14);
      if ( v9 )
      {
        LOBYTE(v16) = 1;
        PopPluginComponentActive(BugCheckParameter2, v18, v16, 0LL);
      }
    }
  }
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 228), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 232), 0, 0);
  return result;
}
