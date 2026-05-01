/*
 * XREFs of ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x180255480
 * Callers:
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1802559DC (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall WindowingEnvironmentManager::EnsureLockHeldExclusive(RTL_SRWLOCK *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((unsigned __int64)&this[2] & -(__int64)(TryAcquireSRWLockShared(this + 2) != 0)) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      243LL,
      (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      v1);
    __debugbreak();
  }
}
