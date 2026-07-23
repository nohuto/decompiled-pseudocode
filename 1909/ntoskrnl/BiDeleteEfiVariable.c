/*
 * XREFs of BiDeleteEfiVariable @ 0x140930A68
 * Callers:
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1401C3790 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x1401C40B0 (ZwSetSystemEnvironmentValueEx.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
  unsigned int v3; // eax
  NTSTATUS v4; // eax
  ULONG *Attributes; // [rsp+20h] [rbp-50h]
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  v8 = 0LL;
  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
    BiReleasePrivilege((unsigned int *)&v8);
  }
  return (unsigned int)v2;
}
