/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024CD0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000A32C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$com_ptr_t@VCDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@4@@Z @ 0x1800256BC (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180025784 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025934 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180028CBC (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  int v1; // r10d
  int *v2; // r8
  int i; // esi
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r14
  int *j; // rdx
  int v10; // edi
  char *v11; // r8
  int v12; // r12d
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rcx
  int *v21; // r8
  int v22; // r11d
  int *v24; // r11
  char *v25; // r12
  char *v26; // rcx
  int v27; // r10d
  char v28; // al
  __int64 v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+80h] [rbp+18h]

  v1 = 0;
  v2 = (int *)((char *)this + 48);
  for ( i = 0; *((_DWORD *)this + 130 * *v2 + 26); ++i )
    ++v2;
  v5 = *((_DWORD *)this + 8);
  v6 = i;
  v7 = v5 - 1;
  v31 = v7;
  while ( v6 != v7 )
  {
    v8 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v8 + 100) )
    {
      if ( !*(_QWORD *)((char *)this + v8 + 112) )
      {
        v10 = i + 1;
        if ( i + 1 != v5 )
        {
          while ( 1 )
          {
            v11 = (char *)this + 520 * *((int *)this + v10 + 12);
            if ( *((_DWORD *)v11 + 26) )
            {
              v10 = CBatchOptimizer::SkipContinuations(this, v10);
            }
            else
            {
              if ( *((_DWORD *)v11 + 25) != 1
                || *((_QWORD *)v11 + 14)
                || *(_QWORD *)((char *)this + v8 + 80) != *((_QWORD *)v11 + 10) )
              {
                goto LABEL_28;
              }
              v12 = v10 - 1;
              v13 = v10 - 1;
              if ( v13 == i )
              {
LABEL_15:
                v14 = *((_DWORD *)v11 + 24);
                v30 = 0LL;
                v15 = (unsigned int)(v14 - 1);
                v16 = *(_QWORD *)&v11[8 * v15 + 120];
                *((_DWORD *)v11 + 24) = v15;
                v29 = v16;
                *((_DWORD *)v11 + 25) = 0;
                CBatchOptimizer::AppendEntryToLayer(this, (__int64)&v30);
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
                if ( v30 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
                if ( v14 == 1 )
                {
                  v17 = *((int *)this + 8);
                  if ( v10 != (_DWORD)v17 - 1 )
                  {
                    v18 = v10;
                    v19 = *((int *)this + 8);
                    v20 = v17 - 1;
                    v21 = (int *)((char *)this + 4 * v10 + 48);
                    v22 = *v21;
                    do
                    {
                      ++v18;
                      *v21 = v21[1];
                      ++v21;
                    }
                    while ( v18 != v20 );
                    *((_DWORD *)this + v19 + 11) = v22;
                    LODWORD(v17) = *((_DWORD *)this + 8);
                  }
                  *((_DWORD *)this + 8) = v17 - 1;
                  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v12);
                  return 1;
                }
                v28 = CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v10);
                v1 = 0;
                if ( v28 )
                  return 1;
                goto LABEL_28;
              }
              v24 = (int *)((char *)this + 4 * v12 + 48);
              while ( 1 )
              {
                v25 = (char *)this + 520 * *v24 + 80;
                if ( *((_DWORD *)v25 + 5) )
                  break;
LABEL_36:
                --v13;
                --v24;
                v1 = 0;
                if ( v13 == i )
                {
                  v12 = v10 - 1;
                  goto LABEL_15;
                }
              }
              v26 = v11 + 280;
              while ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                                          v26,
                                          &v25[16 * v1 + 200]) )
              {
                v1 = v27 + 1;
                if ( v1 == *((_DWORD *)v25 + 5) )
                  goto LABEL_36;
              }
            }
            v1 = 0;
LABEL_28:
            if ( ++v10 == v5 )
            {
              v7 = v31;
              break;
            }
          }
        }
      }
    }
    ++i;
    for ( j = (int *)((char *)this + 4 * ++v6 + 48); *((_DWORD *)this + 130 * *j + 26); ++j )
    {
      ++i;
      ++v6;
    }
  }
  *((_BYTE *)this + 4240) = 0;
  return 0;
}
