/*
 * XREFs of PspShutdownCsrProcess @ 0x1408C5264
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C59D0 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401C0CD0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1401C0E10 (ZwSetEvent.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenEvent @ 0x1401C1450 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1401C1550 (ZwCreateEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x1408C9638 (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, struct _KPROCESS *a3)
{
  struct _LIST_ENTRY *v6; // rbx
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  int v9; // ebx
  HANDLE v10; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v14 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  EventHandle = 0LL;
  v6 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v8 = Handle;
  if ( v7 < 0 )
    v8 = 0LL;
  Handle = v8;
  PsDetachSiloFromCurrentThread(v6);
  KeStackAttachProcess(a3, &ApcState);
  v9 = PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v14);
  KeUnstackDetachProcess(&ApcState);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v10 = Handle;
  if ( Handle )
  {
    if ( v9 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v10 = Handle;
    }
    ZwClose(v10);
    Handle = 0LL;
  }
  result = PsTerminateProcess((ULONG_PTR)a3, 0xC00002EB);
  if ( (int)result >= 0 )
    return PspWaitForUsermodeExit(a3);
  return result;
}
