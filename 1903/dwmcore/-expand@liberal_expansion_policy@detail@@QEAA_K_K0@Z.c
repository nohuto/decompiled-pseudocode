/*
 * XREFs of ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000E4C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000FAA8 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000FC78 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x18001013C (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18001050C (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002AC64 (-ensure_extra_capacity@-$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansi.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x18002BE80 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002D230 (-ensure_extra_capacity@-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180037B6C (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180037D6C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800389B0 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800389B0.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18004E7EC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092A20 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??$insert_unchecked@AEBQEAVCOverlayContext@@@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@AEBQEAVCOverlayContext@@@Z @ 0x18009330C (--$insert_unchecked@AEBQEAVCOverlayContext@@@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x1800B5C08 (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EA518 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801879F4 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187AF8 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187C44 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AFF90 (-ensure_extra_capacity@-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B0094 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B019C (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BA304 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801FE970 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wi.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18025FA8C (-ensure_extra_capacity@-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall detail::liberal_expansion_policy::expand(
        detail::liberal_expansion_policy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = a2 >> 1;
  if ( a2 > ~(a2 >> 1) )
    return a3;
  result = v3 + a2;
  if ( v3 + a2 < a3 )
    return a3;
  return result;
}
