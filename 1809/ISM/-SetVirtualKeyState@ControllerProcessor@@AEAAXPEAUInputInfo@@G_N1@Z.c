/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180036C44
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036630 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800369BC (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180036E30 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180037A48 (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ??$insert_or_assign@UActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180037B28 (--$insert_or_assign@UActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyProper.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        __int16 a3,
        char a4,
        bool a5)
{
  __int16 v5; // si
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // r9
  __int64 *i; // r8
  __int64 *v17; // rax
  bool v18; // bl
  __int64 v19; // rcx
  int v20; // eax
  bool v21[8]; // [rsp+20h] [rbp-E0h] BYREF
  _WORD v22[4]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v23[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  __int16 v27; // [rsp+64h] [rbp-9Ch]
  __int16 v28; // [rsp+86h] [rbp-7Ah]
  __int64 v29; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v5 = a3;
  v22[0] = a3;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  do
  {
    v11 = *((unsigned __int8 *)v22 + v7++);
    v8 = 0x100000001B3LL * (v11 ^ v8);
  }
  while ( v7 < 2 );
  v12 = *((_QWORD *)this + 10);
  v13 = v8 & *((_QWORD *)this + 13);
  v14 = (__int64 *)*((_QWORD *)this + 8);
  v15 = 2 * v13;
  for ( i = *(__int64 **)(v12 + 16 * v13); ; i = (__int64 *)*i )
  {
    v17 = *(__int64 **)(v12 + 8 * v15) == v14 ? (__int64 *)*((_QWORD *)this + 8) : **(__int64 ***)(v12 + 8 * v15 + 8);
    if ( i == v17 )
      break;
    if ( *((_WORD *)i + 8) == v5 )
      goto LABEL_11;
  }
  i = (__int64 *)*((_QWORD *)this + 8);
LABEL_11:
  if ( a4 )
  {
    if ( i != v14 )
      return;
    v21[0] = a5;
    v18 = !a5;
    ((void (__fastcall *)(char *, _BYTE *, _WORD *, bool *))std::unordered_map<unsigned short,ControllerProcessor::ActiveKeyProperties>::insert_or_assign<ControllerProcessor::ActiveKeyProperties>)(
      (char *)this + 56,
      v23,
      v22,
      v21);
    v5 = v22[0];
  }
  else
  {
    if ( i == v14 )
      return;
    v18 = *((_BYTE *)i + 18) == 0;
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
      (char *)this + 56,
      v23,
      i);
  }
  if ( v18 )
  {
    memset_0(v24, 0, 0x158uLL);
    v24[2] = *((_DWORD *)a2 + 2);
    v25 = *((_QWORD *)a2 + 2);
    v29 = *((_QWORD *)this + 218);
    v28 = 64;
    v26 = 344;
    v24[0] = 4;
    v27 = v5;
    if ( !a4 )
      v28 = 65;
    if ( *((_BYTE *)this + 4680) )
    {
      v19 = *((_QWORD *)this + 461);
      v24[1] = *((_DWORD *)this + 924);
      v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 24LL))(v19, v24);
      if ( v20 >= 0 )
        return;
    }
    else
    {
      v20 = -2147418113;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8EA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x180036E28LL);
  }
}
