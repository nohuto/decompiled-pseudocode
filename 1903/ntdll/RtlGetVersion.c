/*
 * XREFs of RtlGetVersion @ 0x18002D230
 * Callers:
 *     sub_18002D010 @ 0x18002D010 (sub_18002D010.c)
 *     RtlVerifyVersionInfo @ 0x180072710 (RtlVerifyVersionInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180074D60 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180016F74 @ 0x180016F74 (sub_180016F74.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     ZwQueryLicenseValue @ 0x18009F070 (ZwQueryLicenseValue.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v2; // rdi
  PWCH Buffer; // r8
  DWORD dwOSVersionInfoSize; // esi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+80h] [rbp+38h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+88h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+48h] BYREF
  ULONG ResultDataSize; // [rsp+98h] [rbp+50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Data = 0;
  v2 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v2->OSMajorVersion;
  VersionInformation->dwMinorVersion = v2->OSMinorVersion;
  VersionInformation->dwBuildNumber = v2->OSBuildNumber;
  VersionInformation->dwPlatformId = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)sub_180016F74(VersionInformation->szCSDVersion, 0x100uLL, (__int64)Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v2->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v2->OSCSDVersion;
    VersionInformation->wSuiteMask = RtlGetSuiteMask();
    if ( dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      VersionInformation->wProductType = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
      || Data != 1
      || Type != 4
      || ResultDataSize != 4 )
    {
      VersionInformation->wSuiteMask &= ~0x10u;
      VersionInformation->wSuiteMask |= 0x100u;
      if ( VersionInformation->dwOSVersionInfoSize == 292 )
      {
        VersionInformation[1].dwOSVersionInfoSize &= 0xFFFDFFEF;
        VersionInformation[1].dwOSVersionInfoSize |= 0x100u;
      }
    }
  }
  return 0;
}
