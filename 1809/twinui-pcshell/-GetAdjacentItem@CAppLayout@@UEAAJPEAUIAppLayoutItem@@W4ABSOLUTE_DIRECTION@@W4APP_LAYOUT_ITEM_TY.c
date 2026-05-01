/*
 * XREFs of ?GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BAAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BC7EC (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 */

__int64 __fastcall CAppLayout::GetAdjacentItem(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 2, &v11);
  LODWORD(v7) = CAppLayout::_GetAdjacentItem(&v7[-5], a2, a3, a4, a5, a6);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v11);
  return (unsigned int)v7;
}
