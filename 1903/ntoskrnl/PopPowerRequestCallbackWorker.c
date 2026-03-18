/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x1400ED160
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1400ED298 (PopPowerRequestExecuteCallbacks.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopPowerRequestCallbackWorker()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  char *v3; // rcx
  __int64 v4; // rdx
  char v5; // al
  unsigned __int8 OldIrql; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( (__int64 *)PopPowerRequestCallbacks == &PopPowerRequestCallbacks )
    {
      v1 = 0LL;
      v2 = 0;
      PopCallbackWorkItemScheduled = 0;
    }
    else
    {
      v0 = *(_QWORD **)(qword_140445068 + 8);
      if ( *(__int64 **)qword_140445068 != &PopPowerRequestCallbacks || *v0 != qword_140445068 )
        __fastfail(3u);
      v1 = qword_140445068 - 56;
      qword_140445068 = *(_QWORD *)(qword_140445068 + 8);
      v2 = 0;
      *v0 = &PopPowerRequestCallbacks;
      v3 = (char *)(v1 + 72);
      v4 = 6LL;
      do
      {
        v5 = *v3;
        v10[(_QWORD)v3 - v1 - 72] = *v3;
        if ( v5 )
        {
          *v3 = 0;
          ++v2;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      *(_BYTE *)(v1 + 78) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    if ( !v1 )
      break;
    if ( v2 )
      PopPowerRequestExecuteCallbacks(v10, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 16));
    ObfDereferenceObjectWithTag((PVOID)v1, 0x72506F50u);
  }
  return result;
}
