/*
 * XREFs of CmpInitializeRegistryNode @ 0x14075D954
 * Callers:
 *     CmLogMcUpdateStatus @ 0x140280008 (CmLogMcUpdateStatus.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14075D508 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetupConfigurationTree @ 0x140A0BF08 (CmpSetupConfigurationTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14063E6C0 (RtlIntegerToChar.c)
 */

NTSTATUS __fastcall CmpInitializeRegistryNode(__int64 a1, void *a2, HANDLE *a3, int a4, int a5, __int64 a6)
{
  int v6; // eax
  ULONG v10; // esi
  NTSTATUS result; // eax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  HANDLE v14; // rbx
  NTSTATUS v15; // r14d
  NTSTATUS v16; // ebx
  const void *v17; // rdx
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  size_t v20; // r8
  char *v21; // rcx
  char *PoolWithTag; // rbx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-C1h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-99h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-91h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-81h] BYREF
  _STRING DestinationString; // [rsp+70h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  CHAR String[16]; // [rsp+C0h] [rbp-21h] BYREF
  char v32; // [rsp+D0h] [rbp-11h] BYREF

  v6 = 0;
  *(_QWORD *)&v27.Length = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v10 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
    v6 = *(_DWORD *)(a1 + 28);
  else
    *(_DWORD *)(a1 + 28) = 0;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = &CmTypeName + v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v12 = *(int *)(a1 + 28);
      if ( (unsigned int)v12 >= 0x2A )
      {
        v13 = 0;
      }
      else
      {
        v13 = *(_WORD *)(a6 + 2 * v12);
        *(_WORD *)(a6 + 2LL * *(int *)(a1 + 28)) = v13 + 1;
      }
      RtlIntegerToChar(v13, 0xAu, 0xCu, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v27.Length = 1572864;
      v27.Buffer = (wchar_t *)&v32;
      RtlAnsiStringToUnicodeString(&v27, &DestinationString, 0);
      v14 = KeyHandle;
      ObjectAttributes.ObjectName = &v27;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      ZwClose(v14);
      if ( v15 < 0 )
        return v15;
    }
    RtlInitUnicodeString(&ValueName, L"Component Information");
    v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)(a1 + 32), 0x10u);
    if ( v16 < 0 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 52) )
    {
      RtlInitUnicodeString(&ValueName, L"Identifier");
      RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 56));
      v16 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v16 < 0 )
        goto LABEL_24;
      v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeAnsiString(&UnicodeString);
      if ( v16 < 0 )
        goto LABEL_24;
    }
    RtlInitUnicodeString(&ValueName, L"Configuration Data");
    v17 = *(const void **)(a1 + 64);
    if ( !v17 )
    {
LABEL_13:
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v10 = 16;
        *((_QWORD *)CmpConfigurationData + 1) = 0LL;
      }
      v18 = CmpConfigurationData;
      Class = (PUNICODE_STRING)CmpConfigurationData;
      *(_DWORD *)CmpConfigurationData = a4;
      v18[1] = a5;
      v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 9u, Class, v10);
      if ( v16 >= 0 )
      {
        *a3 = KeyHandle;
        return 0;
      }
LABEL_24:
      ZwClose(KeyHandle);
      return v16;
    }
    v19 = *(_DWORD *)(a1 + 48);
    v10 = v19 + 8;
    if ( v19 + 8 > (unsigned int)CmpConfigurationAreaSize )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x20204D43u);
      if ( !PoolWithTag )
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
        goto LABEL_13;
      }
      LODWORD(CmpConfigurationAreaSize) = v10;
      ExFreePoolWithTag(CmpConfigurationData, 0);
      v20 = *(unsigned int *)(a1 + 48);
      v21 = PoolWithTag + 8;
      v17 = *(const void **)(a1 + 64);
      CmpConfigurationData = PoolWithTag;
    }
    else
    {
      v20 = v19;
      v21 = (char *)CmpConfigurationData + 8;
    }
    memmove(v21, v17, v20);
    goto LABEL_13;
  }
  return result;
}
