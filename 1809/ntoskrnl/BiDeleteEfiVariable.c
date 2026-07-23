/*
 * XREFs of BiDeleteEfiVariable @ 0x1408F461C
 * Callers:
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1401BAE10 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x1401BB730 (ZwSetSystemEnvironmentValueEx.c)
 *     BiReleasePrivilege @ 0x140712744 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140712794 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
  unsigned int v3; // eax
  NTSTATUS v4; // eax
  ULONG *Attributes; // [rsp+20h] [rbp-50h]
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v8);
  if ( v2 >= 0 )
  {
    ReturnLength = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, &ReturnLength, 0LL);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      LODWORD(Attributes) = 1;
      v4 = ZwSetSystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, 0LL, Attributes);
      v2 = v4;
      if ( v4 < 0 )
        BiLogMessage(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4);
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, v3);
    }
    BiReleasePrivilege(&v8);
  }
  return (unsigned int)v2;
}
