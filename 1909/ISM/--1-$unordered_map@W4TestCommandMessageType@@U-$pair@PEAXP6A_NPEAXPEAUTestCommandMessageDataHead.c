/*
 * XREFs of ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800D3460
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$2 @ 0x18003A984 (_TestCommandHost--TestCommandHost_--_1_--dtor$2.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x18003B5F3 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800D36FC (-clear@-$list@U-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 */

void __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::~unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::clear(a1 + 8);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
