/*
 * XREFs of ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1803BB140
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1803BC128 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1803BC274 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 */

__int64 __fastcall CAppLayout::IsCurated(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  CAppLayout *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v8);
  v4 = (CAppLayout *)&this[-5];
  if ( a2 )
    v5 = CAppLayout::_AreAdjacentItemsCurated(v4, a2);
  else
    v5 = CAppLayout::_AreAllItemsCurated(v4);
  v6 = v5;
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v8);
  return v6;
}
