/*
 * XREFs of ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180177460
 * Callers:
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180177340 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x18019FF70 (-DebugDump@CWindowBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CB300 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CEC50 (-DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E4A30 (-DebugDump@CMaskBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E8280 (-DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FBE60 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall CSpriteVisualContent::DebugDump(CSpriteVisualContent *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF

  std::string::string(v3, (__int64)"CSpriteVisualContent");
  std::string::operator=(a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
}
