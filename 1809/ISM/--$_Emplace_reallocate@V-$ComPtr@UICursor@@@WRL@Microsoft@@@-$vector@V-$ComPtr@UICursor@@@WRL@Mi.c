/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18008A218 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x1800C2248 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18010054C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801072D0 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  char *v18; // rcx
  char *v19; // rdx
  char *v20; // rcx
  signed __int64 v21; // r9
  signed __int64 v22; // r8
  __int64 v23; // r8
  char *v24; // rbx
  char *v25; // r15
  __int64 v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 *v30; // [rsp+28h] [rbp-40h]
  __int64 *v31; // [rsp+78h] [rbp+10h]
  __int64 v32; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v32 = v11;
  v29 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (char *)operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_49;
    v17 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v17 - 1) = v14;
  }
  v18 = &v17[8 * v6];
  v30 = (__int64 *)(v18 + 8);
  try
  {
    *(_QWORD *)v18 = 0LL;
    if ( v18 != a3 )
    {
      *(_QWORD *)v18 = *(_QWORD *)a3;
      *(_QWORD *)a3 = 0LL;
    }
    v31 = (__int64 *)&v17[8 * v6];
    v19 = a1[1];
    v20 = *a1;
    if ( v4 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = v17 - v20;
        do
        {
          *(_QWORD *)&v20[v21] = 0LL;
          if ( &v20[v21] != v20 )
          {
            *(_QWORD *)&v20[v21] = *(_QWORD *)v20;
            *(_QWORD *)v20 = 0LL;
          }
          v20 += 8;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      if ( v20 != v4 )
      {
        v22 = v17 - v20;
        do
        {
          *(_QWORD *)&v20[v22] = 0LL;
          if ( &v20[v22] != v20 )
          {
            *(_QWORD *)&v20[v22] = *(_QWORD *)v20;
            *(_QWORD *)v20 = 0LL;
          }
          v20 += 8;
        }
        while ( v20 != v4 );
        v19 = a1[1];
      }
      v31 = (__int64 *)v17;
      if ( v4 != v19 )
      {
        v23 = v17 - v4 + 8 * (v6 + 1);
        do
        {
          v20 = &v4[v23];
          *(_QWORD *)&v4[v23] = 0LL;
          if ( &v4[v23] != v4 )
          {
            *(_QWORD *)v20 = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v19 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Destroy((__int64)v20, v31, v30);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v28,
      v17,
      v32);
    throw;
  }
  v24 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    if ( v24 != v25 )
    {
      do
      {
        v26 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 )
        {
          *(_QWORD *)v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v24 += 8;
      }
      while ( v24 != v25 );
      v24 = *a1;
    }
    v15 = (const struct std::nothrow_t *)((a1[2] - v24) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_47;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *((_QWORD *)v24 - 1);
    if ( (unsigned __int64)&v24[-v16 - 8] <= 0x1F )
    {
      v24 = (char *)*((_QWORD *)v24 - 1);
LABEL_47:
      operator delete(v24, v15);
      goto LABEL_48;
    }
LABEL_49:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_48:
  *a1 = v17;
  a1[1] = &v17[8 * v8];
  a1[2] = &v17[v29];
  return (__int64)&(*a1)[8 * v6];
}
