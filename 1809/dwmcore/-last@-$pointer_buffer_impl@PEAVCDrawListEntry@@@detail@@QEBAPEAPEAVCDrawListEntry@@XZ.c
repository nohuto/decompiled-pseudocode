/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3AD0
 * Callers:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800B2508 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?end@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCDrawListEntry@@@2@XZ @ 0x1800B3088 (-end@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@de.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1800B3A90 (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3B10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800B3B60 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::last(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CDrawListEntry *>::size();
  return v2 + detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
}
