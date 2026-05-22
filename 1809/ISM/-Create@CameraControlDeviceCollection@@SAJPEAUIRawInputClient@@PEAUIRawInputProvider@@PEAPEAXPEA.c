/*
 * XREFs of ?Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18006836C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180068F14 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CameraControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct CameraControlDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rbx
  HIDDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  HIDDeviceCollection *v12; // rsi
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  HIDDeviceCollection *v19; // [rsp+80h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = (HIDDeviceCollection *)malloc(0xB08uLL);
    v12 = v9;
    if ( v9 )
      memset_0(v9, 0, 0xB08uLL);
    v19 = v12;
    if ( v12 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v12, a1);
      *(_QWORD *)v12 = &CameraControlDeviceCollection::`vftable';
      *((_DWORD *)v12 + 690) = 0;
      *((_QWORD *)v12 + 346) = 0LL;
      *((_QWORD *)v12 + 347) = 0LL;
      *((_QWORD *)v12 + 346) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                                 v13,
                                 0LL,
                                 0LL);
      *((_QWORD *)v12 + 348) = 0LL;
      *((_QWORD *)v12 + 349) = 0LL;
      *((_QWORD *)v12 + 350) = 0LL;
      *((_DWORD *)v12 + 690) = 1065353216;
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
        (_QWORD *)v12 + 345,
        8LL);
      *((_QWORD *)v12 + 3) = a2;
    }
    v8 = v12;
    if ( v12 )
    {
      LODWORD(v19) = 786433;
      v16 = HIDDeviceCollection::Initialize(v12, v10, (struct _RIM_USAGE_ANDPAGE *const)&v19, v11, 0x28u, a3);
      v14 = v16;
      if ( v16 >= 0 )
        v14 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
          (const char *)(unsigned int)v16);
      if ( v14 >= 0 )
      {
        v8 = 0LL;
        *a4 = v12;
        v14 = 0;
        goto LABEL_18;
      }
      v15 = 42LL;
    }
    else
    {
      v14 = -2147024882;
      v15 = 40LL;
    }
  }
  else
  {
    v14 = -2147024809;
    v15 = 36LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
    (const char *)(unsigned int)v14);
LABEL_18:
  if ( v8 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  return (unsigned int)v14;
}
