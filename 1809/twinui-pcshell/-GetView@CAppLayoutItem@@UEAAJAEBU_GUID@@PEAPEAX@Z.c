/*
 * XREFs of ?GetView@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BD430
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayoutItem::GetView(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 3, &v7);
  LODWORD(v4) = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, void **))v4[-1].Ptr + 4))(
                  v4 - 1,
                  a2,
                  a3);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v7);
  return (unsigned int)v4;
}
