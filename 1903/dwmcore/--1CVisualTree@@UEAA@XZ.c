/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x1800C8040
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800C8000 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180088384 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  _QWORD *i; // rdi
  __int64 v3; // r10
  _DWORD *v4; // r10
  unsigned int Slot; // eax
  __int64 v6; // r10
  __int64 v7; // rcx

  *(_QWORD *)this = &CVisualTree::`vftable';
  for ( i = (_QWORD *)((char *)this + 64);
        (_QWORD *)*i != i;
        CVisual::ReleaseVisualTreeData(*(CVisual **)(*i - 216LL), (struct CVisualTreeData *)(*i - 240LL)) )
  {
    ;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 224);
    if ( (*v4 & 0x2000000) != 0 )
    {
      *v4 &= ~0x2000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v4, 7);
      if ( Slot < *(_DWORD *)(v6 + 4) )
        *(_BYTE *)(Slot + v6 + 8) = 0;
    }
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1280);
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 88));
}
