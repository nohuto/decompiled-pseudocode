/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800FD278
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FBE60 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@0@Z @ 0x1800CE2D8 (-erase@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1800FCCBC (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1800FCDEC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FD0A0 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x1800FD0CC (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800FD598 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800FD95C (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800FDC2C (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v3; // ecx
  char v4; // r8
  int v5; // ecx
  int v6; // ecx
  _DWORD **v7; // r15
  void *v8; // rbx
  void **v9; // rax
  int v10; // r14d
  bool v11; // zf
  int v12; // ebx
  __int64 v13; // rdx
  void *v14; // rbx
  void **v15; // rax
  __int64 *v16; // rbx
  char v17; // al
  __int64 *v18; // rbx
  char IsComboButtonCandidate; // al
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 *v23; // [rsp+50h] [rbp+30h] BYREF
  __int64 v24; // [rsp+58h] [rbp+38h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)a2 + 68);
  LODWORD(v23) = *((_DWORD *)a2 + 16);
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v4 )
      return 0LL;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, (unsigned int *)&v23);
    ButtonRecognizer::FindExactComboButtonMatch(this, &v23, (char *)this + 48);
    if ( v23 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v18 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(&v23);
      *((_DWORD *)this + 18) = *(_DWORD *)v18;
      *((_BYTE *)this + 80) = *((_BYTE *)v18 + 8);
      std::vector<enum _Button>::operator=((void **)this + 11, (__int64)(v18 + 2));
      *((_OWORD *)this + 7) = *(_OWORD *)(v18 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v18 + 7);
      *((_QWORD *)this + 18) = v18[9];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v12 < 0 )
        {
          v13 = 460LL;
          goto LABEL_35;
        }
        *((_BYTE *)this + 16) = 1;
LABEL_37:
        *((_DWORD *)this + 6) = 3;
        return 0LL;
      }
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_37;
    }
    v21 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v21 + 80LL))(
            v21,
            10000000 * qword_1801E03F8,
            0LL);
    if ( v12 < 0 )
    {
      v13 = 468LL;
      goto LABEL_35;
    }
    goto LABEL_42;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = 1;
    *((_BYTE *)this + 17) = 1;
    if ( !v4 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v12 < 0 )
        {
          v13 = 484LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\li"
                     "b\\buttonrecognizer.cpp",
            (const char *)(unsigned int)v12);
          return (unsigned int)v12;
        }
        *((_BYTE *)this + 16) = 1;
      }
      v14 = (void *)*((_QWORD *)this + 7);
      v15 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                       &v24,
                       *((_DWORD **)this + 6),
                       (unsigned __int64)v14,
                       &v23);
      std::vector<CursorDeviceInfo>::erase((__int64)this + 48, &v23, *v15, v14);
      v11 = *((_QWORD *)this + 6) == *((_QWORD *)this + 7);
LABEL_14:
      if ( !v11 )
        v10 = 3;
      goto LABEL_43;
    }
    *((_BYTE *)this + 18) = 0;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, (unsigned int *)&v23);
    ButtonRecognizer::FindExactComboButtonMatch(this, &v23, (char *)this + 48);
    if ( v23 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v16 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(&v23);
      *((_DWORD *)this + 18) = *(_DWORD *)v16;
      *((_BYTE *)this + 80) = *((_BYTE *)v16 + 8);
      std::vector<enum _Button>::operator=((void **)this + 11, (__int64)(v16 + 2));
      *((_OWORD *)this + 7) = *(_OWORD *)(v16 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v16 + 7);
      *((_QWORD *)this + 18) = v16[9];
    }
    v17 = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !v17 )
      {
        v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v12 < 0 )
        {
          v13 = 509LL;
          goto LABEL_35;
        }
        *((_BYTE *)this + 16) = 1;
        goto LABEL_24;
      }
    }
    else if ( !v17 )
    {
LABEL_24:
      v10 = 3;
LABEL_43:
      *((_DWORD *)this + 6) = v10;
      return 0LL;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
            *((_QWORD *)this + 19),
            10000000 * qword_1801E03F8,
            0LL);
    if ( v12 < 0 )
    {
      v13 = 515LL;
      goto LABEL_35;
    }
LABEL_42:
    v10 = 2;
    goto LABEL_43;
  }
  if ( v6 == 1 )
  {
    v7 = (_DWORD **)((char *)this + 48);
    if ( v4 )
    {
      std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, (unsigned int *)&v23);
    }
    else
    {
      v8 = (void *)*((_QWORD *)this + 7);
      v9 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
                      &v24,
                      *v7,
                      (unsigned __int64)v8,
                      &v23);
      std::vector<CursorDeviceInfo>::erase((__int64)this + 48, &v23, *v9, v8);
    }
    v10 = 1;
    v11 = *v7 == *((_DWORD **)this + 7);
    goto LABEL_14;
  }
  return 0LL;
}
