/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x14084D104
 * Callers:
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     ZwCreateThreadEx @ 0x1401B9A70 (ZwCreateThreadEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsFreezeProcess @ 0x140589E24 (PsFreezeProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x1408445CC (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rsi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v8[20]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+160h] [rbp+60h] BYREF
  PVOID Object; // [rsp+168h] [rbp+68h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      ProcessId = PsGetProcessId(Process);
      if ( (IoThreadToProcess(CurrentThread)[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
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
      PsFreezeProcess((ULONG_PTR)Process, 0);
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
        PsTerminateProcess((ULONG_PTR)Process, 0xC0000725);
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
