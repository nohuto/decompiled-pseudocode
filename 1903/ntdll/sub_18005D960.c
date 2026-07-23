/*
 * XREFs of sub_18005D960 @ 0x18005D960
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CB10 (RtlQueryEnvironmentVariable_U.c)
 *     sub_18005D8C0 @ 0x18005D8C0 (sub_18005D8C0.c)
 *     RtlSetThreadErrorMode @ 0x18005DAE0 (RtlSetThreadErrorMode.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 */

NTSTATUS __fastcall sub_18005D960(WCHAR a1)
{
  NTSTATUS v2; // ebx
  _UNICODE_STRING Value; // [rsp+38h] [rbp-D0h] BYREF
  ULONG OldMode[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+ACh] [rbp-5Ch]
  __int64 v12; // [rsp+B8h] [rbp-50h] BYREF
  char v13; // [rsp+C0h] [rbp-48h] BYREF

  SourceString[1] = a1;
  SourceString[0] = 61;
  v11 = 58;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v12 = 0x5C003F003F005CLL;
  *(_DWORD *)&Value.Length = 34078720;
  Value.Buffer = (PWCH)&v13;
  if ( RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value) < 0 )
  {
    *Value.Buffer = a1;
    Value.Buffer[1] = 58;
    Value.Buffer[2] = 92;
    Value.Buffer[3] = 0;
    Value.Length = 6;
    return sub_18005D8C0(a1);
  }
  Value.Length += 8;
  ObjectAttributes.Length = 48;
  Value.MaximumLength = 544;
  ObjectAttributes.RootDirectory = 0LL;
  Value.Buffer = (PWCH)&v12;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &Value;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RtlSetThreadErrorMode(0x10u, OldMode);
  v2 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlSetThreadErrorMode(OldMode[0], 0LL);
  if ( v2 < 0 )
    return sub_18005D8C0(a1);
  return ZwClose(FileHandle);
}
