/*
 * XREFs of ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18008C5A0
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18008C810 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18008C1EC (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18008C99C (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800DDD3C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CustomShellManager::IsCurrentProcessCustomShellHost(CustomShellManager *this)
{
  DWORD v1; // eax
  wil::details::in1diag3 *v2; // r9
  DWORD v3; // eax
  HANDLE CurrentProcess; // rax
  BOOL FullProcessImageNameW; // ebx
  const char *v6; // r9
  bool v8; // bl
  const char *v9; // r9
  LPWSTR lpExeName[3]; // [rsp+38h] [rbp-38h] BYREF
  LPWSTR lpDst[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  CustomShellManager *nSize; // [rsp+80h] [rbp+10h] BYREF

  nSize = this;
  v1 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", 0LL, 0);
  LODWORD(nSize) = v1;
  v2 = retaddr;
  if ( !v1 )
    goto LABEL_9;
  std::vector<unsigned short>::vector<unsigned short>((char **)lpDst, v1);
  v3 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", lpDst[0], (DWORD)nSize);
  if ( v3 > (unsigned int)nSize )
    goto LABEL_10;
  std::vector<unsigned short>::vector<unsigned short>((char **)lpExeName, (unsigned int)nSize);
  CurrentProcess = GetCurrentProcess();
  FullProcessImageNameW = QueryFullProcessImageNameW(CurrentProcess, 0, lpExeName[0], (PDWORD)&nSize);
  if ( !FullProcessImageNameW && GetLastError() == 122 )
  {
    std::vector<unsigned short>::_Tidy(lpExeName);
    std::vector<unsigned short>::_Tidy(lpDst);
    return 0;
  }
  if ( !FullProcessImageNameW )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x73,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      v6);
LABEL_9:
    wil::details::in1diag3::_Throw_GetLastError(
      v2,
      (void *)0x65,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)v2);
LABEL_10:
    v9 = (const char *)(unsigned int)wil::verify_hresult<long>(2147942522LL);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      106LL,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      v9);
    __debugbreak();
  }
  v8 = CompareStringOrdinal(lpExeName[0], -1, lpDst[0], -1, 1) == 2;
  std::vector<unsigned short>::_Tidy(lpExeName);
  std::vector<unsigned short>::_Tidy(lpDst);
  return v8;
}
