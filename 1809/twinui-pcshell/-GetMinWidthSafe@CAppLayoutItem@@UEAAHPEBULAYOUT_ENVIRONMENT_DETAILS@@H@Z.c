/*
 * XREFs of ?GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1803BD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1803BDA80 (-_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 */

__int64 __fastcall CAppLayoutItem::GetMinWidthSafe(
        RTL_SRWLOCK *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        int a3)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 3, &v7);
  LODWORD(v4) = CAppLayoutItem::_GetMinWidthSafe((CAppLayoutItem *)&v4[-1], a2, a3);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v7);
  return (unsigned int)v4;
}
