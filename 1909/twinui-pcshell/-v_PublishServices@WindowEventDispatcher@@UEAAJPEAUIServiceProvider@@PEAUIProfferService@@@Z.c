/*
 * XREFs of ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802A2130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180082D38 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F8E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013FB90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180428438 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804284AC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::v_PublishServices(
        WindowEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  CCriticalFailureHandler *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int SiHostProcessHandle; // eax
  const char *v11; // r9
  __int64 result; // rax
  unsigned __int64 *v13; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 21);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v16 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, &v16);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v16;
    }
    if ( v5 < 0 && v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        &v16,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0xFAu,
        v13,
        v14);
      v5 = v16;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        251LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 42,
      0LL);
    wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService(v8, v7, v9);
    SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 42);
    if ( SiHostProcessHandle < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        261LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)SiHostProcessHandle);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x109,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
