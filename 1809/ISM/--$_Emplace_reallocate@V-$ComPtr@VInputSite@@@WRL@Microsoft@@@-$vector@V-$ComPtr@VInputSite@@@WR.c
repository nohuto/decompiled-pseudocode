/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001E7B0
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K1@Z @ 0x18001E2E0 (-_Change_array@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void *v18; // rax
  unsigned __int64 v19; // r15
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  _QWORD *v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 result; // rax
  __int64 v28; // rcx
  __int64 *v29; // [rsp+20h] [rbp-38h]
  _QWORD *v30; // [rsp+60h] [rbp+8h]
  __int64 *v31; // [rsp+68h] [rbp+10h]

  v4 = a2;
  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
    {
      v18 = operator new(v12);
      v17 = (unsigned __int64)v18;
    }
    else
    {
      v17 = 0LL;
    }
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
      _o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
    }
    v17 = ((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v17 - 8) = v14;
  }
  v30 = (_QWORD *)v17;
  v19 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = (_QWORD *)(v19 + v17);
  v29 = (__int64 *)(v19 + v17 + 8);
  try
  {
    *v20 = 0LL;
    if ( v20 != a3 )
    {
      *v20 = *a3;
      *a3 = 0LL;
    }
    v31 = (__int64 *)(v19 + v17);
    v21 = (_QWORD *)a1[1];
    v22 = (_QWORD *)*a1;
    if ( v4 == v21 )
    {
      if ( v22 != v21 )
      {
        v23 = v17 - (_QWORD)v22;
        do
        {
          *(_QWORD *)((char *)v22 + v23) = 0LL;
          if ( (_QWORD *)((char *)v22 + v23) != v22 )
          {
            *(_QWORD *)((char *)v22 + v23) = *v22;
            *v22 = 0LL;
          }
          ++v22;
        }
        while ( v22 != v21 );
      }
    }
    else
    {
      if ( v22 != v4 )
      {
        v24 = v17 - (_QWORD)v22;
        do
        {
          *(_QWORD *)((char *)v22 + v24) = 0LL;
          if ( (_QWORD *)((char *)v22 + v24) != v22 )
          {
            *(_QWORD *)((char *)v22 + v24) = *v22;
            *v22 = 0LL;
          }
          ++v22;
        }
        while ( v22 != v4 );
        v21 = (_QWORD *)a1[1];
      }
      v31 = (__int64 *)v17;
      if ( v4 != v21 )
      {
        v25 = v17 + v19 - (_QWORD)v4 + 8;
        do
        {
          *(_QWORD *)((char *)v4 + v25) = 0LL;
          if ( (_QWORD *)((char *)v4 + v25) != v4 )
          {
            *(_QWORD *)((char *)v4 + v25) = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v21 );
      }
    }
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array((__int64)a1, v17, v8, v11);
    result = v19 + *a1;
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Destroy(v26, v31, v29);
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v28,
      v30,
      v11);
    throw;
  }
  return result;
}
