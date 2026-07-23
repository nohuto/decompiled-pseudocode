/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x1401253F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  int v1; // edi
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = ObReferenceObjectByHandle(
         WorkerFactoryHandle,
         0x10u,
         ExpWorkerFactoryObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v3 = v2[76];
    if ( v3 )
    {
      v2[76] = v3 - 1;
      v4 = v2[74];
      if ( v4 )
      {
        ++v2[72];
        ++v2[73];
        v2[74] = v4 - 1;
      }
      else
      {
        v1 = -1073741558;
      }
    }
    else
    {
      v1 = -1073741823;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v2 = Object;
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return v1;
}
