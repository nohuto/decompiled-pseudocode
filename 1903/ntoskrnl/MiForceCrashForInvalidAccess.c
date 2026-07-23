/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x1408873A4
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1402D2C0C (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ZwCreateThreadEx @ 0x1401C1870 (ZwCreateThreadEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsFreezeProcess @ 0x1406A34C4 (PsFreezeProcess.c)
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x140849F6C (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084BF40 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x14087EDEC (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(struct _KPROCESS *BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rsi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v8[22]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+160h] [rbp+60h] BYREF
  PVOID Object; // [rsp+168h] [rbp+68h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
    DirectoryTableBase = BugCheckParameter1[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      ProcessId = PsGetProcessId(BugCheckParameter1);
      if ( (IoThreadToProcess(CurrentThread)[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        DbgkWerCaptureLiveKernelDump(L"MemoryManager", 26, 36864LL, -1073739994LL, (__int64)ProcessId, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        memset(v8, 0, 0x98uLL);
        LODWORD(v8[0]) = -1073739994;
        LODWORD(v8[3]) = 1;
        v8[4] = ProcessId;
        DbgkQueueUserExceptionReport((__int64)CurrentThread, 0xEu, (__int64)v8);
      }
      PsFreezeProcess((__int64)BugCheckParameter1, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             0LL,
             0LL,
             1u,
             0LL,
             0x1000uLL,
             0x1000uLL,
             0LL) < 0 )
      {
        PsTerminateProcess((ULONG_PTR)BugCheckParameter1, 0xC0000725);
      }
      else
      {
        ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(ThreadHandle, 0);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
