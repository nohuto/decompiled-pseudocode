/*
 * XREFs of BiUnloadHiveByName @ 0x140728CBC
 * Callers:
 *     BiUnloadHiveByHandle @ 0x140728C2C (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x14073B514 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwUnloadKey @ 0x1401C38F0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14073F36C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14073F3BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  SIZE_T v5; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Length + 1) = 0;
  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = (unsigned int)(a2 + 38);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = BiAcquirePrivilege(18LL, &v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v9 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v9 = ZwUnloadKey(&TargetKey);
      v8 = v9;
      BiReleasePrivilege(&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
