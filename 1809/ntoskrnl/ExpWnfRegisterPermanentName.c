/*
 * XREFs of ExpWnfRegisterPermanentName @ 0x1406CFDD4
 * Callers:
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405ABB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1405ABC5C (ExpWnfComposeValueName.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ExpWnfRegisterPermanentName(unsigned __int64 a1, __int64 a2)
{
  NTSTATUS NameStoreRegistryRoot; // ebx
  ULONG v5; // eax
  __int64 v6; // rbx
  SIZE_T v7; // rdx
  ULONG DataSize; // ebp
  char *PoolWithTag; // rax
  char *Data; // rdi
  _OWORD *v11; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-68h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v15;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v5 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 16));
    v6 = v5;
    v7 = v5 + 20;
    if ( !*(_QWORD *)(a2 + 8) )
      v7 = v5 + 4;
    DataSize = v7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x20666E57u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 16), (unsigned int)v6);
      *(_DWORD *)&Data[v6] = *(_DWORD *)a2;
      v11 = *(_OWORD **)(a2 + 8);
      if ( v11 )
        *(_OWORD *)&Data[v6 + 4] = *v11;
      NameStoreRegistryRoot = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
      ExFreePoolWithTag(Data, 0x20666E57u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStoreRegistryRoot;
}
