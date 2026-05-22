/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x1800A25B8
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800A1814 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800A1F70 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x1800D3780 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x1800D3894 (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x18006DFC0 (-equal_range@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$has.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::equal_range(
    a1,
    v5,
    a2);
  v2 = (_QWORD *)v5[0];
  v3 = 0LL;
  while ( v2 != (_QWORD *)v5[1] )
  {
    v2 = (_QWORD *)*v2;
    ++v3;
  }
  return v3;
}
