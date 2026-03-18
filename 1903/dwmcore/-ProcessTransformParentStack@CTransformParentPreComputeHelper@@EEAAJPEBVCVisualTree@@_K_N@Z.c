/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004C20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180005EEC (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800063A4 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180006454 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007DB20 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007FEEC (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x180088200 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x180088484 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18008A868 (--0CTreeData@@IEAA@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x180255B48 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  int updated; // r12d
  const struct CVisualTree *v5; // rbp
  int v7; // ecx
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rbx
  bool v12; // r13
  struct CTreeData *UnusedTreeData; // rdi
  _DWORD *v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  __int64 v25; // rax
  float v26; // xmm3_4
  float v27; // xmm4_4
  __int64 v28; // rax
  float v29; // xmm0_4
  float v30; // xmm1_4
  bool v31; // r14
  char v32; // bp
  int v33; // edx
  int *v34; // rcx
  __int64 v36; // rax
  _BYTE *v37; // rdx
  __int64 i; // rcx
  _QWORD **v39; // rcx
  _QWORD *v40; // rcx
  unsigned int v41; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v44; // rax
  CTreeData *v45; // rax
  unsigned int v46; // ecx
  void **v47; // rax
  _QWORD *v48; // rcx
  _DWORD *v49; // r10
  __int64 v50; // rcx
  unsigned int Slot; // eax
  __int64 v52; // r10
  CVisual *TransformParentNoRef; // rax
  int v54; // eax
  unsigned int v55; // ecx
  __int64 ProjectedShadowCasters; // rax
  __int64 v57; // rbp
  CProjectedShadowCaster **v58; // r14
  unsigned __int64 v59; // rbx
  int v60; // edx
  int *v61; // rcx
  unsigned int v62; // ecx
  const struct CTreeData *v63; // [rsp+30h] [rbp-A8h]
  float v64[6]; // [rsp+38h] [rbp-A0h]
  struct CTreeData *v65; // [rsp+E0h] [rbp+8h] BYREF
  const struct CVisualTree *v66; // [rsp+E8h] [rbp+10h]
  __int64 v67; // [rsp+F0h] [rbp+18h]
  char v68; // [rsp+F8h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v66 = a2;
  updated = 0;
  v5 = a2;
  v65 = 0LL;
  v7 = *((_DWORD *)this + 2);
  v8 = 1LL;
  v63 = 0LL;
  v9 = 0LL;
  v10 = a4;
  v11 = 0LL;
  if ( v7 )
  {
    *((_DWORD *)this + 2) = v7 - 1;
    v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(v7 - 1));
    v9 = v11;
  }
  if ( v9 == *((_QWORD *)a2 + 3) )
  {
    while ( 1 )
    {
LABEL_4:
      v12 = 0;
      UnusedTreeData = 0LL;
      if ( *((_BYTE *)v5 + 32) )
      {
        UnusedTreeData = (struct CTreeData *)(v11 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v11);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != v5 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_6;
            }
            UnusedTreeData = (struct CTreeData *)&Flink[-14];
          }
        }
      }
LABEL_6:
      if ( !UnusedTreeData )
      {
        UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v11);
        if ( UnusedTreeData )
        {
          v49 = *(_DWORD **)(v11 + 224);
          if ( (*v49 & 0x4000000) != 0 )
          {
            v50 = *(_QWORD *)(v11 + 224);
            *v49 &= ~0x4000000u;
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v50, 6LL);
            if ( Slot < *(_DWORD *)(v52 + 4) )
              *(_BYTE *)(Slot + v52 + 8) = 0;
          }
          v47 = *(void ***)UnusedTreeData;
        }
        else
        {
          v45 = (CTreeData *)operator new(0x108uLL);
          UnusedTreeData = v45;
          if ( !v45 )
          {
            updated = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, -2147024882, 0x157Du, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, -2147024882, 0xE6u, 0LL);
            goto LABEL_34;
          }
          CTreeData::CTreeData(v45);
          v47 = &CVisualTreeData::`vftable';
          v48[32] = 0LL;
          *v48 = &CVisualTreeData::`vftable';
        }
        ((void (__fastcall *)(struct CTreeData *, const struct CVisualTree *, __int64))v47[1])(UnusedTreeData, v5, v11);
      }
      v14 = *(_DWORD **)(v11 + 224);
      if ( (*v14 & 0x800000) != 0 )
      {
        v36 = (unsigned int)v14[1];
        v37 = v14 + 2;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v36; ++v37 )
        {
          if ( *v37 == 9 )
            break;
          i = (unsigned int)(i + 1);
        }
        if ( (unsigned int)i >= (unsigned int)v36 )
          v39 = 0LL;
        else
          v39 = (_QWORD **)((char *)v14 + 8 * i - (((_BYTE)v36 + 15) & 7) + v36 + 15);
        v40 = *v39;
        if ( v40 && (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 192LL))(*v40) )
        {
          *((_BYTE *)UnusedTreeData + 16) &= ~8u;
          v12 = (*((_BYTE *)UnusedTreeData + 16) & 4) == 0 || *((_QWORD *)UnusedTreeData + 27) != v67;
        }
      }
      v15 = *(_QWORD *)(v11 + 80);
      if ( !v15 || (*(_BYTE *)(v15 + 88) & 1) != 0 )
      {
        v19 = *(float *)(v11 + 116);
        v20 = 0.0;
        v21 = *(float *)(v11 + 120);
        v22 = 0.0;
        v23 = *(float *)(v11 + 132);
        v24 = *(float *)(v11 + 136);
        if ( v15 )
        {
          v20 = *(float *)(v15 + 132);
          v22 = *(float *)(v15 + 136);
        }
        v25 = *(_QWORD *)(v11 + 216);
        if ( (*(_DWORD *)(v25 + 4) & 0x10000000) != 0 )
        {
          v60 = *(_DWORD *)(v25 + 12);
          v61 = (int *)(v25 + 12);
          if ( (v60 & 0x7F000000) != 0x4000000 )
          {
            do
            {
              v61 = (int *)((char *)v61 + (v60 & 0xFFFFFF) + 4);
              v60 = *v61;
            }
            while ( (*v61 & 0x7F000000) != 0x4000000 );
          }
          *(_QWORD *)v64 = *(_QWORD *)(v61 + 1);
        }
        else
        {
          *(_QWORD *)v64 = 0LL;
        }
        v26 = (float)(v64[0] * v20) + *(float *)(v11 + 104);
        v27 = (float)(v64[1] * v22) + *(float *)(v11 + 108);
        *(float *)(v11 + 116) = v26;
        *(float *)(v11 + 120) = v27;
        v28 = *(_QWORD *)(v11 + 216);
        if ( (*(_DWORD *)(v28 + 4) & 0x20000000) != 0 )
        {
          v33 = *(_DWORD *)(v28 + 12);
          v34 = (int *)(v28 + 12);
          if ( (v33 & 0x7F000000) != 0x3000000 )
          {
            do
            {
              v34 = (int *)((char *)v34 + (v33 & 0xFFFFFF) + 4);
              v33 = *v34;
            }
            while ( (*v34 & 0x7F000000) != 0x3000000 );
          }
          v65 = *(struct CTreeData **)(v34 + 1);
        }
        else
        {
          v65 = 0LL;
        }
        v29 = (float)(*(float *)&v65 * v20) + *(float *)(v11 + 124);
        v30 = (float)(*((float *)&v65 + 1) * v22) + *(float *)(v11 + 128);
        *(float *)(v11 + 136) = v30;
        *(float *)(v11 + 132) = v29;
        if ( v29 < 0.0 )
        {
          v29 = 0.0;
          *(_DWORD *)(v11 + 132) = 0;
        }
        if ( v30 < 0.0 )
        {
          v30 = 0.0;
          *(_DWORD *)(v11 + 136) = 0;
        }
        v31 = v19 != v26 || v21 != v27;
        if ( v23 == v29 && v24 == v30 )
        {
          v32 = 0;
        }
        else
        {
          v44 = *(_QWORD *)(v11 + 248);
          v32 = 1;
          if ( v44 && *(_BYTE *)(v44 + 128) )
            CVisual::OnClipChanged((CVisual *)v11);
          CVisual::OnLayoutChanged((CVisual *)v11);
        }
        if ( v31 || v32 )
          *(_DWORD *)(v11 + 88) |= 1u;
        v10 = v68;
        v5 = v66;
      }
      v16 = *((_QWORD *)UnusedTreeData + 15);
      if ( v16 < v8 )
      {
        updated = CVisual::UpdateWorldTransform((CVisual *)v11, v5, UnusedTreeData, v12, v63);
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, updated, 0xF9u, 0LL);
          goto LABEL_34;
        }
        if ( !v10 && (CVisual::PropagateFlags(v11, 5LL), (**(_DWORD **)(v11 + 224) & 0x20000) != 0) )
        {
          ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v11);
          v57 = 0LL;
          v58 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
          v59 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
          if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
            v59 = 0LL;
          if ( v59 )
          {
            do
            {
              CProjectedShadowCaster::RequestRedraw(*v58++);
              ++v57;
            }
            while ( v57 != v59 );
          }
          v5 = v66;
          v10 = v68;
          *((_QWORD *)UnusedTreeData + 22) = 0LL;
          v16 = *((_QWORD *)UnusedTreeData + 15);
        }
        else
        {
          *((_QWORD *)UnusedTreeData + 22) = 0LL;
          v16 = *((_QWORD *)UnusedTreeData + 15);
        }
      }
      v8 = v16;
      v63 = UnusedTreeData;
      v17 = *((_DWORD *)this + 2);
      if ( !v17 )
        goto LABEL_34;
      v18 = v17 - 1;
      *((_DWORD *)this + 2) = v18;
      updated = 0;
      v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v18);
    }
  }
  TransformParentNoRef = CVisual::GetTransformParentNoRef((CVisual *)v11);
  if ( !TransformParentNoRef )
    TransformParentNoRef = *(CVisual **)(v11 + 80);
  v54 = CVisual::EnsureTreeData(TransformParentNoRef, v5, &v65);
  updated = v54;
  if ( v54 >= 0 )
  {
    updated = 0;
    v63 = v65;
    v8 = *((_QWORD *)v65 + 15);
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0xD7u, 0LL);
LABEL_34:
  if ( updated < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, v5);
  return (unsigned int)updated;
}
