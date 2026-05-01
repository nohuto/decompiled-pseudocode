/*
 * XREFs of ?GetItemCountOfType@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1803BABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1803BC8E0 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayout::GetItemCountOfType(RTL_SRWLOCK *a1, unsigned int a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 2, &v5);
  LODWORD(v3) = CAppLayout::_GetItemCountOfType(&v3[-5], a2);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v5);
  return (unsigned int)v3;
}
