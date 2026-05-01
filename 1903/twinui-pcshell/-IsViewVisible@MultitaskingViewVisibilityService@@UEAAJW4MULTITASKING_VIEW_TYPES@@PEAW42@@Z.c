/*
 * XREFs of ?IsViewVisible@MultitaskingViewVisibilityService@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAW42@@Z @ 0x180082290
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall MultitaskingViewVisibilityService::IsViewVisible(__int64 a1, int a2, int *a3)
{
  RTL_SRWLOCK *v6; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 56, &SRWLock);
  v6 = SRWLock;
  *a3 = a2 & *(_DWORD *)(a1 + 64);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
