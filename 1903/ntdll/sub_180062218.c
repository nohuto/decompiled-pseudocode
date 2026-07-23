/*
 * XREFs of sub_180062218 @ 0x180062218
 * Callers:
 *     sub_1800624E0 @ 0x1800624E0 (sub_1800624E0.c)
 *     sub_1800CE6B0 @ 0x1800CE6B0 (sub_1800CE6B0.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlUnicodeStringToAnsiString @ 0x180062330 (RtlUnicodeStringToAnsiString.c)
 *     sub_1800625F4 @ 0x1800625F4 (sub_1800625F4.c)
 *     RtlWow64GetProcessMachines @ 0x180078240 (RtlWow64GetProcessMachines.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180085FA0 (RtlReplaceSystemDirectoryInPath.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008E310 (_wcsnicmp.c)
 */

NTSTATUS __fastcall sub_180062218(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  USHORT v4; // bx
  NTSTATUS result; // eax
  CHAR *v9; // rcx
  const wchar_t *NtSystemRoot; // rax
  __int64 v11; // rcx
  size_t v12; // rdi
  __int64 v13; // rcx
  USHORT ProcessMachine[8]; // [rsp+20h] [rbp-E0h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = sub_1800625F4(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result >= 0 )
  {
    String1[256] = 0;
    if ( !a4 )
      goto LABEL_5;
    NtSystemRoot = RtlGetNtSystemRoot();
    v11 = -1LL;
    do
      ++v11;
    while ( NtSystemRoot[v11] );
    if ( !v11 )
      return -1073741595;
    v12 = v11 - 1;
    if ( NtSystemRoot[v11 - 1] != 92 )
      v12 = v11;
    if ( wcsnicmp(String1, NtSystemRoot, v12) || wcsnicmp(&String1[v12], L"\\system32", 9uLL) )
      goto LABEL_5;
    if ( v12 + 16 >= 0x101 )
      return -1073741595;
    v13 = *a1;
    if ( !*a1 )
      v13 = -1LL;
    if ( RtlWow64GetProcessMachines((HANDLE)v13, ProcessMachine, 0LL) >= 0
      && (SourceString.Buffer = String1,
          SourceString.MaximumLength = v4,
          SourceString.Length = v4,
          *(_DWORD *)(&DestinationString.MaximumLength + 1) = *(_DWORD *)(&SourceString.MaximumLength + 1),
          DestinationString.Buffer = (PCHAR)&String1[v12],
          DestinationString.Length = -2 * v12 + v4,
          DestinationString.MaximumLength = DestinationString.Length,
          (RtlReplaceSystemDirectoryInPath((PUNICODE_STRING)&DestinationString, 1u, ProcessMachine[0], 0) & 0x80000000) == 0) )
    {
LABEL_5:
      SourceString.MaximumLength = v4;
      SourceString.Buffer = String1;
      SourceString.Length = v4;
      DestinationString.Buffer = (PCHAR)(a3 + 40);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( result >= 0 )
      {
        v9 = &DestinationString.Buffer[DestinationString.Length];
        while ( v9 > DestinationString.Buffer )
        {
          if ( *--v9 == 92 )
          {
            LOWORD(v9) = (_WORD)v9 + 1;
            break;
          }
        }
        *(_WORD *)(a3 + 38) = (_WORD)v9 - LOWORD(DestinationString.Buffer);
        return 0;
      }
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
