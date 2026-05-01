/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x180062BC0
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x180062BB0 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAAEAUForegroundSwitchData@Discover@PenWorkspace@@AEAU234@@Z @ 0x180097330 (--$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@-$deque@UForegroundSwitchData@D.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180104B8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  RTL_SRWLOCK *v9; // rbx
  const char *v10; // r9
  _DWORD v12[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12[0] = a2;
  v12[1] = a3;
  v12[2] = a8;
  v9 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  try
  {
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::emplace_back<PenWorkspace::Discover::ForegroundSwitchData &>(
      &this[13],
      v12);
    if ( !SetEvent(this[19].Ptr) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x8E6,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v10);
      JUMPOUT(0x180062C6DLL);
    }
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v10);
  }
  return 0LL;
}
