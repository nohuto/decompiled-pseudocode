/*
 * XREFs of ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FA770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x1801750E8 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175CF0 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCResource@@_N@Z @ 0x1801FA55C (--$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@.c)
 */

void __fastcall CSurfaceBrush::DebugDump(CSurfaceBrush *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-30h] BYREF

  CSpriteVisualContent::DebugDump(this, a2);
  std::string::string(v4, (__int64)"CSurfaceBrush");
  std::string::operator=(a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"Resource");
  CVisualTreeDumpContext::AddLinkInternal<CResource>((__int64 *)a2, (__int64)v4, *((_QWORD *)this + 12));
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"SurfaceRectLeft");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"SurfaceRectRight");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"SurfaceRectTop");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"SurfaceRectBottom");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
}
