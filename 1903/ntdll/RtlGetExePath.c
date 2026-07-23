/*
 * XREFs of RtlGetExePath @ 0x180080DA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 *     wcschr @ 0x1800922E0 (wcschr.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  _BOOL8 v3; // r8
  __int64 v4; // rax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+18h] BYREF

  v3 = !wcschr(DosPathName, 0x5Cu)
    && RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &ReturnLength) != -1073741568;
  v4 = sub_1800321F8((__int64 *)&unk_180164370, (__int64 (__fastcall *)(__int64, __int64))sub_18006B910, v3, 0LL);
  if ( v4 )
  {
    *SearchPathA = (PWSTR)(v4 + 112);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
