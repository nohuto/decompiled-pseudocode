/*
 * XREFs of ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175CF0
 * Callers:
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175BD0 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18019E6B0 (-DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C9B60 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CD4B0 (-DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E32C0 (-DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E6B10 (-DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FA770 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall CSpriteVisualContent::DebugDump(CSpriteVisualContent *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF

  std::string::string(v3, (__int64)"CSpriteVisualContent");
  std::string::operator=(a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
}
