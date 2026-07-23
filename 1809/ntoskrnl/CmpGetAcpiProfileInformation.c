/*
 * XREFs of CmpGetAcpiProfileInformation @ 0x140732784
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  ULONG v5; // esi
  NTSTATUS v9; // ebx
  PVOID PoolWithTag; // rax
  ULONG v11; // r14d
  ULONG v12; // esi
  PVOID v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  char *v16; // rdx
  ULONG v17; // ebx
  _DWORD *v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int64 v24; // rax
  _DWORD *v25; // rax
  unsigned int v26; // eax
  PVOID v27; // rcx
  unsigned int v28; // edx
  void *v29; // rcx
  _DWORD *v31; // rcx
  unsigned int v32; // edi
  void *v33; // rcx
  _DWORD *v34; // rcx
  unsigned int v35; // edi
  void *v36; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v40; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v42; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-39h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C0h] [rbp-29h] BYREF
  ULONG v47; // [rsp+D4h] [rbp-15h]

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  v40 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  *(_QWORD *)a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_46;
  }
  v9 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_46;
  ResultLength = 32 * (v47 - 1) + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20204D43u);
  *(_QWORD *)a2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_53;
  memset(PoolWithTag, 0, ResultLength);
  v11 = 0;
  **(_DWORD **)a2 = v47;
  for ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0; v11 < v47; v5 = 0 )
  {
    if ( ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
      break;
    KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
    DestinationString.Length = KeyValueInformation[6];
    DestinationString.MaximumLength = DestinationString.Length + 2;
    DestinationString.Buffer = KeyValueInformation + 8;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      break;
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value[1]);
    RtlInitUnicodeString(&DestinationString, L"PreferenceOrder");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 4 )
    {
      v12 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    }
    else
    {
      v12 = -1;
    }
    Value[0] = v12;
    RtlInitUnicodeString(&DestinationString, L"FriendlyName");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 1 )
    {
      v13 = ExAllocatePoolWithTag(PagedPool, *((unsigned int *)KeyValueInformation + 3), 0x20204D43u);
      v14 = *((_DWORD *)KeyValueInformation + 3);
      LODWORD(v42) = v14;
      *((_QWORD *)&v42 + 1) = v13;
      if ( !v13 )
        goto LABEL_60;
      v15 = v14;
      v16 = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
    }
    else
    {
      v45 = *(_OWORD *)L"-------";
      v13 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
      LODWORD(v42) = 16;
      *((_QWORD *)&v42 + 1) = v13;
      if ( !v13 )
      {
LABEL_60:
        v9 = -1073741670;
LABEL_65:
        ZwClose(Handle);
        goto LABEL_46;
      }
      v15 = *((unsigned int *)KeyValueInformation + 3);
      v16 = (char *)&v45;
    }
    memmove(v13, v16, v15);
    v17 = 0;
    Value[2] = 0;
    RtlInitUnicodeString(&DestinationString, L"Aliasable");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || *((_DWORD *)KeyValueInformation + 1) != 4
      || *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
    {
      v17 = 1;
      Value[2] = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"Pristine");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 4 )
    {
      if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
        v17 = 4;
      Value[2] = v17;
    }
    if ( !Value[1] )
    {
      v12 = -1;
      Value[2] = 4;
      Value[0] = -1;
    }
    v18 = *(_DWORD **)a2;
    v19 = 0;
    v20 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = v19 + 1;
        v22 = 8LL * v19;
        if ( v18[v22 + 6] >= v12 )
          break;
        ++v19;
        if ( v21 >= v20 )
          goto LABEL_27;
      }
      memmove(&v18[8 * v21 + 2], &v18[v22 + 2], 32LL * (*v18 - v19 - 1));
      v18 = *(_DWORD **)a2;
    }
LABEL_27:
    v23 = *(_OWORD *)Value;
    v24 = 8LL * v19;
    *(_OWORD *)&v18[v24 + 2] = v42;
    *(_OWORD *)&v18[v24 + 6] = v23;
    ++*(_DWORD *)(*(_QWORD *)a2 + 4LL);
    ZwClose(Handle);
    ++v11;
  }
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v40, 0x20019u, &ObjectAttributes) < 0 )
  {
    v9 = 0;
    v40 = 0LL;
    goto LABEL_48;
  }
  v9 = ZwQueryKey(v40, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v9 >= 0 )
  {
    v25 = ExAllocatePoolWithTag(PagedPool, 32LL * (v47 - 1) + 40, 0x20204D43u);
    *(_QWORD *)a3 = v25;
    if ( v25 )
    {
      v25[1] = v47;
      **(_DWORD **)a3 = v47;
      if ( v47 )
      {
        while ( 1 )
        {
          v9 = ZwEnumerateKey(v40, v5, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
          if ( v9 < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = v40;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v9 < 0 )
            break;
          RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 8) = *(_DWORD *)((char *)KeyValueInformation
                                                                       + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"DockingState"),
                ZwQueryValueKey(
                  Handle,
                  &DestinationString,
                  KeyValueFullInformation,
                  KeyValueInformation,
                  0x100u,
                  &ResultLength) < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 12) = *(_DWORD *)((char *)KeyValueInformation
                                                                        + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                v9 = ZwQueryValueKey(
                       Handle,
                       &DestinationString,
                       KeyValueFullInformation,
                       KeyValueInformation,
                       0x100u,
                       &ResultLength),
                v9 < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 3 )
          {
            v9 = -1073741492;
            goto LABEL_65;
          }
          *(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 16) = *((_DWORD *)KeyValueInformation + 3);
          v26 = *((_DWORD *)KeyValueInformation + 3);
          if ( v26 )
            v27 = ExAllocatePoolWithTag(PagedPool, v26, 0x20204D43u);
          else
            v27 = 0LL;
          *(_QWORD *)(*(_QWORD *)a3 + 24LL * v5 + 24) = v27;
          v28 = *((_DWORD *)KeyValueInformation + 3);
          if ( v28 )
          {
            v29 = *(void **)(*(_QWORD *)a3 + 24LL * v5 + 24);
            if ( !v29 )
              goto LABEL_60;
            memmove(v29, (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2), v28);
          }
          ZwClose(Handle);
          if ( ++v5 >= v47 )
            goto LABEL_46;
        }
      }
      goto LABEL_46;
    }
LABEL_53:
    v9 = -1073741670;
  }
LABEL_46:
  if ( v40 )
    ZwClose(v40);
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 < 0 )
  {
    v31 = *(_DWORD **)a2;
    if ( *(_QWORD *)a2 )
    {
      v32 = 0;
      if ( v31[1] )
      {
        do
        {
          v33 = *(void **)&v31[8 * v32 + 4];
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          v31 = *(_DWORD **)a2;
          ++v32;
        }
        while ( v32 < *(_DWORD *)(*(_QWORD *)a2 + 4LL) );
      }
      ExFreePoolWithTag(v31, 0);
      *(_QWORD *)a2 = 0LL;
    }
    v34 = *(_DWORD **)a3;
    if ( *(_QWORD *)a3 )
    {
      v35 = 0;
      if ( v34[1] )
      {
        do
        {
          v36 = *(void **)&v34[6 * v35 + 6];
          if ( v36 )
            ExFreePoolWithTag(v36, 0);
          v34 = *(_DWORD **)a3;
          ++v35;
        }
        while ( v35 < *(_DWORD *)(*(_QWORD *)a3 + 4LL) );
      }
      ExFreePoolWithTag(v34, 0);
      *(_QWORD *)a3 = 0LL;
    }
  }
  return (unsigned int)v9;
}
