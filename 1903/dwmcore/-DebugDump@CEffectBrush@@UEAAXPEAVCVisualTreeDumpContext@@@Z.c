/*
 * XREFs of ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801CB300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016BDE0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x180173B68 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180175024 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 *     ?DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180177460 (-DebugDump@CSpriteVisualContent@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSpriteVisualContent@@_N@Z @ 0x1801CACE8 (--$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$c.c)
 */

void __fastcall CEffectBrush::DebugDump(CEffectBrush *this, struct CVisualTreeDumpContext *a2)
{
  __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8[4]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v9[53]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v10[3]; // [rsp+75h] [rbp-Bh] BYREF

  CSpriteVisualContent::DebugDump(this, a2);
  std::string::string(v8, (__int64)"CEffectBrush");
  std::string::operator=(a2, v8);
  std::string::_Tidy_deallocate((__int64)v8);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    v6 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v10, i);
    v8[2] = 0LL;
    v8[3] = (void *)15;
    LOBYTE(v8[0]) = 0;
    if ( (_BYTE *)v6 != v10 )
      std::string::assign(v8, (const void *)v6, (size_t)&v10[-v6]);
    v7 = std::operator+<char>((__int64)v9, (__int64)"Input", v8);
    CVisualTreeDumpContext::AddLinkInternal<CSpriteVisualContent>((__int64 *)a2, v7, v5);
    std::string::_Tidy_deallocate((__int64)v9);
    std::string::_Tidy_deallocate((__int64)v8);
  }
}
