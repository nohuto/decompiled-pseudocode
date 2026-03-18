/*
 * XREFs of InitializeMediaChange @ 0x1C0110CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeMediaChange(HANDLE Handle)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rax
  void *KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+1Fh] BYREF
  int v11; // [rsp+8Ch] [rbp+23h]
  unsigned int v12; // [rsp+94h] [rbp+2Bh]

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
    qword_1C0329950 = (__int64)&gCDROMNotifyList;
    gCDROMNotifyList.Flink = &gCDROMNotifyList;
    qword_1C0329940 = (__int64)&gMediaChangeList;
    gMediaChangeList.Flink = &gMediaChangeList;
    v2 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Object;
    if ( v2 >= 0 )
    {
      v3 = Win32AllocPoolNonPaged(56LL, 1886417749LL);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v3;
      if ( v3 )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_DWORD *)v3 = 1;
        *(_DWORD *)(v3 + 16) = 0;
        KeInitializeEvent((PRKEVENT)(v3 + 24), SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v2;
}
