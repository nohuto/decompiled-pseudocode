/*
 * XREFs of ?Initialize@TouchProcessor@@IEAAJXZ @ 0x180103AF8
 * Callers:
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180103A00 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchProcessor::Initialize(TouchProcessor *this)
{
  PointerInfoAdapter *v2; // rax
  PointerInfoAdapter *v3; // rbx
  PointerInfoAdapter *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (PointerInfoAdapter *)malloc(0xB0uLL);
  v3 = v2;
  if ( v2 )
    memset_0(v2, 0, 0xB0uLL);
  if ( v3 )
    v3 = PointerInfoAdapter::PointerInfoAdapter(
           v3,
           (struct IPointerInfoAdapterClient *)(((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v4 = (PointerInfoAdapter *)*((_QWORD *)this + 6);
  if ( v4 != v3 )
  {
    v5 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v3 + 8LL))(v3);
      v5 = *((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = v3;
    v4 = v3;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (PointerInfoAdapter *)*((_QWORD *)this + 6);
    }
  }
  if ( !v4 )
  {
    v6 = 65LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v8 = malloc(0x50uLL);
  v10 = v8;
  if ( v8 )
    memset_0(v8, 0, 0x50uLL);
  if ( v10 )
  {
    *(_QWORD *)v10 = &RefCountedObject::`vftable';
    v10[2] = 1;
    *(_QWORD *)v10 = &InputInfoValidator::`vftable';
    v10[4] = 0;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 3) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                             v9,
                             0LL,
                             0LL);
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    v10[4] = 1065353216;
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      (_QWORD *)v10 + 2,
      8LL);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 8);
  if ( v11 != v10 )
  {
    v12 = *((_QWORD *)this + 8);
    if ( v10 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *((_QWORD *)this + 8);
    }
    *((_QWORD *)this + 8) = v10;
    v11 = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = (_DWORD *)*((_QWORD *)this + 8);
    }
  }
  if ( !v11 )
  {
    v6 = 68LL;
    goto LABEL_12;
  }
  return 0LL;
}
