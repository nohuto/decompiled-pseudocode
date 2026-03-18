/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE4CC
 * Callers:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180028DB4 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800674A4 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_exp.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180056B68 (--$move@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdx
  const char *v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // r11
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(const char **)a1;
  result = (v3 - (__int64)v5) >> 3;
  if ( a3 > result )
    std::_Xoverflow_error(v5);
  v9 = 0LL;
  *(_QWORD *)&v8 = v5;
  v7 = 8 * a3;
  *((_QWORD *)&v8 + 1) = (v3 - (__int64)v5) >> 3;
  if ( a3 != result )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
               (__int64)&v8,
               &v5[v7],
               &v5[8 * result],
               &v10);
    v3 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v3 - v7;
  return result;
}
