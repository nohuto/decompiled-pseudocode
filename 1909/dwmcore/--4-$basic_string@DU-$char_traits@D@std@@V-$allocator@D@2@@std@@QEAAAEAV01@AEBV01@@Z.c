/*
 * XREFs of ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4
 * Callers:
 *     ?DebugDump@CResource@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18016A550 (-DebugDump@CResource@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x18017261C (--$AddProperty@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@CVisualTreeDumpCon.c)
 *     ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180173C04 (-Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175BD0 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175CF0 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18019E6B0 (-DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C9B60 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CCE90 (-DebugDump@CContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CD4B0 (-DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E32C0 (-DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E6B10 (-DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FA2F0 (-DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FA770 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180212A30 (-DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802130C0 (-DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180216870 (-DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180217CF0 (-DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016A700 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

void *__fastcall std::string::operator=(void *a1, void *a2)
{
  if ( a1 != a2 )
    std::string::assign(a1);
  return a1;
}
