/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1400BD200
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140010A70 (IoSetOplockPrivateFoExt.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400B8CA0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x1400BA3C8 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IoGetFileObjectFilterContext @ 0x140114E84 (IoGetFileObjectFilterContext.c)
 *     IoSetOplockKeyContext @ 0x14016CDE4 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x140298CF0 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopRevokeFileObjectForProcess @ 0x14029A054 (IopRevokeFileObjectForProcess.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     IoRegisterContainerNotification @ 0x1407883D0 (IoRegisterContainerNotification.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140856990 (IoSetFileObjectIgnoreSharing.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140857028 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400BF668 (IopVerifierExAllocatePool_1.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *Pool_1; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != IopRevocationExtension )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
    v7 = *(_QWORD *)(a1 + 208);
    if ( v7 )
      goto LABEL_9;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    Pool_1 = (void *)IopVerifierExAllocatePool_1(v8, 88LL);
    v7 = (__int64)Pool_1;
    if ( Pool_1 )
    {
      memset(Pool_1, 0, 0x58uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v7;
        v7 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v7);
      }
LABEL_9:
      if ( a2 )
        *a2 = v7;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v12 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v12);
      }
      __writecr8(CurrentIrql);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return 3221225626LL;
}
