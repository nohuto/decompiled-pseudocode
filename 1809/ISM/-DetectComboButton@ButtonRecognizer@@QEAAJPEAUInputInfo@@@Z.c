/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800C5710 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18000F68C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800C60C8 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800C6268 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800C64C8 (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C6D5C (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v2; // r13d
  int v4; // ecx
  char v5; // r8
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rbx
  _DWORD **v9; // r12
  int v10; // esi
  char *v11; // rdx
  _DWORD *i; // r14
  _DWORD *v13; // rax
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  char *v16; // rdx
  bool v17; // zf
  __int64 v18; // rbx
  int v19; // esi
  __int64 v20; // rdx
  char *v21; // rdx
  _DWORD *j; // r14
  _DWORD *v23; // rax
  unsigned __int64 v24; // rcx
  size_t v25; // rbx
  char *v26; // rdx
  __int64 *v27; // rax
  __int64 **v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rdx
  char IsComboButtonCandidate; // al
  char *v33; // rdx
  __int64 *v34; // rax
  __int64 **v35; // rax
  __int64 *v36; // r14
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 *v41; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)a2 + 130);
  v4 = *((_DWORD *)this + 6);
  v5 = *((_BYTE *)a2 + 524);
  LODWORD(v41) = v2;
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0LL;
      v8 = 0LL;
      v9 = (_DWORD **)((char *)this + 48);
      v10 = 3;
      if ( v5 )
      {
        v16 = (char *)*((_QWORD *)this + 7);
        if ( *((char **)this + 8) == v16 )
        {
          std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
            (_QWORD *)this + 6,
            v16,
            &v41);
        }
        else
        {
          *(_DWORD *)v16 = v2;
          *((_QWORD *)this + 7) += 4LL;
        }
      }
      else
      {
        v11 = (char *)*((_QWORD *)this + 7);
        for ( i = *v9; i != (_DWORD *)v11 && *i != v2; ++i )
          ;
        if ( i != (_DWORD *)v11 )
        {
          v13 = i + 1;
          v14 = (unsigned __int64)(v11 - (char *)(i + 1) + 3) >> 2;
          if ( i + 1 > (_DWORD *)v11 )
            v14 = 0LL;
          if ( v14 )
          {
            do
            {
              if ( *v13 != v2 )
                *i++ = *v13;
              ++v13;
              ++v8;
            }
            while ( v8 != v14 );
          }
          if ( i != (_DWORD *)v11 )
          {
            v15 = *((_QWORD *)this + 7) - (_QWORD)v11;
            memmove_0(i, v11, v15);
            *((_QWORD *)this + 7) = (char *)i + v15;
          }
        }
      }
      v17 = *v9 == *((_DWORD **)this + 7);
      goto LABEL_22;
    }
    v18 = 0LL;
    *((_BYTE *)this + 17) = 1;
    if ( !v5 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v19 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v19 < 0 )
        {
          v20 = 484LL;
          goto LABEL_75;
        }
        *((_BYTE *)this + 16) = 1;
      }
      v21 = (char *)*((_QWORD *)this + 7);
      for ( j = (_DWORD *)*((_QWORD *)this + 6); j != (_DWORD *)v21 && *j != v2; ++j )
        ;
      v10 = 3;
      if ( j != (_DWORD *)v21 )
      {
        v23 = j + 1;
        v24 = (unsigned __int64)(v21 - (char *)(j + 1) + 3) >> 2;
        if ( j + 1 > (_DWORD *)v21 )
          v24 = 0LL;
        if ( v24 )
        {
          do
          {
            if ( *v23 != v2 )
              *j++ = *v23;
            ++v23;
            ++v18;
          }
          while ( v18 != v24 );
        }
        if ( j != (_DWORD *)v21 )
        {
          v25 = *((_QWORD *)this + 7) - (_QWORD)v21;
          memmove_0(j, v21, v25);
          *((_QWORD *)this + 7) = (char *)j + v25;
        }
      }
      v17 = *((_QWORD *)this + 6) == *((_QWORD *)this + 7);
LABEL_22:
      if ( v17 )
        v10 = 1;
      goto LABEL_57;
    }
    *((_BYTE *)this + 18) = 0;
    v26 = (char *)*((_QWORD *)this + 7);
    if ( *((char **)this + 8) == v26 )
    {
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        (_QWORD *)this + 6,
        v26,
        &v41);
    }
    else
    {
      *(_DWORD *)v26 = v2;
      *((_QWORD *)this + 7) += 4LL;
    }
    ButtonRecognizer::FindExactComboButtonMatch((__int64)this, &v41, (_QWORD *)this + 6);
    v27 = v41;
    if ( v41 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v41 = v27;
      v28 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v41);
      v29 = *v28;
      v30 = (__int64)(*v28 + 6);
      *((_DWORD *)this + 18) = *((_DWORD *)*v28 + 8);
      *((_BYTE *)this + 80) = *((_BYTE *)v29 + 40);
      if ( (__int64 *)((char *)this + 88) != v29 + 6 )
        std::vector<enum _Button>::operator=((char *)this + 88, v30);
      *((_OWORD *)this + 7) = *(_OWORD *)(v29 + 9);
      *((_OWORD *)this + 8) = *(_OWORD *)(v29 + 11);
      *((_QWORD *)this + 18) = v29[13];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate((__int64)this, (char **)this + 6);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v19 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v19 < 0 )
        {
          v20 = 509LL;
          goto LABEL_75;
        }
        goto LABEL_55;
      }
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_56;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
            *((_QWORD *)this + 19),
            10000000 * qword_180192BE8,
            0LL);
    if ( v19 < 0 )
    {
      v20 = 515LL;
      goto LABEL_75;
    }
    v10 = 2;
LABEL_57:
    *((_DWORD *)this + 6) = v10;
    return 0LL;
  }
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  if ( !v5 )
    return 0LL;
  v33 = (char *)*((_QWORD *)this + 7);
  if ( *((char **)this + 8) == v33 )
  {
    std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
      (_QWORD *)this + 6,
      v33,
      &v41);
  }
  else
  {
    *(_DWORD *)v33 = v2;
    *((_QWORD *)this + 7) += 4LL;
  }
  ButtonRecognizer::FindExactComboButtonMatch((__int64)this, &v41, (_QWORD *)this + 6);
  v34 = v41;
  if ( v41 != **((__int64 ***)this + 4) )
  {
    *((_BYTE *)this + 18) = 1;
    v41 = v34;
    v35 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v41);
    v36 = *v35;
    v37 = (__int64)(*v35 + 6);
    *((_DWORD *)this + 18) = *((_DWORD *)*v35 + 8);
    *((_BYTE *)this + 80) = *((_BYTE *)v36 + 40);
    if ( (__int64 *)((char *)this + 88) != v36 + 6 )
      std::vector<enum _Button>::operator=((char *)this + 88, v37);
    *((_OWORD *)this + 7) = *(_OWORD *)(v36 + 9);
    *((_OWORD *)this + 8) = *(_OWORD *)(v36 + 11);
    *((_QWORD *)this + 18) = v36[13];
  }
  v38 = ButtonRecognizer::IsComboButtonCandidate((__int64)this, (char **)this + 6);
  if ( *((_BYTE *)this + 18) )
  {
    if ( !v38 )
    {
      v19 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
      if ( v19 < 0 )
      {
        v20 = 460LL;
        goto LABEL_75;
      }
LABEL_55:
      *((_BYTE *)this + 16) = 1;
LABEL_56:
      v10 = 3;
      goto LABEL_57;
    }
  }
  else if ( !v38 )
  {
    goto LABEL_56;
  }
  v39 = *((_QWORD *)this + 19);
  *((_BYTE *)this + 17) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v39 + 80LL))(
          v39,
          10000000 * qword_180192BE8,
          0LL);
  if ( v19 >= 0 )
  {
    *((_DWORD *)this + 6) = 2;
    return 0LL;
  }
  v20 = 468LL;
LABEL_75:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
