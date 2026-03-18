/*
 * XREFs of ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x1801750E8 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175CF0 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 */

void __fastcall CColorBrush::DebugDump(CColorBrush *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-30h] BYREF

  CSpriteVisualContent::DebugDump(this, a2);
  std::string::string(v3, (__int64)"CColorBrush");
  std::string::operator=(a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
  std::string::string(v3, (__int64)"color_r");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
  std::string::string(v3, (__int64)"color_g");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
  std::string::string(v3, (__int64)"color_b");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
  std::string::string(v3, (__int64)"color_a");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
}
