/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077840
 * Callers:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180077D1C (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180077D48 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z @ 0x180077E0C (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18007440C (--$emplace@AEBGUActiveKeyProperties@ControllerProcessor@@@-$_Hash@V-$_Umap_traits@GUActiveKeyPro.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007628C (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800762B8 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077A20 (-ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180078FB0 (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@AEBG@Z @ 0x1800791E4 (-lower_bound@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compar.c)
 */

void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        __int16 a3,
        char a4,
        bool a5)
{
  char *v5; // rdi
  __int16 v6; // r15
  __int64 v10; // rax
  bool v11; // bl
  char v12; // bl
  ControllerProcessor *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  bool v17[8]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  __int16 v22; // [rsp+64h] [rbp-9Ch]
  __int16 v23; // [rsp+86h] [rbp-7Ah]
  __int64 v24; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v5 = (char *)this + 80;
  LOWORD(v16) = a3;
  v6 = a3;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::lower_bound(
    (char *)this + 80,
    v18,
    &v16);
  v10 = *((_QWORD *)this + 11);
  if ( a4 )
  {
    if ( v18[0] != v10 )
      return;
    v17[0] = a5;
    v11 = !a5;
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::lower_bound(
      v5,
      v18,
      &v16);
    if ( v18[0] == *((_QWORD *)v5 + 1) )
    {
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::emplace<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
        (__int64)v5,
        (__int64)v18,
        &v16,
        v17);
      v6 = v16;
    }
    else
    {
      *(_BYTE *)(v18[0] + 18LL) = a5;
    }
  }
  else
  {
    if ( v18[0] == v10 )
      return;
    v12 = *(_BYTE *)(v18[0] + 18LL);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
      v5,
      v18,
      v18[0]);
    v11 = v12 == 0;
  }
  if ( v11 )
  {
    memset_0(v19, 0, 0x160uLL);
    v19[2] = *((_DWORD *)a2 + 2);
    v20 = *((_QWORD *)a2 + 2);
    v24 = *((_QWORD *)this + 275);
    v23 = 64;
    v21 = 352;
    v19[0] = 4;
    v22 = v6;
    if ( !a4 )
      v23 = 65;
    if ( ControllerProcessor::ShouldInjectViaSynthesize(v13) )
    {
      v14 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 9488), (struct InputInfo *)v19);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2311LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
    }
    else
    {
      v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 4736), (struct InputInfo *)v19);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2315LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
    }
  }
}
