/*
 * XREFs of ??0TestCommandHost@@AEAA@XZ @ 0x180010768
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18001042C (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180010618 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x180011318 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$unordered_map@W4TestCommandMessageType@@U-$pa.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@2@PEAU32@0@Z @ 0x180011498 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V-.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180015168 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059B94 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
TestCommandHost *__fastcall TestCommandHost::TestCommandHost(TestCommandHost *this)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v9; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = (char *)this + 72;
  v9 = (char *)this + 72;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<std::_List_base_types<std::pair<DWMPointerMapping const,CursorId>>>::_Buynode0(
                             this,
                             0LL,
                             0LL);
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v2,
    8LL);
  *((_QWORD *)this + 1) = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(this);
  v3 = CoreUICreate(this);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v3,
      -2);
    JUMPOUT(0x180041A52LL);
  }
  TestCommandHost::CreateEndpointToReceiveMessages(this, v4);
  LODWORD(v9) = 1;
  std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
    v2,
    v7,
    &v9);
  v5 = v7[0];
  *(_QWORD *)(v7[0] + 24LL) = this;
  *(_QWORD *)(v5 + 32) = &lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_;
  return this;
}
