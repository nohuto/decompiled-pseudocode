/*
 * XREFs of InitializeMediaChange @ 0x1C0118D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall InitializeMediaChange(HANDLE Handle)
{
  NTSTATUS v2; // ebx
  struct _FAST_MUTEX *v3; // rax
  void *KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-21h] BYREF
  PVOID Object; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+1Fh] BYREF
  int v11; // [rsp+8Ch] [rbp+23h]
  unsigned int v12; // [rsp+94h] [rbp+2Bh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxOpenAttempts");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v11 == 4 )
    {
      gdwMaxRetries = v12;
    }
    ZwClose(KeyHandle);
  }
  if ( gProtocolType )
  {
    return 0;
  }
  else
  {
    qword_1C032AAB0 = (__int64)&gCDROMNotifyList;
    gCDROMNotifyList.Flink = &gCDROMNotifyList;
    qword_1C032AAA0 = (__int64)&gMediaChangeList;
    gMediaChangeList.Flink = &gMediaChangeList;
    v2 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpEventMediaChange = Object;
    if ( v2 >= 0 )
    {
      v3 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 1886417749LL);
      gMediaChangeMutex = v3;
      if ( v3 )
      {
        v3->Owner = 0LL;
        v3->Count = 1;
        v3->Contention = 0;
        KeInitializeEvent(&v3->Event, SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v2;
}
