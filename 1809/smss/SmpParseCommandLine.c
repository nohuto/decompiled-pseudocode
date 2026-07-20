/*
 * XREFs of SmpParseCommandLine @ 0x140001900
 * Callers:
 *     SmpExecuteCommand @ 0x1400017E8 (SmpExecuteCommand.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A9B4 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000B460 (SmpCreatePagingFileDescriptor.c)
 * Callees:
 *     SmpParseToken @ 0x140001CC0 (SmpParseToken.c)
 *     SmpExpandEnvironmentString @ 0x140001E2C (SmpExpandEnvironmentString.c)
 *     SmpQueryEnvVariable @ 0x140002240 (SmpQueryEnvVariable.c)
 *     RtlStringCbPrintfW @ 0x140004FA0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

__int64 __fastcall SmpParseCommandLine(
        __int128 *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *DestinationString)
{
  ULONG v7; // r12d
  NTSTATUS v10; // edi
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rcx
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  PWSTR PartName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  WCHAR pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v18 = L"Path";
  v17 = 655368;
  PartName = 0LL;
  v7 = 0;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  v19 = *a1;
  v10 = SmpParseToken(&v19, 0LL, &String1);
  if ( v10 < 0 )
    return 3221225473LL;
  while ( 1 )
  {
    if ( !String1.Buffer )
      return 3221225473LL;
    if ( !a2 )
    {
      v10 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s");
      goto LABEL_35;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
    {
      *a2 |= 1u;
      goto LABEL_14;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpASyncKeyword, 1u) )
    {
      *a2 |= 2u;
      goto LABEL_14;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpSecureKeyword, 1u) )
    {
      *a2 |= 0x8000u;
      goto LABEL_14;
    }
    if ( !RtlEqualUnicodeString(&String1, &SmpAutoChkKeyword, 1u) )
      break;
    if ( !SmpPrimarySmss )
      return 3221225485LL;
    if ( SmpHostSmss )
      *a2 |= 4u;
LABEL_14:
    RtlFreeUnicodeString(&String1);
    v10 = SmpParseToken(&v19, 0LL, &String1);
    if ( v10 < 0 )
      return 3221225473LL;
  }
  if ( (*a2 & 0x400) != 0 )
  {
    *a3 = String1;
LABEL_44:
    LOBYTE(v11) = 1;
    v10 = SmpParseToken(&v19, v11, DestinationString);
    if ( v10 < 0 )
      goto LABEL_50;
    if ( a2 && (*(_BYTE *)a2 & 8) != 0 && DestinationString->Length )
      v10 = SmpExpandEnvironmentString(DestinationString);
    if ( v10 < 0 )
      goto LABEL_50;
    return (unsigned int)v10;
  }
  if ( (*a2 & 8) == 0 || (result = SmpExpandEnvironmentString(&String1), v10 = result, (int)result >= 0) )
  {
    if ( RtlCompareUnicodeString(&SmpS0InitCmd, &String1, 0) && RtlCompareUnicodeString(&SmscpDefaultCmd, &String1, 0) )
    {
      RtlInitUnicodeString(&v16, 0LL);
      v10 = SmpQueryEnvVariable(v13, &v17, &v16);
      if ( v10 >= 0 )
        v7 = RtlDosSearchPath_U(v16.Buffer, String1.Buffer, L".exe", 0x208u, pszDest, &PartName);
      if ( v16.Buffer )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16.Buffer);
    }
    if ( v10 >= 0
      && !v7
      && !RtlDosSearchPath_U(SmpDefaultLibPath.Buffer, String1.Buffer, L".exe", 0x208u, pszDest, &PartName) )
    {
      *a2 |= 0x10u;
      *a3 = String1;
      if ( a4 )
        RtlInitUnicodeString(a4, 0LL);
      return 0LL;
    }
LABEL_35:
    RtlFreeUnicodeString(&String1);
    if ( v10 >= 0 )
    {
      if ( !RtlDosPathNameToNtPathName_U(pszDest, a3, 0LL, 0LL) )
        return 3221225529LL;
      if ( a4 )
      {
        if ( PartName > pszDest )
        {
          *--PartName = 0;
          if ( RtlCreateUnicodeString(a4, pszDest) == 1 )
            goto LABEL_44;
          v10 = -1073741823;
        }
        RtlInitUnicodeString(a4, 0LL);
      }
      if ( v10 >= 0 )
        goto LABEL_44;
LABEL_50:
      RtlFreeUnicodeString(a3);
      if ( a4 )
        RtlFreeUnicodeString(a4);
    }
    return (unsigned int)v10;
  }
  return result;
}
