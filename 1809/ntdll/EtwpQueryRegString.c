/*
 * XREFs of EtwpQueryRegString @ 0x1800527DC
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180052654 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpAddDebugInfoEvents @ 0x18010FAFC (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, ULONG a4)
{
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  ULONG v8; // eax
  ULONG Length; // ebx
  unsigned int *Heap; // rdi
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+7Fh] BYREF

  ResultLength = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * ResultLength;
  if ( v7 <= 0xFFFFFFFF )
  {
    v8 = v7 + 12;
    if ( 2 * ResultLength + 12 >= 2 * ResultLength )
    {
      Length = v8;
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
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
