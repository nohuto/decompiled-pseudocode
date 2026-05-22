/*
 * XREFs of ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600
 * Callers:
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180084240 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1800CDF68 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800D2834 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x180103AF8 (-Initialize@TouchProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@2@PEAU32@0@Z @ 0x180055D28 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=6
PointerInfoAdapter *__fastcall PointerInfoAdapter::PointerInfoAdapter(
        PointerInfoAdapter *this,
        struct IPointerInfoAdapterClient *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &PointerInfoAdapter::`vftable'{for `IInputClient'};
  *((_QWORD *)this + 1) = &PointerInfoAdapter::`vftable'{for `RefCountedObject'};
  v4 = (_QWORD *)((char *)this + 32);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>::_Buynode0(
                            this,
                            0LL,
                            0LL);
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v4,
    8LL);
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                             v5,
                             0LL,
                             0LL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 28) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 14,
    8LL);
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 104) = 1;
  return this;
}
