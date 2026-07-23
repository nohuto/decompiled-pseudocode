/*
 * XREFs of RtlGetExePath @ 0x180081440
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     RtlpGetCachedPath @ 0x1800321F8 (RtlpGetCachedPath.c)
 *     wcschr @ 0x180092980 (wcschr.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  _BOOL8 v3; // r8
  __int64 CachedPath; // rax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+18h] BYREF

  v3 = !wcschr(DosPathName, 0x5Cu)
    && RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &ReturnLength) != -1073741568;
  CachedPath = RtlpGetCachedPath(
                 (__int64 *)&RtlpExeSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeExePath,
                 v3,
                 0LL);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 112);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
