/*
 * XREFs of ?DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802193E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C2BA0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCGdiSpriteBitmap@@_N@Z @ 0x180218E88 (--$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_.c)
 */

void __fastcall CWindowNode::DebugDump(CWindowNode *this, struct CVisualTreeDumpContext *a2)
{
  __int64 v4; // rbx
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  CVisual::DebugDump(this, a2);
  std::string::string(v5, (__int64)"CWindowNode");
  std::string::operator=(a2, v5);
  std::string::_Tidy_deallocate((__int64)v5);
  v4 = *((_QWORD *)this + 93);
  std::string::string(v5, (__int64)"bitmap");
  CVisualTreeDumpContext::AddLinkInternal<CGdiSpriteBitmap>((__int64 *)a2, (__int64)v5, (v4 - 56) & -(__int64)(v4 != 0));
  std::string::_Tidy_deallocate((__int64)v5);
}
