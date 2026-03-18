/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18007B0E0
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B700 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005D0C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007E5F0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180083600 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180085370 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802544A0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180078748 (--0CTreeData@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18007B364 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  struct CTreeData *UnusedTreeData; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 i; // rcx
  _QWORD **v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  CTreeData *v15; // rax
  __int64 v16; // rcx
  void **v17; // rax
  _QWORD *v18; // rcx
  _DWORD *v19; // r10
  __int64 v20; // rcx
  unsigned int Slot; // eax
  __int64 v22; // r10

  UnusedTreeData = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    UnusedTreeData = (CVisual *)((char *)this + 328);
  }
  else
  {
    v8 = *((_QWORD *)this + 28);
    if ( *(int *)v8 >= 0 )
      goto LABEL_14;
    v9 = *(unsigned int *)(v8 + 4);
    v10 = (_BYTE *)(v8 + 8);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; ++v10 )
    {
      if ( *v10 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v9 )
      v12 = 0LL;
    else
      v12 = (_QWORD **)(v9 + 15 + v8 + 8 * i - (((_BYTE)v9 + 15) & 7));
    v13 = *v12;
    if ( v13 )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v13 )
      {
        while ( (const struct CVisualTree *)v14[4] != a2 )
        {
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            goto LABEL_3;
        }
        UnusedTreeData = (struct CTreeData *)(v14 - 28);
      }
    }
  }
LABEL_3:
  if ( UnusedTreeData )
  {
LABEL_4:
    *a3 = UnusedTreeData;
    return 0LL;
  }
LABEL_14:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    v19 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v19 & 0x4000000) != 0 )
    {
      v20 = *((_QWORD *)this + 28);
      *v19 &= ~0x4000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v20, 6LL);
      if ( Slot < *(_DWORD *)(v22 + 4) )
        *(_BYTE *)(Slot + v22 + 8) = 0;
    }
    v17 = *(void ***)UnusedTreeData;
    goto LABEL_17;
  }
  v15 = (CTreeData *)operator new(0x108uLL);
  UnusedTreeData = v15;
  if ( v15 )
  {
    CTreeData::CTreeData(v15);
    v17 = &CVisualTreeData::`vftable';
    v18[32] = 0LL;
    *v18 = &CVisualTreeData::`vftable';
LABEL_17:
    ((void (__fastcall *)(struct CTreeData *, const struct CVisualTree *, CVisual *))v17[1])(UnusedTreeData, a2, this);
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x157Du, 0LL);
  return 2147942414LL;
}
