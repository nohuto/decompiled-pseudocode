/*
 * XREFs of CmpCloneHwProfile @ 0x1407FC7DC
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x1409C272C (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wtoi @ 0x140195DC0 (_wtoi.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FCF58 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  void *v8; // r12
  unsigned int v10; // ecx
  NTSTATUS v11; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v13; // edi
  int v14; // eax
  ULONG v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v28; // [rsp+80h] [rbp-80h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+8Ch] [rbp-74h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v33[2]; // [rsp+D0h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD KeyInformation[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+F8h] [rbp-8h]
  unsigned int v37; // [rsp+FCh] [rbp-4h]
  wchar_t Str[2]; // [rsp+100h] [rbp+0h] BYREF
  ULONG v39; // [rsp+104h] [rbp+4h]
  wchar_t Dst[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  v8 = a3;
  v24 = 0LL;
  *KeyHandle = 0LL;
  *a7 = a4;
  v28 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo(v33);
  v10 = *a7;
  if ( *a7 >= 0xC8 )
    goto LABEL_8;
  while ( 1 )
  {
    *a7 = v10 + 1;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v11 < 0 )
      break;
    ZwClose(*KeyHandle);
    v10 = *a7;
    if ( *a7 >= 0xC8 )
      goto LABEL_7;
  }
  if ( v11 == -1073741772 )
    v11 = 0;
LABEL_7:
  if ( v11 >= 0 )
  {
LABEL_8:
    if ( ZwQuerySecurityObject(v8, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( !PoolWithTag || ZwQuerySecurityObject(v8, 4u, PoolWithTag, Length, &Length) >= 0 )
        goto LABEL_13;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    PoolWithTag = 0LL;
LABEL_13:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v11 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateKey(&v24, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v11 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v11 = ZwOpenKey(&v28, 0x20019u, &ObjectAttributes);
          if ( v11 >= 0 )
          {
            v11 = ZwQueryKey(v28, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v11 >= 0 )
            {
              v13 = v39;
              v14 = -1;
              Data = -1;
              v15 = 0;
              if ( v39 )
              {
                do
                {
                  if ( ZwEnumerateKey(v28, v15, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v37 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v37;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v37 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v28;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             KeyInformation,
                             0x100u,
                             &ResultLength) >= 0
                        && KeyInformation[1] == 4
                        && (*(_DWORD *)((char *)KeyInformation + v36) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v36);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v15;
                }
                while ( v15 < v13 );
                v14 = Data;
                v8 = *(void **)&UnicodeString.Length;
              }
              Data = v14 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v24, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, &UnicodeString) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v24, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
                RtlFreeAnsiString(&UnicodeString);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v24, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v24, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUIDEx(&Uuid, &UnicodeString, 1u) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v24, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.MaximumLength);
                RtlFreeAnsiString(&UnicodeString);
              }
              v11 = ObReferenceObjectByHandle(v8, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&Uuid, 0LL);
              if ( v11 >= 0 )
              {
                v11 = ObReferenceObjectByHandle(
                        *KeyHandle,
                        0x20006u,
                        (POBJECT_TYPE)CmKeyObjectType,
                        0,
                        (PVOID *)&UnicodeString,
                        0LL);
                if ( v11 >= 0 )
                {
                  CmpLockRegistryExclusive();
                  v16 = *(_QWORD *)&UnicodeString.Length;
                  v17 = *(_QWORD *)&Uuid.Data1;
                  if ( (unsigned __int8)CmpCopySyncTree(
                                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&Uuid.Data1 + 8LL) + 24LL),
                                          2,
                                          0) )
                  {
                    *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
                    *(_DWORD *)&Uuid.Data2 = 0;
                    v18 = *(_QWORD *)(v17 + 8);
                    *(_DWORD *)&UnicodeString.Length = -1;
                    Uuid.Data1 = -1;
                    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UNICODE_STRING *))(*(_QWORD *)(v18 + 24) + 8LL))(
                            *(_QWORD *)(v18 + 24),
                            *(unsigned int *)(v18 + 32),
                            &UnicodeString);
                    if ( v19 )
                    {
                      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL)
                                                                              + 8LL))(
                              *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL),
                              *(unsigned int *)(*(_QWORD *)(v16 + 8) + 32LL),
                              &Uuid);
                      if ( v20 )
                      {
                        *(_WORD *)(v20 + 52) = *(_WORD *)(v19 + 52);
                        *(_DWORD *)(v20 + 56) = *(_DWORD *)(v19 + 56);
                        CmpRebuildKcbCache(*(_QWORD *)(v16 + 8));
                        (*(void (__fastcall **)(_QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL) + 16LL))(
                          *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL),
                          &Uuid);
                        v11 = 0;
                      }
                      else
                      {
                        v11 = -1073741670;
                      }
                      (*(void (__fastcall **)(_QWORD, UNICODE_STRING *))(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL),
                        &UnicodeString);
                    }
                    else
                    {
                      v11 = -1073741670;
                    }
                  }
                  else
                  {
                    v11 = -1073741492;
                  }
                  CmpUnlockRegistry();
                }
              }
            }
          }
          else
          {
            v28 = 0LL;
          }
        }
        else
        {
          v24 = 0LL;
        }
      }
      else
      {
        v11 = 0;
      }
    }
  }
  ZwClose(v8);
  if ( v24 )
    ZwClose(v24);
  if ( v28 )
    ZwClose(v28);
  if ( v11 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  CmCleanupThreadInfo(v33);
  return (unsigned int)v11;
}
