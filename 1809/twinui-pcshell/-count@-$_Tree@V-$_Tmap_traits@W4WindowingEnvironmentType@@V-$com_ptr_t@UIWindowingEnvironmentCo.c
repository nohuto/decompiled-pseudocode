/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBW4WindowingEnvironmentType@@@Z @ 0x18025608C
 * Callers:
 *     ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1802558C0 (-RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::count(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax
  char v3; // r11
  _QWORD *v4; // r9
  __int64 *v5; // rcx
  __int64 *v6; // r8
  int v7; // r10d
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD **)a1;
  v3 = 0;
  v4 = *(_QWORD **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 8) )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v8 >= *((_DWORD *)v5 + 8) )
      {
        v5 = (__int64 *)v5[2];
      }
      else
      {
        v4 = v5;
        v5 = (__int64 *)*v5;
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  v9 = 0LL;
  while ( v2 != v4 )
  {
    ++v9;
    if ( *((_BYTE *)v2 + 25) == v3 )
    {
      v10 = v2[2];
      if ( *(_BYTE *)(v10 + 25) == v3 )
      {
        v2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v10);
      }
      else
      {
        for ( i = v2[1]; *(_BYTE *)(i + 25) == v3 && v2 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v2 = (_QWORD *)i;
        v2 = (_QWORD *)i;
      }
    }
  }
  return v9;
}
