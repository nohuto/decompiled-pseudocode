/*
 * XREFs of ?GetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1803BD340
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

void __fastcall CAppLayoutItem::GetRect(RTL_SRWLOCK *a1, unsigned int a2, struct tagRECT *a3)
{
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  SetRectEmpty(a3);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 3, &v6);
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, struct tagRECT *))a1[-1].Ptr + 5))(a1 - 1, a2, a3);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v6);
}
