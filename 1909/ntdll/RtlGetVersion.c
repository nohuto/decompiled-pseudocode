/*
 * XREFs of RtlGetVersion @ 0x18002D230
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002D010 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlVerifyVersionInfo @ 0x180072CB0 (RtlVerifyVersionInfo.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800751E0 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x180016F74 (RtlStringCbCopyW.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     ZwQueryLicenseValue @ 0x18009F820 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  struct _PEB *v2; // rdi
  wchar_t *Buffer; // r8
  int v4; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+80h] [rbp+38h] BYREF
  char v8; // [rsp+88h] [rbp+40h] BYREF
  int v9; // [rsp+90h] [rbp+48h] BYREF
  int v10; // [rsp+98h] [rbp+50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v7 = 0;
  v2 = NtCurrentPeb();
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v4 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v4 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v8) )
      *((_BYTE *)a1 + 282) = v8;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v9, &v7, 4LL, &v10) < 0 || v7 != 1 || v9 != 4 || v10 != 4 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
