/*
 * XREFs of ?ShouldLockAutoRotation@CAppLayout@@UEAAHXZ @ 0x1803BBB10
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1803BC8E0 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayout::ShouldLockAutoRotation(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v3);
  LODWORD(v1) = (unsigned int)CAppLayout::_GetItemCountOfType(&v1[-5], 5LL) > 1;
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v3);
  return (unsigned int)v1;
}
