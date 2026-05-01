/*
 * XREFs of ?FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1803BA8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1803BC724 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 */

__int64 __fastcall CAppLayout::FindBufferItem(RTL_SRWLOCK *this, struct IAppLayoutItem **a2, unsigned int *a3)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v7);
  LODWORD(v4) = CAppLayout::_FindBufferItem((CAppLayout *)&v4[-5], a2, a3);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v7);
  return (unsigned int)v4;
}
