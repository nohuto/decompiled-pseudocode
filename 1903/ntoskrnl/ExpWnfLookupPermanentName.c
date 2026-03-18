/*
 * XREFs of ExpWnfLookupPermanentName @ 0x14063C614
 * Callers:
 *     ExpWnfCheckCrossScopeAccess @ 0x14063E584 (ExpWnfCheckCrossScopeAccess.c)
 *     NtQueryWnfStateNameInformation @ 0x14063EC50 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x140641450 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140641914 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140641CA0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1407851A0 (NtDeleteWnfStateData.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7A30 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063C7F0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14063C94C (ExpWnfComposeValueName.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14063D470 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140644D3C (ExpWnfSpecializeSecurityDescriptor.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  struct _LIST_ENTRY *HostSilo; // rax
  struct _LIST_ENTRY *v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  _DWORD *v10; // rsi
  NTSTATUS i; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _DWORD *v17; // rcx
  _QWORD *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-38h] BYREF
  char v23; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  v4 = 0LL;
  ValueName.Buffer = (wchar_t *)&v23;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( (_DWORD)v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    HostSilo = (struct _LIST_ENTRY *)PsGetHostSilo();
    v7 = PsAttachSiloToCurrentThread(HostSilo);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((unsigned int)v5, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    ResultLength = 0;
    v10 = 0LL;
    for ( i = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
          ;
          i = ZwQueryValueKey(
                KeyHandle,
                &ValueName,
                KeyValuePartialInformation,
                PoolWithTag + 3,
                ResultLength,
                &ResultLength) )
    {
      NameStoreRegistryRoot = i;
      if ( i != -1073741789 )
        break;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x20666E57u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength + 24, 0x20666E57u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        NameStoreRegistryRoot = -1073741670;
        goto LABEL_20;
      }
      v10 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v10[1] == 3 )
      {
        v12 = (char *)(v10 + 3);
        *v4 = 0LL;
        v4[1] = 0LL;
        v4[2] = 0LL;
        v13 = v10[2];
        v4[2] = v12;
        if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor((PSECURITY_DESCRIPTOR)v4[2]);
          v14 = RtlLengthSecurityDescriptor((PSECURITY_DESCRIPTOR)v4[2]);
          v15 = v13 - v14;
          v16 = &v12[v14];
          if ( v15 >= 4 )
          {
            v17 = v16 + 4;
            *(_DWORD *)v4 = *(_DWORD *)v16;
            NameStoreRegistryRoot = 0;
            if ( v15 - 4 < 0x10 )
              v17 = 0LL;
            v4[1] = v17;
            *a2 = v4;
            goto LABEL_13;
          }
        }
      }
      NameStoreRegistryRoot = -1073741823;
    }
LABEL_20:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x20666E57u);
  }
LABEL_13:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
