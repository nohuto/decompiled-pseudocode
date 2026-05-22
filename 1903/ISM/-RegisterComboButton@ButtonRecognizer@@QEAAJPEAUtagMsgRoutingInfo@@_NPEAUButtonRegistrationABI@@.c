/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800FDD8C
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800FDFA0 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?erase@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@0@Z @ 0x1800CE2D8 (-erase@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FC9F4 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FCAF4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800FCC1C (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1800FCCE8 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1800FCDEC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FD0A0 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1800FDB54 (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800FE25C (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocat_ea_1800FE25C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        char a3,
        struct ButtonRegistrationABI *a4)
{
  void **v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // [rsp+28h] [rbp-79h]
  unsigned int v13; // [rsp+2Ch] [rbp-75h] BYREF
  __int64 v14; // [rsp+30h] [rbp-71h] BYREF
  __int128 v15; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h]
  _QWORD v17[3]; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v18[5]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v19[12]; // [rsp+7Ch] [rbp-25h] BYREF
  _BYTE v20[8]; // [rsp+88h] [rbp-19h] BYREF
  void *v21; // [rsp+90h] [rbp-11h] BYREF
  __int128 v22; // [rsp+98h] [rbp-9h]
  __int128 v23; // [rsp+A8h] [rbp+7h]
  __int128 v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v17[2] = -2LL;
  v18[0] = *(_DWORD *)a4;
  v18[1] = *((_DWORD *)a4 + 1);
  v18[2] = *((_DWORD *)a4 + 2);
  v18[3] = *((_DWORD *)a4 + 3);
  v18[4] = *((_DWORD *)a4 + 4);
  v15 = 0LL;
  v16 = 0LL;
  std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>((__int64)&v15, v18, (__int64)v19);
  LODWORD(v14) = 240;
  v7 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                  v17,
                  (_DWORD *)v15,
                  *((unsigned __int64 *)&v15 + 1),
                  &v14);
  std::vector<CursorDeviceInfo>::erase((__int64)&v15, &v14, *v7, *((void **)&v15 + 1));
  if ( !a3 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>(
      (int *)v15,
      *((int **)&v15 + 1),
      (__int64)(*((_QWORD *)&v15 + 1) - v15) >> 2,
      v12);
  v21 = 0LL;
  v22 = 0LL;
  v20[0] = a3;
  std::vector<enum _Button>::operator=(&v21, (__int64)&v15);
  v23 = *(_OWORD *)a2;
  v24 = *((_OWORD *)a2 + 1);
  v25 = *((_QWORD *)a2 + 4);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    &v14,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v20);
  if ( v14 == *((_QWORD *)this + 4) )
  {
    v13 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v13 + 1;
  }
  else
  {
    v13 = *(_DWORD *)(v14 + 32);
  }
  if ( *((_QWORD *)this + 5) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
      (char *)this + 32,
      v17,
      **((_QWORD **)this + 4));
  std::map<unsigned int,ComboButtonRegistration>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 4,
    (__int64)v17,
    &v13);
  v8 = v17[0];
  *(_BYTE *)(v17[0] + 40LL) = v20[0];
  std::vector<enum _Button>::operator=((void **)(v8 + 48), (__int64)&v21);
  *(_OWORD *)(v8 + 72) = v23;
  *(_OWORD *)(v8 + 88) = v24;
  *(_QWORD *)(v8 + 104) = v25;
  v9 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v13, a2);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v9);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v21);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v15);
  return v10;
}
