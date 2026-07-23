/*
 * XREFs of CmpCreateHardwareProfiles @ 0x1409C272C
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140732EA4 (CmpOpenDevicesControlSet.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x1409C2B6C (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x1409F4730 (CmpAddAliasEntry.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  bool v1; // r15
  int v3; // eax
  HANDLE v4; // rdi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // r12
  __int64 v10; // r8
  ULONG Data[2]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v17; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v18[8]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v19; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v20; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE v22; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v24; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v26[256]; // [rsp+168h] [rbp+60h] BYREF

  v24 = 0LL;
  KeyHandle = 0LL;
  v1 = 0;
  v17 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  Data[0] = 0;
  v3 = CmpOpenDevicesControlSet(a1, &v24, &String1);
  v4 = v24;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_22;
  ObjectAttributes.RootDirectory = v24;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v6;
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpControlString;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v19, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v5 < 0 )
      goto LABEL_22;
    ZwClose(v19);
    v19 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v5 < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v19, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v5 < 0 )
      goto LABEL_22;
    Data[0] = 0;
    *(_QWORD *)&DestinationString.Length = 0x1000000LL;
    DestinationString.Buffer = (wchar_t *)v26;
    RtlUnicodeStringPrintf(&DestinationString, L"%04d", 0LL);
    ObjectAttributes.RootDirectory = v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v17, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    ZwClose(v19);
    v19 = 0LL;
    if ( v5 < 0 )
      goto LABEL_22;
    ZwClose(v17);
    v17 = 0LL;
    v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, Data, 4u);
    if ( v5 < 0 )
      goto LABEL_22;
  }
  else
  {
    if ( v6 < 0 )
      goto LABEL_22;
    v5 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v5 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_22;
    Data[0] = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes.RootDirectory = v4;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v20, 0x20019u, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    v5 = ZwCreateKey(&v20, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
  }
  if ( v5 < 0 )
    goto LABEL_22;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)v26;
  RtlUnicodeStringPrintf(&DestinationString, L"%04d", Data[0]);
  ObjectAttributes.RootDirectory = v20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v17, 0x2001Fu, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    v5 = ZwCreateKey(&v17, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
  }
  if ( v5 < 0 )
    goto LABEL_22;
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_WORD *)(v7 + 8);
  v9 = (_WORD *)(v7 + 4);
  if ( v8 == 3 )
  {
    v8 = 1;
    *(_WORD *)(v7 + 8) = 1;
  }
  if ( *v9 == 1 )
    goto LABEL_48;
  if ( *v9 == 2 )
  {
LABEL_15:
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Data[1]) >= 0 )
    {
      CmpAddDockingInfo(Handle);
      ZwClose(Handle);
      Handle = 0LL;
    }
    v1 = *(_WORD *)(v7 + 8) == 1;
    goto LABEL_18;
  }
  if ( *v9 != 3 )
  {
LABEL_18:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Data[1]);
    if ( v5 >= 0 )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)v26;
      RtlUnicodeStringPrintf(
        &DestinationString,
        L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
        &String1,
        Data[0]);
      v5 = ZwSetValueKey(Handle, &CmSymbolicLinkValueName, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
      {
        ZwClose(Handle);
        Handle = 0LL;
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v26;
        RtlUnicodeStringPrintf(
          &DestinationString,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
          &CmpSystemHiveNameString,
          L"24");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Data[1]);
        if ( v5 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 0x1000000LL;
          DestinationString.Buffer = (wchar_t *)v26;
          RtlUnicodeStringPrintf(
            &DestinationString,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
            &String1,
            L"24");
          v5 = ZwSetValueKey(
                 Handle,
                 &CmSymbolicLinkValueName,
                 0,
                 6u,
                 DestinationString.Buffer,
                 DestinationString.Length);
        }
      }
    }
    if ( v1 )
    {
      LODWORD(v24) = 131073;
      WORD2(v24) = 0;
      v5 = CmSetAcpiHwProfile(
             (unsigned __int16 *)&v24,
             (__int64 (__fastcall *)(_DWORD *, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
             v10,
             &v22,
             v18);
      ZwClose(v22);
    }
    goto LABEL_22;
  }
  v5 = CmpCloneHwProfile(KeyHandle, v20, v17, Data[0], v8, &v17, Data);
  if ( v5 < 0 )
  {
    v17 = 0LL;
    goto LABEL_22;
  }
  v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, Data, 4u);
  if ( v5 >= 0 )
  {
LABEL_48:
    CmpAddAliasEntry(KeyHandle, v7 + 4, Data[0]);
    goto LABEL_15;
  }
LABEL_22:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v17 )
    ZwClose(v17);
  if ( v20 )
    ZwClose(v20);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
