/*
 * XREFs of ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801E6B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175CF0 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSpriteVisualContent@@_N@Z @ 0x1801C9548 (--$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$c.c)
 */

void __fastcall CNineGridBrush::DebugDump(CNineGridBrush *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF

  CSpriteVisualContent::DebugDump(this, a2);
  std::string::string(v4, (__int64)"CNineGridBrush");
  std::string::operator=(a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"Source");
  CVisualTreeDumpContext::AddLinkInternal<CSpriteVisualContent>((__int64 *)a2, (__int64)v4, *((_QWORD *)this + 10));
  std::string::_Tidy_deallocate((__int64)v4);
}
