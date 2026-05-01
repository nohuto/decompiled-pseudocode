/*
 * XREFs of ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18019CF60
 * Callers:
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18019E6F0 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18019F6F4 (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::EnsureForegroundRights(CortanaSharedExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CortanaSharedExperienceManager::_AllowForegroundRights(this);
  if ( v2 < 0 )
  {
    v3 = 372LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 112LL))(*((_QWORD *)this + 63));
  if ( v2 < 0 )
  {
    v3 = 373LL;
    goto LABEL_3;
  }
  return 0LL;
}
