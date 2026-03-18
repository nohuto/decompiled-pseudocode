/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@@Z @ 0x180006EF4
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180006E54 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@2@V-$tuple@$$V@2@.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@1@1@Z @ 0x180007018 (--$_Insert_at@AEAU-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAU.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@@Z @ 0x1801F260C (--$_Insert_nohint@AEAU-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Insert_hint<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData> &,std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  __int64 **v5; // r10
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  bool v9; // cf
  __int64 *v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // r11
  __int64 *v16; // rax
  __int64 *v17; // rdx
  char v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(__int64 ***)a1;
  v7 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LODWORD(v10) = *(_QWORD *)a1;
    goto LABEL_18;
  }
  if ( a3 == *v5 )
  {
    if ( *a4 < a3[4] )
      goto LABEL_17;
LABEL_43:
    *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Insert_nohint<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData> &,std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *> *>(
                       a1,
                       (unsigned int)&v18,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return v7;
  }
  if ( a3 == (__int64 *)v5 )
  {
    v10 = v5[2];
    if ( v10[4] < *a4 )
      goto LABEL_14;
    goto LABEL_43;
  }
  v8 = *a4;
  v9 = a3[4] < *a4;
  if ( a3[4] <= *a4 )
  {
LABEL_30:
    if ( v9 )
    {
      v10 = (__int64 *)a3[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        v10 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v10 + 25) )
        {
          v16 = a3;
          do
          {
            if ( v16 != (__int64 *)v10[2] )
              break;
            v16 = v10;
            v10 = (__int64 *)v10[1];
          }
          while ( !*((_BYTE *)v10 + 25) );
        }
      }
      else
      {
        v17 = (__int64 *)*v10;
        if ( !*(_BYTE *)(*v10 + 25) )
        {
          do
          {
            v10 = v17;
            v17 = (__int64 *)*v17;
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
      if ( v10 == (__int64 *)v5 || v8 < v10[4] )
      {
        LODWORD(a2) = (_DWORD)v7;
        if ( *(_BYTE *)(a3[2] + 25) )
        {
          LODWORD(v10) = (_DWORD)a3;
          goto LABEL_14;
        }
LABEL_18:
        LOBYTE(a3) = 1;
        goto LABEL_15;
      }
    }
    goto LABEL_43;
  }
  v10 = a3;
  if ( *((_BYTE *)a3 + 25) )
  {
    v10 = (__int64 *)a3[2];
  }
  else
  {
    v11 = (__int64 *)*a3;
    if ( *(_BYTE *)(*a3 + 25) )
    {
      v12 = (__int64 *)a3[1];
      if ( !*((_BYTE *)v12 + 25) )
      {
        v13 = a3;
        do
        {
          v14 = v12;
          if ( v13 != (__int64 *)*v12 )
            break;
          v10 = v12;
          v12 = (__int64 *)v12[1];
          v13 = v14;
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
      if ( !*((_BYTE *)v10 + 25) )
        v10 = v12;
    }
    else
    {
      do
      {
        v10 = v11;
        v11 = (__int64 *)v11[2];
      }
      while ( !*((_BYTE *)v11 + 25) );
    }
  }
  if ( v10[4] >= v8 )
  {
    v9 = a3[4] < v8;
    goto LABEL_30;
  }
  LODWORD(a2) = (_DWORD)v7;
  if ( !*(_BYTE *)(v10[2] + 25) )
  {
LABEL_17:
    LODWORD(v10) = (_DWORD)a3;
    goto LABEL_18;
  }
LABEL_14:
  LODWORD(a3) = 0;
LABEL_15:
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Insert_at<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData> &,std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *> *>(
    a1,
    (_DWORD)a2,
    (_DWORD)a3,
    (_DWORD)v10);
  return v7;
}
