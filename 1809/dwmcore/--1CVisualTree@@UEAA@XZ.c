/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x18008BAC8
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x18008B860 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18008B8A0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v2; // r10
  _DWORD *v3; // r10
  unsigned int Slot; // eax
  __int64 v5; // r10
  __int64 v6; // rcx
  unsigned int v7; // edx

  *(_QWORD *)this = &CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas(this);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *(_DWORD **)(v2 + 224);
    if ( (*v3 & 0x2000000) != 0 )
    {
      *v3 &= ~0x2000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 7);
      if ( Slot < *(_DWORD *)(v5 + 4) )
        *(_BYTE *)(Slot + v5 + 8) = 0;
    }
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1248);
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 64), v7);
}
