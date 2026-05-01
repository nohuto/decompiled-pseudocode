/*
 * XREFs of ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18022DA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180072BB0 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FAA4C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::v_PublishServices(
        WindowEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  CCriticalFailureHandler *v6; // rcx
  int SiHostProcessHandle; // eax
  const char *v8; // r9
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 23);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v13 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, &v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v13;
    }
    if ( v5 < 0 && v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        &v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0xEBu,
        v10,
        v11);
      v5 = v13;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        236LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 43,
      0LL);
    SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 43);
    if ( SiHostProcessHandle < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        239LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)SiHostProcessHandle);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF2,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
