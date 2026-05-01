/*
 * XREFs of ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800C039C
 * Callers:
 *     ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800C0478 (--0-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008AC38 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BF574 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::immersive_shell_component::register_service_information<_GUID const>(__int64 a1)
{
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v3; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  _QWORD v6[3]; // [rsp+60h] [rbp-18h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  v3 = xmmword_1804A6918;
  v4 = 0LL;
  v5 = 0;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 80), SRWLock);
  std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
    (__int64 **)(a1 + 48),
    *(__int64 **)(a1 + 56),
    (__int64)&v3,
    (__int64)v6);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  `eh vector destructor iterator'(
    (char *)&v3,
    32LL,
    1LL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
}
