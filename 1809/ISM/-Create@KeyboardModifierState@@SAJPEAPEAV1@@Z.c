/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180103F00
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800ED450 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     ??$insert_or_assign@H@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x1801042D0 (--$insert_or_assign@H@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CB.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  struct KeyboardModifierState *v2; // rsi
  struct KeyboardModifierState *v3; // rax
  __int64 v4; // rcx
  int v6; // [rsp+28h] [rbp-99h] BYREF
  int v7; // [rsp+2Ch] [rbp-95h] BYREF
  int v8; // [rsp+30h] [rbp-91h] BYREF
  int v9; // [rsp+34h] [rbp-8Dh] BYREF
  int v10; // [rsp+38h] [rbp-89h] BYREF
  int v11; // [rsp+3Ch] [rbp-85h] BYREF
  int v12; // [rsp+40h] [rbp-81h] BYREF
  int v13; // [rsp+44h] [rbp-7Dh] BYREF
  int v14; // [rsp+48h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-75h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  int v17; // [rsp+54h] [rbp-6Dh] BYREF
  int v18; // [rsp+58h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-61h]
  struct KeyboardModifierState *v20; // [rsp+68h] [rbp-59h]
  _BYTE v21[16]; // [rsp+70h] [rbp-51h] BYREF
  _BYTE v22[16]; // [rsp+80h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v24[16]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v25[16]; // [rsp+B0h] [rbp-11h] BYREF
  _BYTE v26[16]; // [rsp+C0h] [rbp-1h] BYREF
  _BYTE v27[16]; // [rsp+D0h] [rbp+Fh] BYREF
  _BYTE v28[56]; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  char *v30; // [rsp+130h] [rbp+6Fh] BYREF
  char *v31; // [rsp+138h] [rbp+77h] BYREF
  int v32; // [rsp+140h] [rbp+7Fh] BYREF

  v19 = -2LL;
  if ( KeyboardModifierState::s_pKeyboardModifierState )
  {
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)KeyboardModifierState::s_pKeyboardModifierState
                                                           + 8LL))(KeyboardModifierState::s_pKeyboardModifierState);
    v2 = KeyboardModifierState::s_pKeyboardModifierState;
  }
  else
  {
    v3 = (struct KeyboardModifierState *)malloc(0x58uLL);
    v2 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x58uLL);
    v20 = v2;
    if ( v2 )
    {
      *(_QWORD *)v2 = &RefCountedObject::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *(_QWORD *)v2 = &KeyboardModifierState::`vftable';
      v30 = (char *)v2 + 16;
      *((_DWORD *)v2 + 4) = 0;
      v31 = (char *)v2 + 24;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *((_QWORD *)v2 + 3) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                              v4,
                              0LL,
                              0LL);
      *((_QWORD *)v2 + 5) = 0LL;
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_DWORD *)v2 + 4) = 1065353216;
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
        (_QWORD *)v2 + 2,
        8LL);
      KeyboardModifierState::s_pKeyboardModifierState = 0LL;
      *((_DWORD *)v2 + 20) = 0;
    }
    else
    {
      v2 = 0LL;
    }
    if ( !v2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keybo"
                 "ardmodifierstate.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    LODWORD(v30) = 0;
    LODWORD(v31) = 1;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v21, &v31, &v30);
    v32 = 0;
    v6 = 2;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v22, &v6, &v32);
    v7 = 0;
    v8 = 4;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v23, &v8, &v7);
    v9 = 0;
    v10 = 8;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v24, &v10, &v9);
    v11 = 0;
    v12 = 16;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v25, &v12, &v11);
    v13 = 0;
    v14 = 32;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v26, &v14, &v13);
    v15 = 0;
    v16 = 64;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v27, &v16, &v15);
    v17 = 0;
    v18 = 128;
    std::unordered_map<unsigned long,unsigned long>::insert_or_assign<int>((char *)v2 + 16, v28, &v18, &v17);
    KeyboardModifierState::s_pKeyboardModifierState = v2;
  }
  *a1 = v2;
  return 0LL;
}
