/*
 * XREFs of EtwpQueryRegString @ 0x1800041A8
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180004020 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpAddDebugInfoEvents @ 0x18010DD1C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, ULONG a4)
{
  NTSTATUS v6; // edi
  unsigned __int64 v7; // rax
  ULONG Length; // edi
  unsigned int *Heap; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+7Fh] BYREF

  ResultLength = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * ResultLength;
  if ( v7 <= 0xFFFFFFFF )
  {
    Length = v7 + 12;
    if ( (int)v7 + 12 >= (unsigned int)v7 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        RtlInitUnicodeString(&ValueName, a2);
        v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        if ( v6 >= 0 )
          memmove(a3, Heap + 3, Heap[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      NtClose(KeyHandle);
      return (unsigned int)v6;
    }
  }
  NtClose(KeyHandle);
  return 3221225621LL;
}
