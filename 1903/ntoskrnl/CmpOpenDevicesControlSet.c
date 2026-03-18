/*
 * XREFs of CmpOpenDevicesControlSet @ 0x14075D3CC
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x14075C434 (CmpMarkCurrentProfileDirty.c)
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x140144A8C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall CmpOpenDevicesControlSet(__int64 a1, HANDLE *a2, UNICODE_STRING *a3)
{
  const UNICODE_STRING *v5; // rdi
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[256]; // [rsp+70h] [rbp-90h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v5 = &CmpDevicesHiveNameString;
  if ( !CmStateSeparationEnabled )
    v5 = &CmpSystemHiveNameString;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)v12;
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%wZ\\CurrentControlSet", v5);
  if ( v6 < 0 )
    goto LABEL_11;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_11;
    *(_QWORD *)&DestinationString.Length = 0x1000000LL;
    v5 = &CmpSystemHiveNameString;
    DestinationString.Buffer = (wchar_t *)v12;
    v6 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"\\Registry\\Machine\\%wZ\\CurrentControlSet",
           &CmpSystemHiveNameString);
    if ( v6 < 0 )
      goto LABEL_11;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
  {
LABEL_11:
    v7 = KeyHandle;
    goto LABEL_8;
  }
  v7 = 0LL;
  *a2 = KeyHandle;
  KeyHandle = 0LL;
  if ( !a3 )
    return (unsigned int)v6;
  *a3 = *v5;
LABEL_8:
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v6;
}
