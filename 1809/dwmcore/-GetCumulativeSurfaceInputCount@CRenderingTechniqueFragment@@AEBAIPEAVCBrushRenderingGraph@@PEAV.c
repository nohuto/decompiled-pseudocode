/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800E0AD8 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022C050 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E0948 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800E19F4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800E1BE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rbx
  const struct CBrushRenderingGraph *v7; // r12
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 i; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  v7 = a2;
  if ( (_DWORD)v5 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 4) + v10 + 8);
      if ( v11 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v11, v7, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a1,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v19);
        v12 = a3[1];
        for ( i = *a3; ; i = v18 + 28 )
        {
          a2 = (const struct CBrushRenderingGraph *)i;
          v14 = i;
          if ( i == v12 || (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(i, &v19, v12, i) )
            break;
        }
        if ( v12 == v14 )
        {
          v15 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  a3,
                  (v12 - *a3) / 28,
                  v12 - *a3);
          ++v3;
          v16 = v21;
          v17 = v20;
          *(_OWORD *)v15 = v19;
          *(_QWORD *)(v15 + 16) = v17;
          *(_DWORD *)(v15 + 24) = v16;
        }
      }
      ++v4;
      v10 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}
