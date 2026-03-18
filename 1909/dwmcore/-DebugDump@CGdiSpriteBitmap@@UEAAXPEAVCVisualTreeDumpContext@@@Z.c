/*
 * XREFs of ?DebugDump@CGdiSpriteBitmap@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802130C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$AddLinkInternal@VIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVIBitmapRealization@@_N@Z @ 0x180172510 (--$AddLinkInternal@VIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$cha.c)
 */

void __fastcall CGdiSpriteBitmap::DebugDump(CGdiSpriteBitmap *this, struct CVisualTreeDumpContext *a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF

  std::string::string(v4, (__int64)"CGdiSpriteBitmap");
  std::string::operator=(a2, v4);
  std::string::_Tidy_deallocate((__int64)v4);
  std::string::string(v4, (__int64)"realization");
  CVisualTreeDumpContext::AddLinkInternal<IBitmapRealization>(a2, (__int64)v4, *((_QWORD *)this + 57));
  std::string::_Tidy_deallocate((__int64)v4);
}
