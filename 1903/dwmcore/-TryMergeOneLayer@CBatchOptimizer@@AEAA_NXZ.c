/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18004C89C
 * Callers:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18004C450 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x18004DFD8 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x18004E740 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x1800115D4 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180017528 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x18004CC88 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18004D008 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18004D0FC (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  __int64 v1; // r11
  int *v2; // r8
  int i; // esi
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // r8
  int *j; // rdx
  __int64 v9; // r15
  signed int v10; // edi
  char *v11; // rdx
  __int64 v12; // rcx
  int *v13; // r9
  __int64 v14; // r10
  char *v15; // rax
  __int64 v16; // r11
  float *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rax
  CBatchOptimizer *v21; // rcx
  char v23; // al
  __int64 v24; // [rsp+70h] [rbp+8h]
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  __int64 v26; // [rsp+80h] [rbp+18h]

  v1 = 0LL;
  v2 = (int *)((char *)this + 48);
  for ( i = 0; *((_DWORD *)this + 130 * *v2 + 26); ++i )
    ++v2;
  v5 = *((_DWORD *)this + 8);
  v6 = i;
  v7 = v5 - 1;
  v26 = v7;
  while ( v6 != v7 )
  {
    v9 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v9 + 100) != (_DWORD)v1 && *(_QWORD *)((char *)this + v9 + 112) == v1 )
    {
      v10 = i + 1;
      if ( i + 1 != v5 )
      {
        do
        {
          v11 = (char *)this + 520 * *((int *)this + v10 + 12);
          if ( *((_DWORD *)v11 + 26) == (_DWORD)v1 )
          {
            if ( *((_DWORD *)v11 + 25) == 1
              && *((_QWORD *)v11 + 14) == v1
              && *(_QWORD *)((char *)this + v9 + 80) == *((_QWORD *)v11 + 10) )
            {
              if ( v10 - 1 == i )
              {
LABEL_24:
                v18 = *((_DWORD *)v11 + 24);
                v25 = v1;
                v19 = (unsigned int)(v18 - 1);
                v20 = *(_QWORD *)&v11[8 * v19 + 120];
                *((_DWORD *)v11 + 24) = v19;
                v24 = v20;
                *((_DWORD *)v11 + 25) = v1;
                CBatchOptimizer::AppendEntryToLayer(this, (__int64)&v25);
                if ( v24 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
                if ( v25 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
                if ( v18 == 1 )
                {
                  CBatchOptimizer::RecycleLayer(this, v10);
                  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(v21, v10 - 1);
                  return 1;
                }
                v23 = CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v10);
                v1 = 0LL;
                if ( v23 )
                  return 1;
              }
              else
              {
                v12 = v10 - 1LL;
                v13 = (int *)((char *)this + 4 * v12 + 48);
                while ( 1 )
                {
                  v14 = v1;
                  v15 = (char *)this + 520 * *v13;
                  if ( *((_DWORD *)v15 + 25) != (_DWORD)v1 )
                    break;
LABEL_23:
                  --v12;
                  --v13;
                  if ( v12 == i )
                    goto LABEL_24;
                }
                v16 = *((int *)v15 + 25);
                v17 = (float *)(v15 + 284);
                while ( *((float *)v11 + 72) < *(v17 - 1)
                     || v17[1] < *((float *)v11 + 70)
                     || *((float *)v11 + 73) < *v17
                     || v17[2] < *((float *)v11 + 71) )
                {
                  ++v14;
                  v17 += 4;
                  if ( v14 == v16 )
                  {
                    v1 = 0LL;
                    goto LABEL_23;
                  }
                }
                v1 = 0LL;
              }
            }
          }
          else
          {
            v10 = CBatchOptimizer::SkipContinuations(this, v10);
          }
          ++v10;
        }
        while ( v10 != v5 );
        v7 = v26;
      }
    }
    ++i;
    for ( j = (int *)((char *)this + 4 * ++v6 + 48); *((_DWORD *)this + 130 * *j + 26) != (_DWORD)v1; ++j )
    {
      ++i;
      ++v6;
    }
  }
  *((_BYTE *)this + 4240) = v1;
  return 0;
}
