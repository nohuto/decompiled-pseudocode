/*
 * XREFs of ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4
 * Callers:
 *     ?DebugDump@CResource@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18016BC30 (-DebugDump@CResource@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x180173D6C (--$AddProperty@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@CVisualTreeDumpCon.c)
 *     ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180175354 (-Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180177340 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180177460 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18019FF70 (-DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C2BA0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CB300 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CE630 (-DebugDump@CContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CEC50 (-DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E4A30 (-DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E8280 (-DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FB9E0 (-DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FBE60 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180214110 (-DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802147A0 (-DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180217F60 (-DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802193E0 (-DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016BDE0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

void *__fastcall std::string::operator=(void *a1, void *a2)
{
  if ( a1 != a2 )
    std::string::assign(a1);
  return a1;
}
