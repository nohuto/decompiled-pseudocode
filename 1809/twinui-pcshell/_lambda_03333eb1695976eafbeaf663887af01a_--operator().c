/*
 * XREFs of _lambda_03333eb1695976eafbeaf663887af01a_::operator() @ 0x1801D5FF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03333eb1695976eafbeaf663887af01a___::Run @ 0x1801E47A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_03333eb1695976eafbeaf663887af01a___--Run.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DC98C (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 *     ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x1803B7434 (-IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_03333eb1695976eafbeaf663887af01a_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  const unsigned __int16 *v3; // rdx
  bool v4; // al
  const WCHAR *lpVerb; // rcx
  SHELLEXECUTEINFOW *p_pExecInfo; // rcx
  const char *v7; // r9
  __int64 result; // rax
  LPITEMIDLIST ppidl; // [rsp+28h] [rbp-90h] BYREF
  char v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+38h] [rbp-80h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+40h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  LPITEMIDLIST pv; // [rsp+C0h] [rbp+8h]
  HINSTANCE v15; // [rsp+C8h] [rbp+10h] BYREF

  v11 = -2LL;
  pv = 0LL;
  ppidl = 0LL;
  v10 = 1;
  v2 = SHGetIDListFromObject(*(IUnknown **)(a1 + 32), &ppidl);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        187LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
    if ( v10 && ppidl )
      pv = ppidl;
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.fMask = 67109900;
    pExecInfo.lpIDList = pv;
    pExecInfo.lpParameters = *(LPCWSTR *)(a1 + 8);
    if ( *(_BYTE *)a1 )
    {
      v4 = IsVerbRegistered(*(struct IShellItem **)(a1 + 32), v3);
      lpVerb = L"OpenNewWindow";
      if ( !v4 )
        lpVerb = pExecInfo.lpVerb;
      pExecInfo.lpVerb = lpVerb;
    }
    GetLaunchOptionSite(&v15, a1 + 16);
    p_pExecInfo = &pExecInfo;
    if ( v15 )
    {
      pExecInfo.fMask |= 0x8000000u;
      pExecInfo.hInstApp = v15;
      if ( ShellExecuteExW(&pExecInfo) )
      {
LABEL_16:
        if ( v15 )
          (*(void (__fastcall **)(HINSTANCE))(*(_QWORD *)v15 + 16LL))(v15);
        if ( pv )
          CoTaskMemFree(pv);
        return 0LL;
      }
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xCC,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        v7);
    }
    if ( !ShellExecuteExW(p_pExecInfo) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xD0,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        v7);
    goto LABEL_16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v7);
  }
  return result;
}
