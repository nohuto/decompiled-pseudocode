/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800C7430 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIdForNewComboButton@ButtonRecognizer@@AEAAIAEAUComboButtonRegistration@@@Z @ 0x1800C5F04 (-GetIdForNewComboButton@ButtonRecognizer@@AEAAIAEAUComboButtonRegistration@@@Z.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C6D5C (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800C701C (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocat_ea_1800C701C.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800C7200 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C77AC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree__ea_1800C77AC.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800C7814 (--$_Insert_hint@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUC.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        char a3,
        struct ButtonRegistrationABI *a4)
{
  __int64 v7; // r9
  __int64 v8; // r11
  __int128 i; // rax
  _DWORD *v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int IdForNewComboButton; // ecx
  __int64 v13; // rdx
  __int64 *v14; // rax
  int *v15; // rbx
  void *v16; // rax
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  void *v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  char v24; // [rsp+40h] [rbp-89h]
  int v25; // [rsp+44h] [rbp-85h] BYREF
  int *v26; // [rsp+48h] [rbp-81h] BYREF
  int *v27; // [rsp+50h] [rbp-79h] BYREF
  __int128 v28; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+68h] [rbp-61h]
  __int64 v30; // [rsp+70h] [rbp-59h]
  _DWORD v31[5]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v32[4]; // [rsp+8Ch] [rbp-3Dh] BYREF
  _BYTE v33[8]; // [rsp+90h] [rbp-39h] BYREF
  void *v34; // [rsp+98h] [rbp-31h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-29h]
  __int128 v36; // [rsp+B0h] [rbp-19h]
  __int128 v37; // [rsp+C0h] [rbp-9h]
  __int64 v38; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v30 = -2LL;
  v31[0] = *(_DWORD *)a4;
  v31[1] = *((_DWORD *)a4 + 1);
  v31[2] = *((_DWORD *)a4 + 2);
  v31[3] = *((_DWORD *)a4 + 3);
  v31[4] = *((_DWORD *)a4 + 4);
  v28 = 0LL;
  v29 = 0LL;
  std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>(&v28, v31, v32);
  v8 = v28;
  for ( i = v28; (_QWORD)i != *((_QWORD *)&v28 + 1); *(_QWORD *)&i = i + 4 )
  {
    if ( *(_DWORD *)i == 240 )
      break;
  }
  if ( (_QWORD)i != *((_QWORD *)&v28 + 1) )
  {
    v10 = (_DWORD *)(i + 4);
    v7 = 0LL;
    v11 = (unsigned __int64)(*((_QWORD *)&v28 + 1) - (i + 4) + 3) >> 2;
    if ( (unsigned __int64)(i + 4) > *((_QWORD *)&v28 + 1) )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        if ( *v10 != 240 )
        {
          *(_DWORD *)i = *v10;
          *(_QWORD *)&i = i + 4;
        }
        ++v10;
        ++v7;
      }
      while ( v7 != v11 );
    }
    if ( (_QWORD)i != *((_QWORD *)&i + 1) )
      *((_QWORD *)&i + 1) = i;
    *((_QWORD *)&v28 + 1) = *((_QWORD *)&i + 1);
  }
  if ( !a3 )
  {
    LOBYTE(v7) = v24;
    std::_Sort_unchecked<enum _Button *,std::less<void>>(v8, *((_QWORD *)&i + 1), (*((_QWORD *)&i + 1) - v8) >> 2, v7);
  }
  v34 = 0LL;
  v35 = 0LL;
  v33[0] = a3;
  std::vector<enum _Button>::operator=(&v34, &v28);
  v36 = *(_OWORD *)a2;
  v37 = *((_OWORD *)a2 + 1);
  v38 = *((_QWORD *)a2 + 4);
  IdForNewComboButton = ButtonRecognizer::GetIdForNewComboButton(this, (struct ComboButtonRegistration *)v33);
  v25 = IdForNewComboButton;
  if ( *((_QWORD *)this + 5) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
      (char *)this + 32,
      &v27,
      **((_QWORD **)this + 4));
    IdForNewComboButton = v25;
  }
  v13 = *((_QWORD *)this + 4);
  v14 = *(__int64 **)(v13 + 8);
  v15 = (int *)v13;
  if ( *((_BYTE *)v14 + 25) )
    goto LABEL_25;
  do
  {
    if ( *((_DWORD *)v14 + 8) >= IdForNewComboButton )
    {
      v15 = (int *)v14;
      v14 = (__int64 *)*v14;
    }
    else
    {
      v14 = (__int64 *)v14[2];
    }
  }
  while ( !*((_BYTE *)v14 + 25) );
  if ( v15 == (int *)v13 || IdForNewComboButton < v15[8] )
  {
LABEL_25:
    v26 = &v25;
    v16 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    (char *)this + 32,
                    v13,
                    &v26);
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_hint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
      (_DWORD)this + 32,
      v16);
    v15 = v26;
  }
  *((_BYTE *)v15 + 40) = v33[0];
  if ( v15 + 12 != (int *)&v34 )
    std::vector<enum _Button>::operator=(v15 + 12, &v34);
  *(_OWORD *)(v15 + 18) = v36;
  *(_OWORD *)(v15 + 22) = v37;
  *((_QWORD *)v15 + 13) = v38;
  v17 = v25;
  v26 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, struct tagMsgRoutingInfo *, int **))(**((_QWORD **)this + 20) + 96LL))(
          *((_QWORD *)this + 20),
          a2,
          &v26);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = 342LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_34;
  }
  v27 = v26;
  v18 = CoreUICallSend(*((_QWORD *)this + 24), &v27, 1LL, 1LL, 1, &unk_18015803F, v17);
  v19 = v18;
  if ( v18 < 0 )
  {
    v20 = 347LL;
    goto LABEL_30;
  }
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 20) + 144LL))(*((_QWORD *)this + 20), v26);
  v19 = 0;
LABEL_34:
  if ( (v19 & 0x80000000) == 0 )
    v19 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)v19);
  v21 = v34;
  if ( v34 )
  {
    v22 = (const struct std::nothrow_t *)((*((_QWORD *)&v35 + 1) - (_QWORD)v34) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      v22 = (const struct std::nothrow_t *)((char *)v22 + 39);
      v21 = (void *)*((_QWORD *)v34 - 1);
      if ( (unsigned __int64)((_BYTE *)v34 - (_BYTE *)v21 - 8) > 0x1F )
      {
LABEL_44:
        _o__invalid_parameter_noinfo_noreturn(v21, v22);
LABEL_45:
        operator delete(v21, v22);
        return v19;
      }
    }
    operator delete(v21, v22);
    v34 = 0LL;
    v35 = 0LL;
  }
  v21 = (void *)v28;
  if ( (_QWORD)v28 )
  {
    v22 = (const struct std::nothrow_t *)((v29 - v28) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v22 < 0x1000 )
      goto LABEL_45;
    v22 = (const struct std::nothrow_t *)((char *)v22 + 39);
    v21 = *(void **)(v28 - 8);
    if ( (unsigned __int64)(v28 - (_QWORD)v21 - 8) <= 0x1F )
      goto LABEL_45;
    goto LABEL_44;
  }
  return v19;
}
