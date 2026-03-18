/*
 * XREFs of CmpAddToHiveFileList @ 0x1406EC454
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryObject @ 0x1401C02D0 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall CmpAddToHiveFileList(__int64 a1)
{
  struct _LOOKASIDE_LIST_EX *v2; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v4; // ebx
  ULONG v5; // edx
  __int16 *Luid; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v11; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !CmpHiveFileListHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\system\\currentcontrolset\\control\\hivelist");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x202uLL, 0x62714D43u, v2);
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
  {
    Luid = &v11;
    DataSize = 2;
    goto LABEL_6;
  }
  v4 = ZwQueryObject(*(HANDLE *)(a1 + 1536), ObjectNameInformation, TransientPoolWithTag, 0x200u, &ReturnLength);
  v5 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v4 >= 0 )
  {
    Luid = (__int16 *)TransientPoolWithTag->Privilege[0].Luid;
    Luid[(unsigned __int64)v5 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v4 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1848), 0, 1u, Luid, DataSize);
  }
  CmSiFreeMemory(TransientPoolWithTag);
  return (unsigned int)v4;
}
