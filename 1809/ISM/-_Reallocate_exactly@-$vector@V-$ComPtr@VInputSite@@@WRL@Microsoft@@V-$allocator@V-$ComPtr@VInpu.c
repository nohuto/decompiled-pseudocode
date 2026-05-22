/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x18001E1AC
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  size_t v3; // rax
  size_t v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdx
  char *v9; // r10
  char *v10; // rcx
  signed __int64 v11; // r9
  __int64 v12; // rcx

  v3 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v3 = -1LL;
  if ( v3 < 0x1000 )
  {
    if ( v3 )
      v8 = (char *)operator new(v3);
    else
      v8 = 0LL;
  }
  else
  {
    v4 = v3 + 39;
    if ( v3 + 39 < v3 )
      v4 = -1LL;
    v5 = operator new(v4);
    if ( !v5 )
    {
      _o__invalid_parameter_noinfo_noreturn(v7, v6);
      __debugbreak();
    }
    v8 = (char *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v8 - 1) = v5;
  }
  try
  {
    v9 = *(char **)(a1 + 8);
    v10 = *(char **)a1;
    if ( *(char **)a1 != v9 )
    {
      v11 = v8 - v10;
      do
      {
        *(_QWORD *)&v10[v11] = 0LL;
        if ( &v10[v11] != v10 )
        {
          *(_QWORD *)&v10[v11] = *(_QWORD *)v10;
          *(_QWORD *)v10 = 0LL;
        }
        v10 += 8;
      }
      while ( v10 != v9 );
    }
    v12 = a1;
  }
  catch ( ... )
  {
    std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
      v12,
      v8,
      a2);
    throw;
  }
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array();
}
