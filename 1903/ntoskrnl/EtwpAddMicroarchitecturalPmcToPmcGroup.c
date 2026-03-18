/*
 * XREFs of EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408F7108
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F72F0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToPmcGroup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // r15
  NTSTATUS v9; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = -1LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&a2[2 * v5 + 178] );
  if ( (unsigned int)v5 >= 0xFF )
    return 3221225476LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  v7 = (unsigned int)(2 * v4 + 512);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x50777445u);
  RtlStringCbPrintfW(PoolWithTag, (unsigned int)v7, L"%ws\\%ws", a1, a2 + 178);
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interval");
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a2 + 4, 4u);
    if ( v9 >= 0 )
    {
      Data = *a2;
      RtlInitUnicodeString(&DestinationString, L"Event");
      v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      if ( v9 >= 0 )
      {
        Data = a2[1];
        RtlInitUnicodeString(&DestinationString, L"Unit");
        v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      }
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v9;
}
