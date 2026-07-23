/*
 * XREFs of ExpInitializeCallbacks @ 0x1409DA2E4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x1406AEF60 (NtCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

char ExpInitializeCallbacks()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 *v2; // rdi
  PCALLBACK_OBJECT *v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v7[16]; // [rsp+68h] [rbp-29h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+67h] BYREF

  ExpCallbackListLock = 0LL;
  qword_14040AA28 = (__int64)&ExpCallbackListHead;
  ExpCallbackListHead = (__int64)&ExpCallbackListHead;
  RtlInitUnicodeString(&DestinationString, L"Callback");
  memset(v7, 0, 0x78uLL);
  BYTE2(v7[0]) |= 4u;
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  v7[9] = ExpDeleteCallback;
  HIDWORD(v7[4]) = 512;
  *(_OWORD *)((char *)&v7[1] + 4) = ExpCallbackMapping;
  HIDWORD(v7[3]) = 2031617;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&ExCallbackObjectType) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(DirectoryHandle);
      LOWORD(ExpCallbackEvent.Header.Lock) = 0;
      ExpCallbackEvent.Header.SignalState = 0;
      v0 = 0;
      ExpCallbackEvent.Header.WaitListHead.Blink = &ExpCallbackEvent.Header.WaitListHead;
      ExpCallbackEvent.Header.WaitListHead.Flink = &ExpCallbackEvent.Header.WaitListHead;
      ExpCallbackEvent.Header.Size = 6;
      if ( !ExpInitializeCallback[0] )
        return 1;
      v1 = 0LL;
      v2 = ExpInitializeCallback;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)ExpInitializeCallback[v1 + 1]);
        v3 = (PCALLBACK_OBJECT *)*v2;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ExCreateCallback(v3, &ObjectAttributes, 1u, 1u) < 0 )
          break;
        v1 = 2LL * (unsigned int)++v0;
        v2 = &ExpInitializeCallback[v1];
        if ( !ExpInitializeCallback[v1] )
          return 1;
      }
    }
  }
  return 0;
}
