/*
 * XREFs of SmpReplaceSystemHiveOnSoftReboot @ 0x14000D3A4
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     SmpOpenTargetFile @ 0x140012F1C (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x14001300C (SmpRenameTargetFile.c)
 *     SmpTerminate @ 0x1400138E4 (SmpTerminate.c)
 */

NTSTATUS SmpReplaceSystemHiveOnSoftReboot()
{
  NTSTATUS result; // eax
  int v1; // eax
  unsigned __int64 v2; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-31h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING v6; // [rsp+48h] [rbp-11h] BYREF
  int v7; // [rsp+58h] [rbp-1h] BYREF
  __int64 v8; // [rsp+60h] [rbp+7h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+70h] [rbp+17h]
  __int128 v11; // [rsp+78h] [rbp+1Fh]
  unsigned __int64 Parameters[4]; // [rsp+88h] [rbp+2Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\config\\SYSTEM.ksr.tmp");
  v8 = 0LL;
  p_DestinationString = &DestinationString;
  v7 = 48;
  v10 = 64;
  v11 = 0LL;
  result = SmpOpenTargetFile(&Handle, 1114112LL, &v7);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v5, L"\\SystemRoot\\System32\\config\\SYSTEM");
    v1 = SmpRenameTargetFile(&v5, Handle, 1LL);
    v2 = v1;
    if ( v1 < 0 )
    {
      RtlInitUnicodeString(&v6, L"Failed to replace system hive on soft reboot");
      Parameters[2] = 0LL;
      Parameters[3] = 0LL;
      Parameters[0] = (unsigned __int64)&v6;
      Parameters[1] = v2;
      SmpTerminate(Parameters, 1u, 4u);
      JUMPOUT(0x14000D499LL);
    }
    return NtClose(Handle);
  }
  return result;
}
