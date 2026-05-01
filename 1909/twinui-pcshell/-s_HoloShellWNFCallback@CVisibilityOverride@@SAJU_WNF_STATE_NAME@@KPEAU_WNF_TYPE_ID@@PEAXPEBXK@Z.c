/*
 * XREFs of ?s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180142320
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x1801420FC (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_HoloShellWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        RTL_SRWLOCK *a4,
        int *a5,
        unsigned int a6)
{
  char v7; // bl
  int v8; // esi

  v7 = 0;
  if ( !a5 || a6 != 4 )
    return 2147549183LL;
  v8 = *a5;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK **)&a5, a4 + 9);
  if ( !v8 || v8 == 5 )
    v7 = 1;
  LOBYTE(a4[11].Ptr) = v7;
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)a4);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&a5);
  return 0LL;
}
