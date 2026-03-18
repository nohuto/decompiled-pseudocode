/*
 * XREFs of ?DebugDump@CContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CE630
 * Callers:
 *     ?DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180217F60 (-DebugDump@CRenderData@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall CContent::DebugDump(CContent *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF

  std::string::string(v3, (__int64)"CContent");
  std::string::operator=(a2, v3);
  std::string::_Tidy_deallocate((__int64)v3);
}
