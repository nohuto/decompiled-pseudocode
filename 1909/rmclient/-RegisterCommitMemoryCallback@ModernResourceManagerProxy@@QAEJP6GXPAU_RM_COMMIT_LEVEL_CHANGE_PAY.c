/*
 * XREFs of ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QAEJP6GXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6GX_K2@Z@Z @ 0x10008370
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ @ 0x10008F50 (-RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ.c)
 */

int __thiscall ModernResourceManagerProxy::RegisterCommitMemoryCallback(
        ModernResourceManagerProxy *this,
        void (__stdcall *a2)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *),
        void (__stdcall *a3)(unsigned __int64, unsigned __int64))
{
  char *v4; // edi
  int v5; // ebx

  v4 = (char *)this + 72;
  RtlAcquireSRWLockExclusive((char *)this + 72);
  *((_DWORD *)v4 + 1) = GetCurrentThreadId();
  if ( *((_DWORD *)this + 3) || *((_DWORD *)this + 4) )
  {
    v5 = -2147483635;
    goto LABEL_7;
  }
  *((_DWORD *)this + 3) = Windows::System::CMemoryManager::OnCommitLevelChangeRoutine;
  *((_DWORD *)this + 4) = Windows::System::CMemoryManager::OnCommitLimitChangeRoutine;
  v5 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v5 < 0 )
  {
LABEL_7:
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 4) = 0;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_5:
  *((_DWORD *)v4 + 1) = 0;
  RtlReleaseSRWLockExclusive(v4);
  return v5;
}
