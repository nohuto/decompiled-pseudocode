/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180004250 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x180021A6C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180021B34 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?DirtyProjectedShadowReceivers@CVisual@@AEAAXXZ @ 0x1800664B0 (-DirtyProjectedShadowReceivers@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x180225990 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  const struct CVisualTree *v4; // rbp
  __int64 v5; // rbx
  int v7; // ecx
  __int64 v8; // rax
  char v9; // r14
  unsigned __int64 v10; // r15
  bool v11; // r13
  struct CTreeData *UnusedTreeData; // rdi
  _DWORD *v13; // r8
  int v14; // r12d
  __int64 v15; // rax
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  bool v28; // r14
  char v29; // bp
  unsigned __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // edx
  int *v34; // rcx
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 i; // rcx
  _QWORD **v38; // rcx
  _QWORD *v39; // rcx
  int updated; // eax
  unsigned int v42; // ecx
  CVisual *TransformParentNoRef; // rax
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CTreeData *v49; // rax
  unsigned int v50; // ecx
  void **v51; // rax
  _QWORD *v52; // rcx
  _DWORD *v53; // r10
  __int64 v54; // rcx
  unsigned int Slot; // eax
  __int64 v56; // r10
  int v57; // r8d
  int *v58; // rdx
  unsigned int v59; // ecx
  const struct CTreeData *v60; // [rsp+30h] [rbp-A8h]
  float v61[6]; // [rsp+38h] [rbp-A0h]
  struct CTreeData *v62; // [rsp+E0h] [rbp+8h] BYREF
  const struct CVisualTree *v63; // [rsp+E8h] [rbp+10h]
  __int64 v64; // [rsp+F0h] [rbp+18h]
  char v65; // [rsp+F8h] [rbp+20h]

  v65 = a4;
  v64 = a3;
  v63 = a2;
  v4 = a2;
  v5 = 0LL;
  v62 = 0LL;
  v7 = *((_DWORD *)this + 2);
  v8 = 0LL;
  v60 = 0LL;
  v9 = a4;
  v10 = 1LL;
  if ( v7 )
  {
    *((_DWORD *)this + 2) = v7 - 1;
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(v7 - 1));
    v8 = v5;
  }
  if ( v8 == *((_QWORD *)a2 + 3) )
  {
    while ( 1 )
    {
LABEL_4:
      v11 = 0;
      UnusedTreeData = 0LL;
      if ( *((_BYTE *)v4 + 32) )
      {
        UnusedTreeData = (struct CTreeData *)(v5 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != v4 )
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
        UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v5);
        if ( UnusedTreeData )
        {
          v53 = *(_DWORD **)(v5 + 224);
          if ( (*v53 & 0x4000000) != 0 )
          {
            v54 = *(_QWORD *)(v5 + 224);
            *v53 &= ~0x4000000u;
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v54, 6LL);
            if ( Slot < *(_DWORD *)(v56 + 4) )
              *(_BYTE *)(Slot + v56 + 8) = 0;
          }
          v51 = *(void ***)UnusedTreeData;
        }
        else
        {
          v49 = (CTreeData *)operator new(0x108uLL);
          UnusedTreeData = v49;
          if ( !v49 )
          {
            v14 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024882, 0x1489u);
            MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, -2147024882, 0xEAu);
            goto LABEL_42;
          }
          CTreeData::CTreeData(v49);
          v51 = &CVisualTreeData::`vftable';
          *v52 = &CVisualTreeData::`vftable';
          v52[32] = 0LL;
        }
        ((void (__fastcall *)(struct CTreeData *, const struct CVisualTree *, __int64))v51[1])(UnusedTreeData, v4, v5);
      }
      v13 = *(_DWORD **)(v5 + 224);
      v14 = 0;
      if ( (*v13 & 0x800000) != 0 )
      {
        v35 = (unsigned int)v13[1];
        v36 = v13 + 2;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v35; ++v36 )
        {
          if ( *v36 == 9 )
            break;
          i = (unsigned int)(i + 1);
        }
        if ( (unsigned int)i >= (unsigned int)v35 )
          v38 = 0LL;
        else
          v38 = (_QWORD **)((char *)v13 + v35 + 8 * i - (((_BYTE)v35 + 15) & 7) + 15);
        v39 = *v38;
        if ( v39 && (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 152LL))(*v39) )
        {
          *((_BYTE *)UnusedTreeData + 16) &= ~8u;
          v11 = (*((_BYTE *)UnusedTreeData + 16) & 4) == 0 || *((_QWORD *)UnusedTreeData + 27) != v64;
        }
      }
      v15 = *(_QWORD *)(v5 + 80);
      if ( !v15 || (*(_BYTE *)(v15 + 88) & 1) != 0 )
      {
        v16 = *(float *)(v5 + 116);
        v17 = 0.0;
        v18 = *(float *)(v5 + 120);
        v19 = 0.0;
        v20 = *(float *)(v5 + 132);
        v21 = *(float *)(v5 + 136);
        if ( v15 )
        {
          v17 = *(float *)(v15 + 132);
          v19 = *(float *)(v15 + 136);
        }
        v22 = *(_QWORD *)(v5 + 216);
        if ( (*(_DWORD *)(v22 + 4) & 0x10000000) != 0 )
        {
          v57 = *(_DWORD *)(v22 + 12);
          v58 = (int *)(v22 + 12);
          if ( (v57 & 0x7F000000) != 0x4000000 )
          {
            do
            {
              v58 = (int *)((char *)v58 + (v57 & 0xFFFFFF) + 4);
              v57 = *v58;
            }
            while ( (*v58 & 0x7F000000) != 0x4000000 );
          }
          *(_QWORD *)v61 = *(_QWORD *)(v58 + 1);
        }
        else
        {
          *(_QWORD *)v61 = 0LL;
        }
        v23 = (float)(v61[0] * v17) + *(float *)(v5 + 104);
        v24 = (float)(v61[1] * v19) + *(float *)(v5 + 108);
        *(float *)(v5 + 116) = v23;
        *(float *)(v5 + 120) = v24;
        if ( (*(_DWORD *)(v22 + 4) & 0x20000000) != 0 )
        {
          v33 = *(_DWORD *)(v22 + 12);
          v34 = (int *)(v22 + 12);
          if ( (v33 & 0x7F000000) != 0x3000000 )
          {
            do
            {
              v34 = (int *)((char *)v34 + (v33 & 0xFFFFFF) + 4);
              v33 = *v34;
            }
            while ( (*v34 & 0x7F000000) != 0x3000000 );
          }
          v62 = *(struct CTreeData **)(v34 + 1);
        }
        else
        {
          v62 = 0LL;
        }
        v25 = (float)(*(float *)&v62 * v17) + *(float *)(v5 + 124);
        v26 = (float)(*((float *)&v62 + 1) * v19) + *(float *)(v5 + 128);
        *(float *)(v5 + 132) = v25;
        v27 = v25;
        *(float *)(v5 + 136) = v26;
        if ( v25 < 0.0 )
        {
          *(_DWORD *)(v5 + 132) = 0;
          v25 = 0.0;
          v27 = 0.0;
        }
        if ( v26 < 0.0 )
        {
          *(_DWORD *)(v5 + 136) = 0;
          v26 = 0.0;
          v25 = v27;
        }
        v28 = v16 != v23 || v18 != v24;
        if ( v20 == v25 && v21 == v26 )
        {
          v29 = 0;
        }
        else
        {
          v46 = *(_QWORD *)(v5 + 248);
          v29 = 1;
          if ( v46 && *(_BYTE *)(v46 + 128) )
            CVisual::OnClipChanged((CVisual *)v5);
          CVisual::ClearContentTreeDataCaches((CVisual *)v5);
        }
        if ( v28 || v29 )
          *(_DWORD *)(v5 + 88) |= 1u;
        v9 = v65;
        v4 = v63;
      }
      v30 = *((_QWORD *)UnusedTreeData + 15);
      if ( v30 < v10 )
      {
        updated = CVisual::UpdateWorldTransform((CVisual *)v5, v4, UnusedTreeData, v11, v60);
        v14 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, updated, 0xFDu);
          goto LABEL_42;
        }
        if ( !v9 )
        {
          CVisual::PropagateFlags(v5, 5LL);
          CVisual::DirtyProjectedShadowReceivers((CVisual *)v5);
        }
        *((_QWORD *)UnusedTreeData + 22) = 0LL;
        v30 = *((_QWORD *)UnusedTreeData + 15);
      }
      v10 = v30;
      v60 = UnusedTreeData;
      v31 = *((_DWORD *)this + 2);
      if ( !v31 )
        goto LABEL_42;
      v32 = v31 - 1;
      *((_DWORD *)this + 2) = v32;
      v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v32);
    }
  }
  TransformParentNoRef = CVisual::GetTransformParentNoRef((CVisual *)v5);
  if ( !TransformParentNoRef )
    TransformParentNoRef = *(CVisual **)(v5 + 80);
  v44 = CVisual::EnsureTreeData(TransformParentNoRef, v4, &v62);
  v14 = v44;
  if ( v44 >= 0 )
  {
    v60 = v62;
    v10 = *((_QWORD *)v62 + 15);
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xDBu);
LABEL_42:
  if ( v14 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, v4);
  return (unsigned int)v14;
}
