/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x14084BEA4
 * Callers:
 *     MiValidFault @ 0x1400B6DF0 (MiValidFault.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessId @ 0x1400A5710 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x1400ACF20 (IoThreadToProcess.c)
 *     ZwCreateThreadEx @ 0x1401B9910 (ZwCreateThreadEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PsFreezeProcess @ 0x140588E24 (PsFreezeProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x1406C98D4 (PsTerminateProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106BC (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408124F0 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x14084336C (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rsi
  int v7; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+68h] [rbp-98h]
  __int64 v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+78h] [rbp-88h]
  __int128 v11; // [rsp+80h] [rbp-80h]
  _QWORD v12[20]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+160h] [rbp+60h] BYREF
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
        memset(v12, 0, 0x98uLL);
        LODWORD(v12[0]) = -1073739994;
        LODWORD(v12[3]) = 1;
        v12[4] = ProcessId;
        DbgkQueueUserExceptionReport((__int64)CurrentThread, 0xEu, (__int64)v12);
      }
      PsFreezeProcess((ULONG_PTR)Process, 0);
      v8 = 0LL;
      v9 = 0LL;
      v7 = 48;
      v10 = 512;
      v11 = 0LL;
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL, (__int64)&v7) < 0 )
      {
        PsTerminateProcess((ULONG_PTR)Process, 0xC0000725);
      }
      else
      {
        ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
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
