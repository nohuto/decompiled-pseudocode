/*
 * XREFs of ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x1804004E0
 * Callers:
 *     _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x1803FF460 (_lambda_b1f3f535d4f0ba887956551c7aafec2d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801E3FB0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??0?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01@@Z @ 0x1803FFBE8 (--0-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::Animate(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  int v7; // r14d
  char v8; // r15
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v16; // [rsp+38h] [rbp-8h]
  _QWORD *v17; // [rsp+70h] [rbp+30h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(_QWORD **)(a1 + 40);
  v5 = (_QWORD *)*v4;
  v17 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v14,
      v5 + 4);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v6);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v17);
    v5 = v17;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  v7 = 0;
  v8 = 0;
  do
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v9 = *(_QWORD **)(a1 + 40);
    v10 = (_QWORD *)*v9;
    v17 = (_QWORD *)*v9;
    while ( v10 != v9 )
    {
      std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        &v14,
        v10 + 4);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 8LL))(v15, (unsigned int)v7, (unsigned int)a2);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v17);
      v10 = v17;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
    ++v7;
    if ( !a2 )
    {
LABEL_17:
      v8 = 1;
      continue;
    }
    if ( a2 > 0 )
    {
      if ( a2 <= 3 )
      {
        v13 = 0;
        if ( v7 <= 600 )
          v13 = a2;
        a2 = v13;
      }
      else if ( a2 == 4 )
      {
        a2 = 0;
        if ( v7 <= 200 )
          a2 = 4;
      }
      else if ( a2 == 5 )
      {
        goto LABEL_17;
      }
    }
  }
  while ( !wil::handle_wait(*(wil **)(a1 + 64), (void *)0x32) && !v8 );
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v11 = *(_QWORD **)(a1 + 40);
  v12 = (_QWORD *)*v11;
  v17 = (_QWORD *)*v11;
  while ( v12 != v11 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v14,
      v12 + 4);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, 0LL);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v17);
    v12 = v17;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
}
