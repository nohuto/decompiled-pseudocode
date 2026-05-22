/*
 * XREFs of ?_Incsize@?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x1800114B4
 * Callers:
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x1800113A8 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$unordered_map@W4TestCommandMessageType@@U-$pa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::_Incsize(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 == 0x666666666666665LL )
    std::_Xlength_error("list<T> too long");
  result = v1 + 1;
  *(_QWORD *)(a1 + 8) = v1 + 1;
  return result;
}
