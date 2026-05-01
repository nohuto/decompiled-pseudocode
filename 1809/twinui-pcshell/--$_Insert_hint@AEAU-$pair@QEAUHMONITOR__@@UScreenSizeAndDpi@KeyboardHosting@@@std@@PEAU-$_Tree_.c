/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x1802CFE04
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1802D01F0 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@1@Z @ 0x1802CFC94 (--$_Insert_at@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x1802D0084 (--$_Insert_nohint@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tre.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  __int64 *v7; // r11
  _QWORD *v8; // r10
  _QWORD *result; // rax
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdi
  bool v12; // cf
  __int64 v13; // rax
  _QWORD *v14; // r9
  __int64 j; // rax
  __int64 i; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 k; // rcx
  int v20; // [rsp+20h] [rbp-38h]
  char v21; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  v8 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v8 )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v20,
          a5);
        return a2;
      }
      goto LABEL_43;
    }
    if ( (_QWORD *)a3 == v8 )
    {
      v10 = (_QWORD *)v8[2];
      if ( v10[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
          a1,
          a2,
          0,
          v10,
          v20,
          a5);
        return a2;
      }
      goto LABEL_43;
    }
    v11 = *a4;
    v12 = *(_QWORD *)(a3 + 32) < *a4;
    if ( *(_QWORD *)(a3 + 32) > *a4 )
    {
      v13 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v14 = *(_QWORD **)(a3 + 16);
      }
      else
      {
        v14 = *(_QWORD **)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v13 = i;
          v14 = (_QWORD *)v13;
          if ( !*(_BYTE *)(v13 + 25) )
            v14 = (_QWORD *)i;
        }
        else
        {
          for ( j = v14[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            v14 = (_QWORD *)j;
        }
      }
      if ( v14[4] < v11 )
      {
        if ( *(_BYTE *)(v14[2] + 25LL) )
          std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
            v7,
            a2,
            0,
            v14,
            v20,
            a5);
        else
          std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
            v7,
            a2,
            1,
            (_QWORD *)a3,
            v20,
            a5);
        return a2;
      }
      v12 = *(_QWORD *)(a3 + 32) < v11;
    }
    if ( !v12 )
      goto LABEL_43;
    v17 = (_QWORD *)a3;
    if ( !*(_BYTE *)(a3 + 25) )
    {
      v18 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(v18 + 25) )
      {
        for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v17 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
          v17 = (_QWORD *)k;
        v17 = (_QWORD *)k;
      }
      else
      {
        v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v18);
      }
    }
    if ( v17 != v8 && v11 >= v17[4] )
    {
LABEL_43:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_nohint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v21,
                         a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        v7,
        a2,
        0,
        (_QWORD *)a3,
        v20,
        a5);
    else
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        v7,
        a2,
        1,
        v17,
        v20,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        a1,
        a2,
        1,
        v8,
        v20,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x38);
      throw;
    }
  }
  return result;
}
