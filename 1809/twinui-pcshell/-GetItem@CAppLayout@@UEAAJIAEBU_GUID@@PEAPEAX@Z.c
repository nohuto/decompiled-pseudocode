/*
 * XREFs of ?GetItem@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803BAB40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803BACF0 (-GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::GetItem(RTL_SRWLOCK *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v9);
  LODWORD(v5) = CAppLayout::GetItemInternal((CAppLayout *)&v5[-1], a2, a3, a4);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v9);
  return (unsigned int)v5;
}
