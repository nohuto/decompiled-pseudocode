/*
 * XREFs of NtOpenProcessTokenEx @ 0x140647F20
 * Callers:
 *     NtOpenProcessToken @ 0x140649940 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x1408976E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // r14
  int v7; // ebx
  ULONG v8; // ebx
  NTSTATUS result; // eax
  PVOID v10; // rsi
  _QWORD *v11; // r12
  void *v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  signed __int64 *v15; // rsi
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  v7 = 73714;
  if ( AccessMode )
    v7 = 7666;
  v8 = HandleAttributes & v7;
  if ( AccessMode )
  {
    v14 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096,
             (__int64)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v10 = Object;
    v11 = (char *)Object + 856;
    v12 = (void *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v12 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (signed __int64 *)((char *)Object + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v12 = (void *)ObFastReferenceObjectLocked(v11);
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v10 = Object;
    }
    ObfDereferenceObjectWithTag(v10, 0x65537350u);
    v13 = ObOpenObjectByPointer(v12, v8, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    ObfDereferenceObject(v12);
    if ( v13 >= 0 )
      *TokenHandle = Handle;
    return v13;
  }
  return result;
}
