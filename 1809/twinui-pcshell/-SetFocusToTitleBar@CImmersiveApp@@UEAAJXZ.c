/*
 * XREFs of ?SetFocusToTitleBar@CImmersiveApp@@UEAAJXZ @ 0x18011FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180113574 (--$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@-$ComPtr@UIApplicationFrame.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::SetFocusToTitleBar(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK v11; // [rsp+50h] [rbp+18h]

  v9 = 0LL;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v3 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 496LL))((char *)this + 16, &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IApplicationFrameProxy>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
           &v9,
           &v10);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v4 = 0;
        goto LABEL_12;
      }
      v6 = 2648LL;
    }
    else
    {
      v6 = 2647LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v5);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA53,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v3);
  if ( v2 )
    ReleaseSRWLockShared(v2);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v4;
}
