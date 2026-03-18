/*
 * XREFs of IVStartupWorkerThread @ 0x1C018BDE0
 * Callers:
 *     NtUserInitialize @ 0x1C00A1B20 (NtUserInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 IVStartupWorkerThread()
{
  struct _KEVENT *KernelEvent; // rax
  NTSTATUS v1; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+10h] BYREF
  void *ThreadHandle; // [rsp+88h] [rbp+18h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  gpkeIVThreadStarted = CreateKernelEvent(SynchronizationEvent, 0);
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  gpkeIVThreadShutdown = KernelEvent;
  if ( gpkeIVThreadStarted && KernelEvent )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ObOpenObjectByPointer(gpepCSRSS, 0x200u, 0LL, 2u, 0LL, 0, &ProcessHandle);
    if ( v1 >= 0 )
    {
      v1 = PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             0LL,
             (PKSTART_ROUTINE)IVWorkerThread,
             0LL);
      if ( v1 >= 0 )
      {
        KeWaitForSingleObject(gpkeIVThreadStarted, Executive, 0, 0, 0LL);
        ZwClose(ThreadHandle);
      }
    }
  }
  else
  {
    v1 = -1073741801;
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v1 < 0 )
  {
    if ( gpkeIVThreadStarted )
    {
      Win32FreePool((__int64)gpkeIVThreadStarted);
      gpkeIVThreadStarted = 0LL;
    }
    if ( gpkeIVThreadShutdown )
    {
      Win32FreePool((__int64)gpkeIVThreadShutdown);
      gpkeIVThreadShutdown = 0LL;
    }
  }
  return (unsigned int)v1;
}
