/*
 * XREFs of ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1802559DC
 * Callers:
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180255AC4 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z @ 0x1802562D0 (-v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_97e2a103e92dae5e44607efe818b9179___ @ 0x180254180 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_97e2a103e92dae5e44607efe818b9179.c)
 *     ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x180255480 (-EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ.c)
 */

__int64 __fastcall WindowingEnvironmentManager::ResetWindowingEnvironments(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  WindowingEnvironmentManager::EnsureLockHeldExclusive(this + 18);
  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_97e2a103e92dae5e44607efe818b9179___(
         v3,
         CurrentThreadId,
         &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      295LL,
      (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return 0LL;
}
