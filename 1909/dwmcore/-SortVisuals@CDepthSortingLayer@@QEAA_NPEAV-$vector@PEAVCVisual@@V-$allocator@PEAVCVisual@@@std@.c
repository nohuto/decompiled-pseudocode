/*
 * XREFs of ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18025B028
 * Callers:
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18025AA88 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 * Callees:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800072FC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ??$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@AEBQEAU2@@Z @ 0x18025AC5C (--$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDep.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18025AD50 (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??0?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV?$allocator@UDepthGraphNode@@@1@@Z @ 0x18025AE44 (--0-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV-$allocator@UD.c)
 *     ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x18025B368 (-_Tidy@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ.c)
 */

bool __fastcall CDepthSortingLayer::SortVisuals(unsigned int **a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  _QWORD *v4; // r12
  __int64 v5; // r15
  _BYTE *v6; // rdx
  _QWORD *v7; // r8
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rbx
  unsigned int v12; // r13d
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r12
  int RelativeOrder; // eax
  _BYTE *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r12d
  __int64 v28; // r13
  _BYTE *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // [rsp+28h] [rbp-49h] BYREF
  _BYTE *v39; // [rsp+30h] [rbp-41h]
  _BYTE *v40; // [rsp+38h] [rbp-39h]
  unsigned int v41; // [rsp+40h] [rbp-31h]
  __int64 v42; // [rsp+48h] [rbp-29h]
  _BYTE *v43; // [rsp+50h] [rbp-21h]
  __int64 v44; // [rsp+58h] [rbp-19h]
  __int64 v45; // [rsp+60h] [rbp-11h]
  _QWORD v46[12]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v47; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v48; // [rsp+E0h] [rbp+6Fh]
  _QWORD *v49; // [rsp+E8h] [rbp+77h]
  __int64 v50; // [rsp+F0h] [rbp+7Fh] BYREF

  v49 = a3;
  v48 = a2;
  v47 = a1;
  v3 = a2;
  v4 = a1;
  v5 = a1[1] - *a1;
  if ( (_DWORD)v5 == 1 )
  {
    v6 = *(_BYTE **)(a2 + 8);
    v7 = *(_QWORD **)(176LL * **a1 + *a3);
    v47 = v7;
    if ( *(_BYTE **)(v3 + 16) == v6 )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v3, v6, &v47);
    }
    else
    {
      *(_QWORD *)v6 = v7;
      *(_QWORD *)(v3 + 8) += 8LL;
    }
    return 1;
  }
  std::vector<DepthGraphNode>::vector<DepthGraphNode>((__int64)v46, (unsigned int)v5);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v38 = 0LL;
  v12 = 0;
  v39 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  if ( (_DWORD)v5 )
  {
    v13 = v46[0];
    v14 = 0LL;
    v44 = 0LL;
    v15 = v46[0] + 32LL;
    while ( 1 )
    {
      v16 = v49;
      v17 = *(unsigned int *)(v14 + *v4);
      v18 = v12 + 1;
      v41 = v12 + 1;
      v19 = *v49 + 176 * v17;
      *(_DWORD *)(v15 - 32) = v12;
      v45 = v19;
      *(_QWORD *)(v15 - 24) = v19;
      LODWORD(v50) = v18;
      if ( (unsigned int)v18 >= (unsigned int)v5 )
        goto LABEL_21;
      v20 = v47;
      v21 = v50;
      v22 = 4LL * (unsigned int)v18;
      v42 = v22;
      v23 = 56 * v18 + v13 + 32;
      do
      {
        RelativeOrder = CVisualDepthGeometry::GetRelativeOrder(v19, *v16 + 176LL * *(unsigned int *)(*v20 + v22));
        if ( RelativeOrder )
        {
          if ( RelativeOrder != 1 )
            goto LABEL_19;
          *(_BYTE *)(v23 - 16) = 0;
          ++*(_DWORD *)(v23 + 16);
          v25 = *(_BYTE **)v15;
          v50 = v13 + 56LL * v21;
          if ( *(_BYTE **)(v15 + 8) != v25 )
          {
            *(_QWORD *)v25 = v13 + 56LL * v21;
            *(_QWORD *)v15 += 8LL;
            goto LABEL_19;
          }
          v26 = v15 - 8;
        }
        else
        {
          *(_BYTE *)(v15 - 16) = 0;
          ++*(_DWORD *)(v15 + 16);
          v25 = *(_BYTE **)v23;
          v50 = v13 + 56LL * v12;
          if ( *(_BYTE **)(v23 + 8) != v25 )
          {
            *(_QWORD *)v25 = v13 + 56LL * v12;
            *(_QWORD *)v23 += 8LL;
            goto LABEL_19;
          }
          v26 = v23 - 8;
        }
        std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>(v26, v25, &v50);
LABEL_19:
        ++v21;
        v19 = v45;
        v22 = v42 + 4;
        v16 = v49;
        v23 += 56LL;
        v42 += 4LL;
      }
      while ( v21 < (unsigned int)v5 );
      v11 = v39;
      v9 = v43;
      v4 = v47;
LABEL_21:
      if ( *(_BYTE *)(v15 - 16) )
      {
        v50 = v13 + 56LL * v12;
        if ( v9 == v11 )
        {
          std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>((__int64)&v38, v11, &v50);
          v9 = v40;
          v11 = v39;
          v43 = v40;
        }
        else
        {
          *(_QWORD *)v11 = v13 + 56LL * v12;
          v11 += 8;
          v39 = v11;
        }
      }
      v15 += 56LL;
      v12 = v41;
      v14 = v44 + 4;
      v44 += 4LL;
      if ( v41 >= (unsigned int)v5 )
      {
        v10 = v38;
        v3 = v48;
        break;
      }
    }
  }
  v27 = 0;
  while ( (_BYTE *)v10 != v11 )
  {
    v28 = *(_QWORD *)v10;
    v29 = *(_BYTE **)(v3 + 8);
    v30 = **(_QWORD ***)(*(_QWORD *)v10 + 8LL);
    v47 = v30;
    if ( *(_BYTE **)(v3 + 16) == v29 )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v3, v29, &v47);
    }
    else
    {
      *(_QWORD *)v29 = v30;
      *(_QWORD *)(v3 + 8) += 8LL;
    }
    memmove_0((void *)v10, (const void *)(v10 + 8), (size_t)&v11[-v10 - 8]);
    v31 = *(_QWORD *)(v28 + 24);
    v11 -= 8;
    v32 = 0;
    v33 = *(_QWORD *)(v28 + 32) - v31;
    v39 = v11;
    ++v27;
    LODWORD(v47) = 0;
    if ( v33 >> 3 )
    {
      v34 = 0LL;
      do
      {
        v35 = *(_QWORD *)(v31 + 8 * v34);
        v50 = v35;
        if ( (*(_DWORD *)(v35 + 48))-- == 1 )
        {
          if ( v9 == v11 )
          {
            std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>((__int64)&v38, v11, &v50);
            v32 = (unsigned int)v47;
            v9 = v40;
            v11 = v39;
          }
          else
          {
            *(_QWORD *)v11 = v35;
            v11 += 8;
            v39 = v11;
          }
        }
        v31 = *(_QWORD *)(v28 + 24);
        v34 = ++v32;
        v37 = (*(_QWORD *)(v28 + 32) - v31) >> 3;
        LODWORD(v47) = v32;
      }
      while ( v32 < v37 );
      v10 = v38;
    }
  }
  if ( v10 )
    std::_Deallocate<16,0>((void *)v10, (unsigned __int64)&v9[-v10] & 0xFFFFFFFFFFFFFFF8uLL);
  std::vector<DepthGraphNode>::_Tidy(v46);
  return v27 >= (unsigned int)v5;
}
