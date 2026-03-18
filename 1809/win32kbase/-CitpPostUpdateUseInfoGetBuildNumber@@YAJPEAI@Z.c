/*
 * XREFs of ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C007894C
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077FD4 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01847F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoGetBuildNumber(unsigned int *a1)
{
  NTSTATUS Version; // eax
  const char *v3; // rdx
  unsigned int v4; // ebx
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  *a1 = 0;
  memset(&VersionInformation, 0, 0x11CuLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  v4 = Version;
  if ( Version < 0 )
  {
    CitpLogFailureWorker(Version, v3, 0x1332u);
  }
  else
  {
    v4 = 0;
    *a1 = VersionInformation.dwBuildNumber;
  }
  return v4;
}
