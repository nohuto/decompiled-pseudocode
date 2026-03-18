/*
 * XREFs of CmSetAcpiHwProfile @ 0x14075C588
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x14087B68C (IopExecuteHardwareProfileChange.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x140144A8C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpFilterAcpiDockingState @ 0x14075CAA4 (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x14075CC74 (CmpGetAcpiProfileInformation.c)
 *     CmpOpenDevicesControlSet @ 0x14075D3CC (CmpOpenDevicesControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x140834738 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(
        unsigned __int16 *a1,
        __int64 (__fastcall *a2)(_DWORD *, unsigned int *, _QWORD),
        __int64 a3,
        HANDLE *a4,
        _BYTE *a5)
{
  _DWORD *v7; // rdi
  HANDLE *v8; // r14
  PVOID PoolWithTag; // rsi
  __int64 v10; // rcx
  NTSTATUS AcpiProfileInformation; // ebx
  void *v12; // r12
  int v13; // r9d
  int v14; // ebx
  unsigned int v15; // r14d
  int v16; // eax
  __int64 v17; // rax
  int v18; // r15d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rdi
  unsigned int v24; // edx
  __int64 v25; // rax
  void *v26; // rcx
  HANDLE v28; // rcx
  NTSTATUS v29; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v36; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v39; // [rsp+A8h] [rbp-58h]
  ULONG ResultLength; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE v42; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v43; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v45; // [rsp+D0h] [rbp-30h] BYREF
  void *v46; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE *v47; // [rsp+E0h] [rbp-20h]
  _QWORD v48[3]; // [rsp+E8h] [rbp-18h] BYREF
  int KeyValueInformation; // [rsp+100h] [rbp+0h] BYREF
  int v50; // [rsp+104h] [rbp+4h]
  unsigned int v51; // [rsp+108h] [rbp+8h]
  SIZE_T NumberOfBytes; // [rsp+10Ch] [rbp+Ch]
  wchar_t Dst[128]; // [rsp+200h] [rbp+100h] BYREF

  v46 = 0LL;
  KeyHandle = 0LL;
  v36 = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v8 = a4;
  v39 = a4;
  v47 = a5;
  PoolWithTag = 0LL;
  v48[0] = 0LL;
  v48[1] = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a5 = 0;
  AcpiProfileInformation = CmpOpenDevicesControlSet(v10, &v46, v48);
  if ( AcpiProfileInformation < 0 )
    goto LABEL_57;
  ObjectAttributes.Length = 48;
  v12 = v46;
  ObjectAttributes.RootDirectory = v46;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( AcpiProfileInformation < 0 )
  {
    KeyHandle = 0LL;
  }
  else
  {
    AcpiProfileInformation = CmpGetAcpiProfileInformation((int)KeyHandle, (int)&P, (int)&v43, v13, &KeyValueInformation);
    if ( AcpiProfileInformation < 0 )
    {
LABEL_56:
      v7 = P;
      goto LABEL_57;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.RootDirectory = v12;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&v36, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      v36 = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"DockingState");
        if ( ZwQueryValueKey(
               Handle,
               &DestinationString,
               KeyValueFullInformation,
               &KeyValueInformation,
               0x100u,
               &ResultLength) >= 0
          && v50 == 4 )
        {
          v14 = *(int *)((char *)&KeyValueInformation + v51);
          RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && v50 == 3 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
            if ( !PoolWithTag )
            {
              AcpiProfileInformation = -1073741670;
              goto LABEL_56;
            }
            memmove(PoolWithTag, (char *)&KeyValueInformation + v51, (unsigned int)NumberOfBytes);
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || v50 != 4 )
          {
            AcpiProfileInformation = -1073741492;
            goto LABEL_56;
          }
          v7 = P;
          v15 = *(int *)((char *)&KeyValueInformation + v51);
          AcpiProfileInformation = CmpFilterAcpiDockingState(
                                     (_DWORD)a1,
                                     v14,
                                     (_DWORD)PoolWithTag,
                                     v15,
                                     (__int64)P,
                                     (__int64)v43);
          if ( AcpiProfileInformation < 0 )
            goto LABEL_57;
          v16 = a2(v7, &v41, 0LL);
          AcpiProfileInformation = v16;
          if ( v41 == -1 )
            goto LABEL_22;
          if ( v16 < 0 )
            goto LABEL_57;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
          ObjectAttributes.RootDirectory = v12;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          AcpiProfileInformation = ZwOpenKey(&v42, 0x20019u, &ObjectAttributes);
          if ( AcpiProfileInformation < 0 )
          {
            v42 = 0LL;
          }
          else
          {
            v17 = 8LL * v41;
            v18 = v7[v17 + 8];
            v19 = v7[v17 + 7];
            v31 = v19;
            if ( (v18 & 8) != 0 )
            {
              AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v15, v19, Dst);
              if ( AcpiProfileInformation < 0 )
                goto LABEL_57;
              v19 = v31;
            }
            if ( (v18 & 4) == 0 && v19 == v15 )
            {
LABEL_18:
              Data = *a1;
              RtlInitUnicodeString(&DestinationString, L"DockingState");
              ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
              RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
              AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
              if ( (v18 & 2) == 0 )
                AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, v31, Dst);
              if ( v31 != v15 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
                ObjectAttributes.RootDirectory = v12;
                ObjectAttributes.Attributes = 832;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                ZwCreateKey(&v45, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
                *(_QWORD *)&DestinationString.Length = 0x1000000LL;
                DestinationString.Buffer = Dst;
                RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
                  v48,
                  v31);
                AcpiProfileInformation = ZwSetValueKey(
                                           v45,
                                           &CmSymbolicLinkValueName,
                                           0,
                                           6u,
                                           DestinationString.Buffer,
                                           DestinationString.Length);
              }
              goto LABEL_22;
            }
            v28 = Handle;
            *v47 = 1;
            ZwClose(v28);
            Handle = 0LL;
            if ( (v18 & 4) != 0 )
            {
              LOWORD(Length) = *a1;
              v29 = CmpCloneHwProfile(KeyHandle, v42, v36, v31, Length, &v36, &v31);
            }
            else
            {
              ZwClose(v36);
              swprintf_s(Dst, 0x80uLL, L"%04d", v31);
              RtlInitUnicodeString(&DestinationString, Dst);
              ObjectAttributes.RootDirectory = v42;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v29 = ZwOpenKey(&v36, 0x20019u, &ObjectAttributes);
            }
            AcpiProfileInformation = v29;
            if ( v29 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
              ObjectAttributes.RootDirectory = KeyHandle;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              AcpiProfileInformation = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
              if ( AcpiProfileInformation >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
                if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v31, 4u) < 0 )
                {
                  AcpiProfileInformation = -1073741492;
                  goto LABEL_57;
                }
                goto LABEL_18;
              }
              Handle = 0LL;
            }
            else
            {
              v36 = 0LL;
            }
          }
LABEL_22:
          v8 = v39;
          goto LABEL_23;
        }
        AcpiProfileInformation = -1073741492;
      }
    }
    v7 = P;
  }
LABEL_23:
  if ( AcpiProfileInformation >= 0 )
  {
    *v8 = v36;
    goto LABEL_25;
  }
LABEL_57:
  if ( v36 )
    ZwClose(v36);
LABEL_25:
  if ( v45 )
    ZwClose(v45);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v42 )
    ZwClose(v42);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
  {
    v20 = 0;
    Data = 0;
    if ( v7[1] )
    {
      v21 = 0LL;
      do
      {
        v22 = 8 * v21;
        if ( *(_QWORD *)&v7[v22 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v7[v22 + 4], 0);
          v20 = Data;
        }
        Data = ++v20;
        v21 = v20;
      }
      while ( v20 < v7[1] );
    }
    ExFreePoolWithTag(v7, 0);
  }
  v23 = v43;
  if ( v43 )
  {
    v24 = 0;
    Data = 0;
    if ( *((_DWORD *)v43 + 1) )
    {
      v25 = 0LL;
      do
      {
        v26 = (void *)*((_QWORD *)v43 + 3 * v25 + 3);
        if ( v26 )
        {
          ExFreePoolWithTag(v26, 0);
          v24 = Data;
        }
        Data = ++v24;
        v25 = v24;
      }
      while ( v24 < v23[1] );
    }
    ExFreePoolWithTag(v43, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
