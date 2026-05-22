/*
 * XREFs of ??0TestCommandHost@@AEAA@XZ @ 0x18009EDC8
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180052F08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x18009F080 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18009F598 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAW4TestCommandMessageType@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAW4TestCommandMessageType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18009F7C4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAW4TestCommandMessageType@@@2@V-$tuple@$.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
TestCommandHost *__fastcall TestCommandHost::TestCommandHost(TestCommandHost *this)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD v18[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v20; // [rsp+78h] [rbp+10h] BYREF
  char **v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = (_QWORD *)((char *)this + 72);
  v20 = (char *)this + 72;
  *((_DWORD *)this + 18) = 0;
  v21 = (char **)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                             (__int64)this,
                             0LL,
                             0LL);
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[5] = 0LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v3,
    8LL);
  *((_QWORD *)this + 1) = 0LL;
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = CoreUICreate(this);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18009EFAALL);
  }
  TestCommandHost::CreateEndpointToReceiveMessages(this);
  LODWORD(v20) = 1;
  v6 = 0xCBF29CE484222325uLL;
  do
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v20 + v2++) ^ (unsigned __int64)v6);
  while ( v2 < 4 );
  v7 = v3[3];
  v8 = *(__int64 **)(v7 + 16 * (v6 & v3[6]));
  v9 = 2 * (v6 & v3[6]);
  v10 = (__int64 *)v3[1];
  while ( 1 )
  {
    v11 = *(__int64 **)(v7 + 8 * v9) == v10 ? (__int64 *)v3[1] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( v8 == v11 )
      break;
    if ( *((_DWORD *)v8 + 4) == 1 )
    {
      v12 = v8;
      goto LABEL_15;
    }
    v8 = (__int64 *)*v8;
  }
  v8 = (__int64 *)v3[1];
  v12 = v8;
LABEL_15:
  if ( v12 == v10 )
  {
    v21 = &v20;
    v13 = *v10;
    v14 = *(__int64 **)(*v10 + 8);
    v15 = std::_List_buy<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum TestCommandMessageType &&>,std::tuple<>>(
            (_DWORD)v12,
            *v10,
            (_DWORD)v14,
            v9,
            (__int64)&v21);
    v16 = v3[2];
    if ( v16 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    v3[2] = v16 + 1;
    *(_QWORD *)(v13 + 8) = v15;
    *v14 = v15;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
      v3,
      v18,
      *(_QWORD *)v3[1] + 16LL);
    v8 = (__int64 *)v18[0];
  }
  v8[3] = (__int64)this;
  v8[4] = (__int64)&lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_;
  return this;
}
