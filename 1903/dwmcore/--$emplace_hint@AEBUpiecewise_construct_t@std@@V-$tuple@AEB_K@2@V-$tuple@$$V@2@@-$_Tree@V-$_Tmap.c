/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C52F4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800C528C (--$_Try_emplace@AEB_K$$V@-$map@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@@std@@QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEAU?$pair@$$CB_KI@1@1@Z @ 0x1800C53BC (--$_Insert_at@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@V-$_.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KI@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@@Z @ 0x180172598 (--$_Insert_nohint@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  _QWORD *v8; // rdx
  __int64 v9; // r10
  _QWORD *v10; // r11
  unsigned __int64 v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // r9
  int v14; // edx
  int v15; // ecx
  bool v17; // cf
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // [rsp+30h] [rbp-18h] BYREF

  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v9 = *a1;
  v10 = (_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 8) = *a1;
  *(_QWORD *)(v9 + 16) = *a1;
  *(_WORD *)(v9 + 24) = 0;
  v11 = **a5;
  *(_QWORD *)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 40) = 0;
  v12 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    v13 = (_QWORD *)*a1;
    goto LABEL_10;
  }
  if ( a3 == (_QWORD *)*v12 )
  {
    if ( v11 >= a3[4] )
      goto LABEL_43;
    LODWORD(v13) = (_DWORD)a3;
LABEL_10:
    LOBYTE(v12) = 1;
    goto LABEL_6;
  }
  if ( a3 != v12 )
  {
    v17 = a3[4] < v11;
    if ( a3[4] > v11 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v13 = (_QWORD *)a3[2];
      }
      else
      {
        v18 = *a3;
        if ( *(_BYTE *)(*a3 + 25LL) )
        {
          v19 = (_QWORD *)a3[1];
          if ( !*((_BYTE *)v19 + 25) )
          {
            v20 = a3;
            do
            {
              v8 = v19;
              if ( v20 != (_QWORD *)*v19 )
                break;
              v13 = v19;
              v19 = (_QWORD *)v19[1];
              v20 = v8;
            }
            while ( !*((_BYTE *)v19 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = v19;
        }
        else
        {
          do
          {
            v13 = (_QWORD *)v18;
            v18 = *(_QWORD *)(v18 + 16);
          }
          while ( !*(_BYTE *)(v18 + 25) );
        }
      }
      if ( v13[4] < *v10 )
      {
        v14 = (int)a2;
        v15 = (int)a1;
        if ( !*(_BYTE *)(v13[2] + 25LL) )
        {
          LODWORD(v13) = (_DWORD)a3;
LABEL_29:
          LOBYTE(v12) = 1;
          goto LABEL_7;
        }
        goto LABEL_27;
      }
      v17 = a3[4] < *v10;
    }
    if ( !v17 )
      goto LABEL_43;
    v21 = a3[2];
    if ( *(_BYTE *)(v21 + 25) )
    {
      v22 = a3[1];
      if ( !*(_BYTE *)(v22 + 25) )
      {
        v23 = (__int64)a3;
        do
        {
          if ( v23 != *(_QWORD *)(v22 + 16) )
            break;
          v23 = v22;
          v22 = *(_QWORD *)(v22 + 8);
        }
        while ( !*(_BYTE *)(v22 + 25) );
      }
    }
    else
    {
      v22 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
              v21,
              v8,
              v12);
    }
    if ( (_QWORD *)v22 != v12 && *v10 >= *(_QWORD *)(v22 + 32) )
      goto LABEL_43;
    v14 = (int)a2;
    v15 = (int)a1;
    if ( !*(_BYTE *)(a3[2] + 25LL) )
    {
      LODWORD(v13) = v22;
      goto LABEL_29;
    }
    LODWORD(v13) = (_DWORD)a3;
LABEL_27:
    LODWORD(v12) = 0;
    goto LABEL_7;
  }
  v13 = (_QWORD *)v12[2];
  if ( v13[4] >= v11 )
  {
LABEL_43:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
                       (_DWORD)a1,
                       (unsigned int)&v24,
                       (_DWORD)v12,
                       (_DWORD)v10,
                       v9);
    return a2;
  }
  LODWORD(v12) = 0;
LABEL_6:
  v14 = (int)a2;
  v15 = (int)a1;
LABEL_7:
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
    v15,
    v14,
    (_DWORD)v12,
    (_DWORD)v13);
  return a2;
}
