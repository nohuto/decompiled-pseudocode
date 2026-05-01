/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x18005C3D0
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x18005C3C0 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E24D8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x18019CB80 (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // r14
  _QWORD *Ptr; // rax
  __int64 v12; // rax
  const char *v13; // r9
  const char *v15; // r9
  unsigned __int64 v16; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v16 = __PAIR64__(a3, a2);
  v9 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  if ( this[15].Ptr <= (char *)this[17].Ptr + 1 )
  {
    try
    {
      std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(&this[13]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xA9,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        v15);
      return 0LL;
    }
  }
  this[16].Ptr = (PVOID)((__int64)this[16].Ptr & ((__int64)this[15].Ptr - 1));
  v10 = ((__int64)this[17].Ptr + (unsigned __int64)this[16].Ptr) & ((__int64)this[15].Ptr - 1);
  Ptr = this[14].Ptr;
  if ( !Ptr[v10] )
  {
    *((_QWORD *)this[14].Ptr + v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0xCuLL);
    Ptr = this[14].Ptr;
  }
  v12 = Ptr[v10];
  *(_QWORD *)v12 = v16;
  *(_DWORD *)(v12 + 8) = a8;
  ++this[17].Ptr;
  if ( !SetEvent(this[19].Ptr) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
      v13);
    JUMPOUT(0x1800CFA2BLL);
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return 0LL;
}
