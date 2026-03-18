/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800582A8
 * Callers:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180058AB0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180065F38 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800666A0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000C954 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180015DF8 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180057BA8 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180057BF4 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x180057F98 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  float *v12; // r8
  __int64 v13; // rcx
  int *v14; // r9
  __int64 v15; // r10
  char *v16; // rax
  __int64 v17; // r11
  float *v18; // rax
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rax
  CBatchOptimizer *v22; // rcx
  char v24; // al
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+18h]

  v1 = 0LL;
  v2 = (int *)((char *)this + 48);
  for ( i = 0; *((_DWORD *)this + 130 * *v2 + 26); ++i )
    ++v2;
  v5 = *((_DWORD *)this + 8);
  v6 = i;
  v7 = v5 - 1;
  v27 = v7;
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
              v12 = (float *)(v11 + 280);
              if ( v10 - 1 == i )
              {
LABEL_24:
                v19 = *((_DWORD *)v11 + 24);
                v26 = v1;
                v20 = (unsigned int)(v19 - 1);
                v21 = *(_QWORD *)&v11[8 * v20 + 120];
                *((_DWORD *)v11 + 24) = v20;
                v25 = v21;
                *((_DWORD *)v11 + 25) = v1;
                CBatchOptimizer::AppendEntryToLayer(this, i, v12, &v25, &v26);
                if ( v25 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
                if ( v26 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
                if ( v19 == 1 )
                {
                  CBatchOptimizer::RecycleLayer(this, v10);
                  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(v22, v10 - 1);
                  return 1;
                }
                v24 = CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v10);
                v1 = 0LL;
                if ( v24 )
                  return 1;
              }
              else
              {
                v13 = v10 - 1LL;
                v14 = (int *)((char *)this + 4 * v13 + 48);
                while ( 1 )
                {
                  v15 = v1;
                  v16 = (char *)this + 520 * *v14;
                  if ( *((_DWORD *)v16 + 25) != (_DWORD)v1 )
                    break;
LABEL_23:
                  --v13;
                  --v14;
                  if ( v13 == i )
                    goto LABEL_24;
                }
                v17 = *((int *)v16 + 25);
                v18 = (float *)(v16 + 284);
                while ( *((float *)v11 + 72) < *(v18 - 1)
                     || v18[1] < *v12
                     || *((float *)v11 + 73) < *v18
                     || v18[2] < *((float *)v11 + 71) )
                {
                  ++v15;
                  v18 += 4;
                  if ( v15 == v17 )
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
        v7 = v27;
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
