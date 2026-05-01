/*
 * XREFs of ?GetType@CAppLayoutItem@@UEAA?AW4APP_LAYOUT_ITEM_TYPE@@XZ @ 0x1803BD3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayoutItem::GetType(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 3, &v3);
  LODWORD(v1) = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v1[-1].Ptr + 3))(v1 - 1);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v3);
  return (unsigned int)v1;
}
