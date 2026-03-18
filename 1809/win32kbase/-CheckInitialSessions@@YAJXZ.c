/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x1C0093B84
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 CheckInitialSessions(void)
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-59h] BYREF
  __int64 v4; // [rsp+68h] [rbp-21h]
  int v5; // [rsp+70h] [rbp-19h]
  __int64 v6; // [rsp+78h] [rbp-11h]
  __int64 v7; // [rsp+80h] [rbp-9h]
  int v8; // [rsp+88h] [rbp-1h]
  __int64 v9; // [rsp+90h] [rbp+7h]
  int v10; // [rsp+98h] [rbp+Fh]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp+27h] BYREF
  int v13; // [rsp+F0h] [rbp+67h] BYREF
  void *EventHandle; // [rsp+F8h] [rbp+6Fh] BYREF

  v0 = 0;
  if ( gSessionId != gServiceSessionId )
  {
    gbRemoteSession = 1;
    QueryTable.Name = L"NumberOfInitialSessions";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v13;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v4 = 0LL;
    v5 = 0;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0;
    v9 = 0LL;
    v10 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v13 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v1 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v0 = v1;
      if ( v1 >= 0 )
      {
        gbFirstInteractiveSession = 1;
      }
      else if ( v1 == -1073741771 )
      {
        gbFirstInteractiveSession = 0;
      }
    }
  }
  return v0;
}
