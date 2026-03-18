/*
 * XREFs of CmpCreateHardwareProfiles @ 0x140A0B2AC
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x140144A8C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14075D3CC (CmpOpenDevicesControlSet.c)
 *     CmDeleteKeyRecursive @ 0x1408345C0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x140A0B728 (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x140A38B68 (CmpAddAliasEntry.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  bool v2; // r12
  __int64 v3; // rcx
  int v4; // eax
  HANDLE v5; // rdi
  int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v8; // r14
  unsigned __int16 v9; // dx
  _WORD *v10; // r15
  __int64 v11; // r9
  __int64 v12; // r8
  ULONG Length; // [rsp+28h] [rbp-E0h]
  ULONG Data[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v20; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v21[8]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v22; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v23; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v26; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE v27; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v29[256]; // [rsp+168h] [rbp+60h] BYREF
  int v30[64]; // [rsp+268h] [rbp+160h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v27 = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v2 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyHandle = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  Data[0] = 0;
  v4 = CmpOpenDevicesControlSet(v3, &v27, &String1);
  v5 = v27;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v27;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v7;
  if ( v7 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_24;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpControlString;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v22, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v6 < 0 )
      goto LABEL_24;
    ZwClose(v22);
    v22 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v6 < 0 )
      goto LABEL_24;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v22, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    if ( v6 < 0 )
      goto LABEL_24;
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)v29;
    RtlUnicodeStringPrintf(&DestinationString, L"%04d", 0LL);
    ObjectAttributes.RootDirectory = v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v20, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
    ZwClose(v22);
    v22 = 0LL;
    if ( v6 < 0 )
      goto LABEL_24;
    ZwClose(v20);
    v20 = 0LL;
    v6 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, Data, 4u);
    if ( v6 < 0 )
      goto LABEL_24;
  }
  else
  {
    if ( v7 < 0 )
      goto LABEL_24;
    v6 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v6 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_24;
    Data[0] = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes.RootDirectory = v5;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&v23, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_24;
    v6 = ZwCreateKey(&v23, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
  }
  if ( v6 < 0 )
    goto LABEL_24;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)v29;
  RtlUnicodeStringPrintf(&DestinationString, L"%04d", Data[0]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v23;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&v20, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_24;
    v6 = ZwCreateKey(&v20, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Data[1]);
  }
  if ( v6 < 0 )
    goto LABEL_24;
  v8 = *(_QWORD *)(a1 + 240);
  v9 = *(_WORD *)(v8 + 8);
  v10 = (_WORD *)(v8 + 4);
  if ( v9 == 3 )
  {
    v9 = 1;
    *(_WORD *)(v8 + 8) = 1;
  }
  if ( *v10 == 1 )
    goto LABEL_50;
  if ( *v10 == 2 )
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
    v2 = *(_WORD *)(v8 + 8) == 1;
    goto LABEL_18;
  }
  if ( *v10 != 3 )
  {
LABEL_18:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      CmDeleteKeyRecursive(Handle, 0LL, (__int64)v30, v11, Length);
      ZwClose(Handle);
      Handle = 0LL;
    }
    v6 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Data[1]);
    if ( v6 >= 0 )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)v29;
      RtlUnicodeStringPrintf(
        &DestinationString,
        L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
        &String1,
        Data[0]);
      v6 = ZwSetValueKey(Handle, &CmSymbolicLinkValueName, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
      {
        ZwClose(Handle);
        Handle = 0LL;
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v29;
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
        v6 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Data[1]);
        if ( v6 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 0x1000000LL;
          DestinationString.Buffer = (wchar_t *)v29;
          RtlUnicodeStringPrintf(
            &DestinationString,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
            &String1,
            L"24");
          v6 = ZwSetValueKey(
                 Handle,
                 &CmSymbolicLinkValueName,
                 0,
                 6u,
                 DestinationString.Buffer,
                 DestinationString.Length);
        }
      }
    }
    if ( v2 )
    {
      LODWORD(v27) = 131073;
      WORD2(v27) = 0;
      v6 = CmSetAcpiHwProfile(
             (unsigned __int16 *)&v27,
             (__int64 (__fastcall *)(_DWORD *, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
             v12,
             &v26,
             v21);
      ZwClose(v26);
    }
    goto LABEL_24;
  }
  v6 = CmpCloneHwProfile(KeyHandle, v23, v20, Data[0], v9, &v20, Data);
  if ( v6 < 0 )
  {
    v20 = 0LL;
    goto LABEL_24;
  }
  v6 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, Data, 4u);
  if ( v6 >= 0 )
  {
LABEL_50:
    CmpAddAliasEntry(KeyHandle, v8 + 4, Data[0]);
    goto LABEL_15;
  }
LABEL_24:
  if ( v5 )
    ZwClose(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v20 )
    ZwClose(v20);
  if ( v23 )
    ZwClose(v23);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
