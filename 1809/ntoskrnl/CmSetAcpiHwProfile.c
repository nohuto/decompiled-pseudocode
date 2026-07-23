/*
 * XREFs of CmSetAcpiHwProfile @ 0x1407320C0
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x140840E9C (IopExecuteHardwareProfileChange.c)
 *     CmpCreateHardwareProfiles @ 0x1409C272C (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpFilterAcpiDockingState @ 0x1407325B4 (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x140732784 (CmpGetAcpiProfileInformation.c)
 *     CmpOpenDevicesControlSet @ 0x140732EA4 (CmpOpenDevicesControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x1407FC578 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FD200 (CmpMoveBiosAliasTable.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(
        unsigned __int16 *a1,
        __int64 (__fastcall *a2)(_DWORD *, unsigned int *, _QWORD),
        __int64 a3,
        HANDLE *a4,
        _BYTE *a5)
{
  PVOID PoolWithTag; // rsi
  _DWORD *v7; // rdi
  HANDLE *v8; // r14
  NTSTATUS AcpiProfileInformation; // ebx
  void *v11; // r13
  int v12; // r9d
  int v13; // ebx
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rax
  int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rax
  void *v25; // rcx
  HANDLE v27; // rcx
  NTSTATUS v28; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v35; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  HANDLE *v37; // [rsp+78h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE v41; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v42; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v44; // [rsp+D0h] [rbp-30h] BYREF
  void *v45; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE *v46; // [rsp+E0h] [rbp-20h]
  _BYTE v47[24]; // [rsp+E8h] [rbp-18h] BYREF
  int KeyValueInformation; // [rsp+100h] [rbp+0h] BYREF
  int v49; // [rsp+104h] [rbp+4h]
  unsigned int v50; // [rsp+108h] [rbp+8h]
  SIZE_T NumberOfBytes; // [rsp+10Ch] [rbp+Ch]
  wchar_t Dst[128]; // [rsp+200h] [rbp+100h] BYREF

  v45 = 0LL;
  KeyHandle = 0LL;
  v35 = 0LL;
  PoolWithTag = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  v44 = 0LL;
  v8 = a4;
  v41 = 0LL;
  v42 = 0LL;
  *a5 = 0;
  v37 = a4;
  v46 = a5;
  P = 0LL;
  AcpiProfileInformation = CmpOpenDevicesControlSet(a1, &v45, v47);
  if ( AcpiProfileInformation < 0 )
    goto LABEL_57;
  v11 = v45;
  ObjectAttributes.RootDirectory = v45;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( AcpiProfileInformation < 0 )
  {
    KeyHandle = 0LL;
  }
  else
  {
    AcpiProfileInformation = CmpGetAcpiProfileInformation((int)KeyHandle, (int)&P, (int)&v42, v12, &KeyValueInformation);
    if ( AcpiProfileInformation < 0 )
    {
LABEL_56:
      v7 = P;
      goto LABEL_57;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.RootDirectory = v11;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&v35, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      v35 = 0LL;
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
          && v49 == 4 )
        {
          v13 = *(int *)((char *)&KeyValueInformation + v50);
          RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && v49 == 3 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
            if ( !PoolWithTag )
            {
              AcpiProfileInformation = -1073741670;
              goto LABEL_56;
            }
            memmove(PoolWithTag, (char *)&KeyValueInformation + v50, (unsigned int)NumberOfBytes);
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || v49 != 4 )
          {
            AcpiProfileInformation = -1073741492;
            goto LABEL_56;
          }
          v7 = P;
          v14 = *(int *)((char *)&KeyValueInformation + v50);
          AcpiProfileInformation = CmpFilterAcpiDockingState(
                                     (_DWORD)a1,
                                     v13,
                                     (_DWORD)PoolWithTag,
                                     v14,
                                     (__int64)P,
                                     (__int64)v42);
          if ( AcpiProfileInformation < 0 )
            goto LABEL_57;
          v15 = a2(v7, &v40, 0LL);
          AcpiProfileInformation = v15;
          if ( v40 == -1 )
            goto LABEL_22;
          if ( v15 < 0 )
            goto LABEL_57;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
          ObjectAttributes.RootDirectory = v11;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          AcpiProfileInformation = ZwOpenKey(&v41, 0x20019u, &ObjectAttributes);
          if ( AcpiProfileInformation < 0 )
          {
            v41 = 0LL;
          }
          else
          {
            v16 = 8LL * v40;
            v17 = v7[v16 + 8];
            v18 = v7[v16 + 7];
            v30 = v18;
            if ( (v17 & 8) != 0 )
            {
              AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v14, v18, Dst);
              if ( AcpiProfileInformation < 0 )
                goto LABEL_57;
              v18 = v30;
            }
            if ( (v17 & 4) == 0 && v18 == v14 )
            {
LABEL_18:
              Data = *a1;
              RtlInitUnicodeString(&DestinationString, L"DockingState");
              ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
              RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
              AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
              if ( (v17 & 2) == 0 )
                AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, v30, Dst);
              if ( v30 != v14 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
                ObjectAttributes.RootDirectory = v11;
                ObjectAttributes.Attributes = 832;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                ZwCreateKey(&v44, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
                *(_QWORD *)&DestinationString.Length = 0x1000000LL;
                DestinationString.Buffer = Dst;
                RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
                  v47,
                  v30);
                AcpiProfileInformation = ZwSetValueKey(
                                           v44,
                                           &CmSymbolicLinkValueName,
                                           0,
                                           6u,
                                           DestinationString.Buffer,
                                           DestinationString.Length);
              }
              goto LABEL_22;
            }
            v27 = Handle;
            *v46 = 1;
            ZwClose(v27);
            Handle = 0LL;
            if ( (v17 & 4) != 0 )
            {
              LOWORD(Length) = *a1;
              v28 = CmpCloneHwProfile(KeyHandle, v41, v35, v30, Length, &v35, &v30);
            }
            else
            {
              ZwClose(v35);
              swprintf_s(Dst, 0x80uLL, L"%04d", v30);
              RtlInitUnicodeString(&DestinationString, Dst);
              ObjectAttributes.RootDirectory = v41;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v28 = ZwOpenKey(&v35, 0x20019u, &ObjectAttributes);
            }
            AcpiProfileInformation = v28;
            if ( v28 >= 0 )
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
                if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v30, 4u) < 0 )
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
              v35 = 0LL;
            }
          }
LABEL_22:
          v8 = v37;
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
    *v8 = v35;
    goto LABEL_25;
  }
LABEL_57:
  if ( v35 )
    ZwClose(v35);
LABEL_25:
  if ( v44 )
    ZwClose(v44);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v41 )
    ZwClose(v41);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
  {
    v19 = 0;
    Data = 0;
    if ( v7[1] )
    {
      v20 = 0LL;
      do
      {
        v21 = 8 * v20;
        if ( *(_QWORD *)&v7[v21 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v7[v21 + 4], 0);
          v19 = Data;
        }
        Data = ++v19;
        v20 = v19;
      }
      while ( v19 < v7[1] );
    }
    ExFreePoolWithTag(v7, 0);
  }
  v22 = v42;
  if ( v42 )
  {
    v23 = 0;
    Data = 0;
    if ( *((_DWORD *)v42 + 1) )
    {
      v24 = 0LL;
      do
      {
        v25 = (void *)*((_QWORD *)v42 + 3 * v24 + 3);
        if ( v25 )
        {
          ExFreePoolWithTag(v25, 0);
          v23 = Data;
        }
        Data = ++v23;
        v24 = v23;
      }
      while ( v23 < v22[1] );
    }
    ExFreePoolWithTag(v42, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
