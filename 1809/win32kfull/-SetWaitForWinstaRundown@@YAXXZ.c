/*
 * XREFs of ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00EA610
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void SetWaitForWinstaRundown(void)
{
  void *KernelEvent; // rbx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+10h] BYREF
  void *ThreadHandle; // [rsp+88h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  KernelEvent = (void *)CreateKernelEvent(1LL, 0LL);
  if ( ObOpenObjectByPointer(gpepCSRSS, 0, 0LL, 2u, 0LL, 0, &ProcessHandle) >= 0 )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           ProcessHandle,
           0LL,
           WaitForWinstaRundown,
           KernelEvent) >= 0 )
    {
      if ( KernelEvent )
        KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
      else
        UserSleep(100LL);
    }
  }
  if ( KernelEvent )
    Win32FreePool(KernelEvent);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
