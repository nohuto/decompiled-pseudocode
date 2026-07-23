/*
 * XREFs of CmpCloneHwProfile @ 0x1408349A8
 * Callers:
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wtoi @ 0x1401A0450 (_wtoi.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401C0390 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1401C2B70 (ZwQuerySecurityObject.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     CmpRebuildKcbCache @ 0x1406315E0 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     ExUuidCreate @ 0x140696870 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140835168 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x140835FBC (CmpCopySyncTree.c)
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
  PVOID v7; // r12
  unsigned int v11; // eax
  PVOID PoolWithTag; // rdi
  NTSTATUS v13; // ebx
  ULONG v14; // edi
  int v15; // eax
  ULONG v16; // ebx
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v29; // [rsp+78h] [rbp-88h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp-80h] BYREF
  ULONG ResultLength; // [rsp+84h] [rbp-7Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v36[2]; // [rsp+E8h] [rbp-18h] BYREF
  UUID Uuid; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD KeyInformation[2]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+118h] [rbp+18h]
  unsigned int v40; // [rsp+11Ch] [rbp+1Ch]
  wchar_t Str[2]; // [rsp+120h] [rbp+20h] BYREF
  ULONG v42; // [rsp+124h] [rbp+24h]
  wchar_t Dst[64]; // [rsp+210h] [rbp+110h] BYREF

  v7 = a3;
  Object = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *KeyHandle = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  *a7 = a4;
  CmpInitializeDelayDerefContext(v36);
  v11 = *a7;
  PoolWithTag = 0LL;
  if ( *a7 >= 0xC8 )
    goto LABEL_10;
  while ( 1 )
  {
    *a7 = v11 + 1;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v13 < 0 )
      break;
    ZwClose(*KeyHandle);
    v11 = *a7;
    if ( *a7 >= 0xC8 )
      goto LABEL_7;
  }
  if ( v13 == -1073741772 )
    v13 = 0;
LABEL_7:
  if ( v13 >= 0 )
  {
LABEL_10:
    if ( ZwQuerySecurityObject(v7, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( PoolWithTag )
      {
        if ( ZwQuerySecurityObject(v7, 4u, PoolWithTag, Length, &Length) < 0 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = 0LL;
        }
      }
    }
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v13 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v13 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = ZwCreateKey(&v25, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v13 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = ZwOpenKey(&v29, 0x20019u, &ObjectAttributes);
          if ( v13 >= 0 )
          {
            v13 = ZwQueryKey(v29, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v13 >= 0 )
            {
              v14 = v42;
              v15 = -1;
              Data = -1;
              v16 = 0;
              if ( v42 )
              {
                do
                {
                  if ( ZwEnumerateKey(v29, v16, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v40 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v40;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v40 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v29;
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
                        && (*(_DWORD *)((char *)KeyInformation + v39) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v39);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v16;
                }
                while ( v16 < v14 );
                v15 = Data;
                v7 = Object;
              }
              Data = v15 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v25, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, &UnicodeString) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v25, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
                RtlFreeAnsiString(&UnicodeString);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v25, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v25, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUIDEx(&Uuid, &GuidString, 1u) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v25, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
                RtlFreeAnsiString(&GuidString);
              }
              v13 = ObReferenceObjectByHandle(
                      v7,
                      0x20019u,
                      (POBJECT_TYPE)CmKeyObjectType,
                      0,
                      (PVOID *)&UnicodeString,
                      0LL);
              if ( v13 >= 0 )
              {
                v13 = ObReferenceObjectByHandle(*KeyHandle, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
                if ( v13 >= 0 )
                {
                  CmpLockRegistryExclusive();
                  v17 = Object;
                  v18 = *(_QWORD *)&UnicodeString.Length;
                  if ( (unsigned __int8)CmpCopySyncTree(
                                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&UnicodeString.Length + 8LL) + 32LL),
                                          2,
                                          0) )
                  {
                    *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
                    v19 = *(_QWORD *)(v18 + 8);
                    Object = (PVOID)0xFFFFFFFFLL;
                    *(_DWORD *)&UnicodeString.Length = -1;
                    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID *))(*(_QWORD *)(v19 + 32) + 8LL))(
                            *(_QWORD *)(v19 + 32),
                            *(unsigned int *)(v19 + 40),
                            &Object);
                    if ( v20 )
                    {
                      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UNICODE_STRING *))(*(_QWORD *)(v17[1] + 32LL)
                                                                                        + 8LL))(
                              *(_QWORD *)(v17[1] + 32LL),
                              *(unsigned int *)(v17[1] + 40LL),
                              &UnicodeString);
                      if ( v21 )
                      {
                        *(_WORD *)(v21 + 52) = *(_WORD *)(v20 + 52);
                        *(_DWORD *)(v21 + 56) = *(_DWORD *)(v20 + 56);
                        CmpRebuildKcbCache(v17[1], (__int64)v36);
                        (*(void (__fastcall **)(_QWORD, UNICODE_STRING *))(*(_QWORD *)(v17[1] + 32LL) + 16LL))(
                          *(_QWORD *)(v17[1] + 32LL),
                          &UnicodeString);
                        v13 = 0;
                      }
                      else
                      {
                        v13 = -1073741670;
                      }
                      (*(void (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL),
                        &Object);
                    }
                    else
                    {
                      v13 = -1073741670;
                    }
                  }
                  else
                  {
                    v13 = -1073741492;
                  }
                  CmpDrainDelayDerefContext(v36);
                  CmpUnlockRegistry();
                }
              }
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        else
        {
          v25 = 0LL;
        }
      }
      else
      {
        v13 = 0;
      }
    }
  }
  ZwClose(v7);
  if ( v25 )
    ZwClose(v25);
  if ( v29 )
    ZwClose(v29);
  if ( v13 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  return (unsigned int)v13;
}
