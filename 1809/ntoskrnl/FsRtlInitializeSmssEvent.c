/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x1409D889C
 * Callers:
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateEvent @ 0x14062DF70 (NtCreateEvent.c)
 */

NTSTATUS FsRtlInitializeSmssEvent()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  int v2; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v3 = L"\\Device\\VolumesSafeForWriteAccess";
  v2 = 4456514;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    v1 = ObReferenceObjectByHandle(EventHandle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(EventHandle);
    if ( v1 < 0 )
    {
      return v1;
    }
    else
    {
      SmssEventWorkItem.List.Flink = 0LL;
      SmssEventWorkItem.WorkerRoutine = (void (__fastcall *)(void *))FsRtlWaitForSmssEvent;
      SmssEventWorkItem.Parameter = Object;
      ExQueueWorkItem(&SmssEventWorkItem, DelayedWorkQueue);
      return 0;
    }
  }
  return result;
}
