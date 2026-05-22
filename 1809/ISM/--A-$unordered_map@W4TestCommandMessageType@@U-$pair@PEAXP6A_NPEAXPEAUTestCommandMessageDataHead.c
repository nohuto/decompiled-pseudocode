/*
 * XREFs of ??A?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAAAEAU?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@1@AEBW4TestCommandMessageType@@@Z @ 0x18009F474
 * Callers:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x18009ECB0 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x18009ED5C (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x18009F240 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064C28 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_180064C28.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18009F598 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 */

__int64 __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::operator[](
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  _QWORD **v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 j; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v19[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (_QWORD **)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  for ( j = *(_QWORD *)(v9 + 16 * v8); ; j = *(_QWORD *)j )
  {
    v12 = *(_QWORD ***)(v9 + 8 * v10) == v7 ? a1[1] : **(_QWORD **)(v9 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( *(_DWORD *)(j + 16) == *a2 )
    {
      v13 = j;
      goto LABEL_12;
    }
  }
  j = a1[1];
  v13 = j;
LABEL_12:
  if ( (_QWORD **)v13 == v7 )
  {
    v14 = *v7;
    v20 = a2;
    v15 = (_QWORD *)v14[1];
    v16 = std::_List_buy<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            v13,
            v14,
            v15,
            v10,
            &v20);
    v17 = a1[2];
    if ( v17 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v17 + 1;
    v14[1] = v16;
    *v15 = v16;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
      a1,
      v19,
      *(_QWORD *)a1[1] + 16LL);
    j = v19[0];
  }
  return j + 24;
}
