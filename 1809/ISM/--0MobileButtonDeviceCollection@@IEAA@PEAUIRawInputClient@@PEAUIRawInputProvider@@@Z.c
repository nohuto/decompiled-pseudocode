/*
 * XREFs of ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180065010
 * Callers:
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180064EB4 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180068F14 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::MobileButtonDeviceCollection(
        MobileButtonDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  *((_DWORD *)this + 690) = 0;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 346) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                              v5,
                              0LL,
                              0LL);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_DWORD *)this + 690) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 345,
    8LL);
  *((_DWORD *)this + 706) = 0;
  *((_QWORD *)this + 354) = 0LL;
  *((_QWORD *)this + 355) = 0LL;
  *((_QWORD *)this + 354) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                              v6,
                              0LL,
                              0LL);
  *((_QWORD *)this + 356) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_DWORD *)this + 706) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 353,
    8LL);
  *((_QWORD *)this + 361) = 0LL;
  *((_QWORD *)this + 3) = a3;
  return this;
}
