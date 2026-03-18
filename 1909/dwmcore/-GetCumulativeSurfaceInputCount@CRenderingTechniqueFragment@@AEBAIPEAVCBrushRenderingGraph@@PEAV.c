/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180046110
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180046044 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180046110 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x180258DD8 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x180042B3C (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180045D6C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180046110 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18004620C (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // r8
  __int64 i; // rcx
  char *v14; // rax
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 4) + v9 + 8);
      if ( v10 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v10, a2, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a1,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v17);
        v12 = a3[1];
        for ( i = *a3; ; i = v16 + 12 )
        {
          if ( v12 == i )
            goto LABEL_9;
          if ( CRenderingTechniqueFragment::SurfaceDescription::operator==(i, (__int64)&v17) )
            break;
        }
        if ( v12 == v16 )
        {
LABEL_9:
          v14 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  a3,
                  (v12 - *a3) / 12,
                  v12 - *a3);
          ++v3;
          v15 = v18;
          *(_QWORD *)v14 = v17;
          *((_DWORD *)v14 + 2) = v15;
        }
      }
      ++v4;
      v9 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}
