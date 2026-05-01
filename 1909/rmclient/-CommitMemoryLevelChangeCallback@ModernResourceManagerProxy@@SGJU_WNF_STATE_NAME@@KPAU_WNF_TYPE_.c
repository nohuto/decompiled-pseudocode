/*
 * XREFs of ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x10007800
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CGXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x10007860 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CGXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall ModernResourceManagerProxy::CommitMemoryLevelChangeCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a5,
        unsigned int a6)
{
  void (__stdcall *v6)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // edi

  if ( a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 18);
    a4[19] = GetCurrentThreadId();
    v6 = (void (__stdcall *)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *))a4[3];
    a4[19] = 0;
    RtlReleaseSRWLockExclusive(a4 + 18);
    if ( v6 )
    {
      if ( v6 == Windows::System::CMemoryManager::OnCommitLevelChangeRoutine )
        Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(a5);
      else
        ((void (__thiscall *)(void (__stdcall *)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *), struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *))v6)(
          v6,
          a5);
    }
  }
  return 0;
}
