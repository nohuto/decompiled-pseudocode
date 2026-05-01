/*
 * XREFs of ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800FCE30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x1800FCC5C (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_DXModeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        RTL_SRWLOCK *a4)
{
  RTL_SRWLOCK *v6; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v6, a4 + 9);
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)a4);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v6);
  return 0LL;
}
