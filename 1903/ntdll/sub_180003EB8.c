/*
 * XREFs of sub_180003EB8 @ 0x180003EB8
 * Callers:
 *     sub_180004020 @ 0x180004020 (sub_180004020.c)
 * Callees:
 *     sub_1800042E0 @ 0x1800042E0 (sub_1800042E0.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180003EB8(__int64 a1, __int64 a2, _DWORD *a3)
{
  WCHAR *Heap; // rsi
  NTSTATUS v5; // ebx
  _DWORD *v6; // rdi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF
  __int64 ResultLength; // [rsp+A8h] [rbp+28h] BYREF

  ResultLength = a2;
  KeyHandle = (HANDLE)-1LL;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v6 )
    {
      sub_1800042E0(Heap);
      RtlInitUnicodeString(&ValueName, Heap);
      v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v6, 0x10u, (PULONG)&ResultLength);
      if ( v5 >= 0 )
        *a3 = v6[3];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v5 = -1073741801;
    }
    ZwClose(KeyHandle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v5;
}
