/*
 * XREFs of ?GetViewData@CAppLayoutItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1803BD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

void __fastcall CAppLayoutItem::GetViewData(RTL_SRWLOCK *this, struct APPLICATION_VIEW_DATA *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 3, &v4);
  (*((void (__fastcall **)(RTL_SRWLOCK *, struct APPLICATION_VIEW_DATA *))this[-1].Ptr + 6))(this - 1, a2);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v4);
}
