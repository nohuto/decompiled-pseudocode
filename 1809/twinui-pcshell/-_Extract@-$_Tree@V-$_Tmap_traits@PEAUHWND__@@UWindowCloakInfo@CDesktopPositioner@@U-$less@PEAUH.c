/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@@Z @ 0x18034036C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@0@Z @ 0x1803414D0 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@Z @ 0x18007CDD4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUH.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@Z @ 0x18007CE88 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUH.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v4; // r11
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 **v14; // rcx
  char v15; // dl
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = (__int64 *)a2;
  v4 = (__int64 *)a2;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v5 = *(_QWORD *)(a2 + 16);
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25) && v2 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v2 = (__int64 *)i;
      v2 = (__int64 *)i;
    }
    else
    {
      v2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
    }
  }
  v7 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_13;
  if ( *(_BYTE *)(v7 + 25) )
  {
    v7 = *v4;
LABEL_13:
    v8 = v4[1];
    if ( !*(_BYTE *)(v7 + 25) )
      *(_QWORD *)(v7 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v4 )
    {
      *(_QWORD *)(*a1 + 8LL) = v7;
    }
    else if ( *(__int64 **)v8 == v4 )
    {
      *(_QWORD *)v8 = v7;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v7;
    }
    v9 = (_QWORD *)*a1;
    v10 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v4 )
    {
      if ( *(_BYTE *)(v7 + 25) )
        v11 = (_QWORD *)v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v7);
      *v9 = v11;
      v9 = (_QWORD *)*a1;
      v10 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v10[2] == v4 )
    {
      if ( *(_BYTE *)(v7 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v13 = *(_QWORD *)(v7 + 16);
        v12 = v7;
        if ( !*(_BYTE *)(v13 + 25) )
        {
          do
          {
            v12 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    goto LABEL_43;
  }
  v7 = v2[2];
  if ( v2 == v4 )
    goto LABEL_13;
  *(_QWORD *)(*v4 + 8) = v2;
  *v2 = *v4;
  if ( v2 == (__int64 *)v4[2] )
  {
    v8 = (__int64)v2;
  }
  else
  {
    v8 = v2[1];
    if ( !*(_BYTE *)(v7 + 25) )
      *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)v8 = v7;
    v2[2] = v4[2];
    *(_QWORD *)(v4[2] + 8) = v2;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v4 )
  {
    *(_QWORD *)(*a1 + 8LL) = v2;
  }
  else
  {
    v14 = (__int64 **)v4[1];
    if ( *v14 == v4 )
      *v14 = v2;
    else
      v14[2] = v2;
  }
  v2[1] = v4[1];
  v15 = *((_BYTE *)v2 + 24);
  *((_BYTE *)v2 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v15;
LABEL_43:
  if ( *((_BYTE *)v4 + 24) == 1 )
  {
    if ( v7 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v8;
        if ( *(_BYTE *)(v7 + 24) != 1 )
          break;
        v17 = *(_BYTE **)v8;
        if ( v7 == *(_QWORD *)v8 )
        {
          v17 = *(_BYTE **)(v8 + 16);
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Lrotate(
              (__int64)a1,
              v8);
            v17 = *(_BYTE **)(v8 + 16);
          }
          if ( v17[25] )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
              v17[24] = 0;
              std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Rrotate(
                (__int64)a1,
                v17);
              v17 = *(_BYTE **)(v8 + 16);
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v17 = *(_BYTE **)v8;
          }
          if ( v17[25] )
            goto LABEL_61;
          v18 = *((_QWORD *)v17 + 2);
          if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
            {
              *(_BYTE *)(v18 + 24) = 1;
              v17[24] = 0;
              std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Lrotate(
                (__int64)a1,
                (__int64)v17);
              v17 = *(_BYTE **)v8;
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v17[24] = 0;
LABEL_61:
        v7 = v16;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v7 + 24) = 1;
  }
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v4;
}
