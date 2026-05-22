/*
 * XREFs of ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800A1814
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180098E40 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ??$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A0B48 (--$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_com.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800A2268 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x1800A25B8 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA_KAEBW4_Button@@@Z @ 0x1800A2788 (-erase@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_B_ea_1800A2788.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v4 = a1 + 2824;
  result = std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
             a1 + 2824,
             &v11);
  if ( a4 )
  {
    if ( !result )
    {
      LOBYTE(v9) = a4;
      MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, v9);
      return std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert<enum _Button const &,std::_Not_a_node_tag>(
               v4,
               (__int64)v10,
               (unsigned __int8 *)&v11);
    }
  }
  else if ( result )
  {
    MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, 0LL);
    return std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
             v4,
             &v11);
  }
  return result;
}
