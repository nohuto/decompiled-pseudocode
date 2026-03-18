/*
 * XREFs of NtMakePermanentObject @ 0x1406F7630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtMakePermanentObject(HANDLE Object)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rbx
  PVOID v7; // [rsp+48h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  result = ObReferenceObjectByHandle(Object, 0, 0LL, PreviousMode, &v7, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (char *)v7;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7 - 32, 0LL);
    *(v6 - 21) |= 0x10u;
    ExReleasePushLockEx((ULONG_PTR)(v6 - 32), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(v7);
    return v4;
  }
  return result;
}
