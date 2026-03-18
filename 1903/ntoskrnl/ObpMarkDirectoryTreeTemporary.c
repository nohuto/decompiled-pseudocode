/*
 * XREFs of ObpMarkDirectoryTreeTemporary @ 0x1406C7A88
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406C7B00 (ObpMarkDirectoryObjectsTemporary.c)
 */

void __fastcall ObpMarkDirectoryTreeTemporary(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // rdi
  PVOID v3; // rbx

  ObpMarkDirectoryObjectsTemporary(a1);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    v3 = ObpPendingObjectDirectoryList;
    if ( ObpPendingObjectDirectoryList )
    {
      v2 = (void *)*((_QWORD *)ObpPendingObjectDirectoryList + 1);
      ObpPendingObjectDirectoryList = *(PVOID *)ObpPendingObjectDirectoryList;
    }
    ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( !v2 )
      break;
    ObpMarkDirectoryObjectsTemporary(v2);
    ObfDereferenceObject(v2);
  }
}
