/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1800AAFEC
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1800AB998 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x1800AAE80 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExeDa.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1800AB6D8 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UE.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_hint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  __int64 *v6; // r9
  __int64 *v8; // r11
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 *result; // rax
  _QWORD *v12; // r9
  unsigned __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // r9
  int v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  if ( a1[1] )
  {
    v10 = (__int64 *)*a1;
    if ( a3 == *(__int64 **)*a1 )
    {
      if ( *a4 < a3[4] )
      {
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( a3 == v10 )
    {
      v12 = (_QWORD *)v10[2];
      if ( v12[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          a1,
          a2,
          0,
          v12,
          v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    v13 = *a4;
    if ( *a4 >= a3[4] )
      goto LABEL_26;
    v14 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v14 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v16 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v16 + 25) )
        {
          v17 = a3;
          do
          {
            LODWORD(a3) = (_DWORD)v16;
            if ( v17 != (__int64 *)*v16 )
              break;
            v14 = v16;
            v16 = (__int64 *)v16[1];
            v17 = v14;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
        if ( !*((_BYTE *)v14 + 25) )
          v14 = v16;
      }
      else
      {
        do
        {
          v14 = v15;
          v15 = (__int64 *)v15[2];
        }
        while ( !*((_BYTE *)v15 + 25) );
      }
    }
    if ( v14[4] >= v13 )
    {
LABEL_26:
      if ( v6[4] >= v13
        || (v21 = v6,
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v21),
            v21 != v10)
        && v13 >= v21[4] )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_nohint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
                           (_DWORD)v8,
                           (unsigned int)&v20,
                           (_DWORD)a3,
                           (_DWORD)a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(v18[2] + 25LL) )
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          a2,
          0,
          v18,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          a2,
          1,
          v21,
          v19,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v14[2] + 25) )
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          a2,
          0,
          v14,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          a2,
          1,
          v6,
          v19,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
        v9,
        a5);
      throw;
    }
  }
  return result;
}
