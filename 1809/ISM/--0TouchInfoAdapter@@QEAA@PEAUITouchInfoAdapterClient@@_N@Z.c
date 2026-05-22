/*
 * XREFs of ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180104394
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1800CCB48 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
TouchInfoAdapter *__fastcall TouchInfoAdapter::TouchInfoAdapter(
        TouchInfoAdapter *this,
        struct ITouchInfoAdapterClient *a2)
{
  _QWORD *v4; // rdi

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  v4 = (_QWORD *)((char *)this + 40);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v4,
    8LL);
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 112, 0, 0x248uLL);
  *((_BYTE *)this + 696) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 54) = 0;
  return this;
}
