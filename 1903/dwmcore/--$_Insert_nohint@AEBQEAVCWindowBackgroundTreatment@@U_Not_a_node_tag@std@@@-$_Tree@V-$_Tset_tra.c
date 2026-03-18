/*
 * XREFs of ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001BB20
 * Callers:
 *     ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18001FB20 (-AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@.c)
 *     ?AssociateWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1801680C0 (-AssociateWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@1@_NPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@1@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001BC00 (--$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_nohint<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // edi
  __int64 *v7; // r9
  char v8; // r8
  __int64 *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 *v13; // rcx
  __int64 *i; // rcx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = (int)a1;
  v7 = *a1;
  v8 = 1;
  v9 = (__int64 *)(*a1)[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    v7 = v9;
    if ( *a4 < (unsigned __int64)v9[4] )
    {
      v9 = (__int64 *)*v9;
      v8 = 1;
    }
    else
    {
      v9 = (__int64 *)v9[2];
      v8 = 0;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == (__int64 *)**a1 )
    {
      v8 = 1;
      goto LABEL_5;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (__int64 *)v7[2];
    }
    else
    {
      v13 = (__int64 *)*v7;
      if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)*i; i = (__int64 *)i[1] )
          v10 = i;
        if ( *((_BYTE *)v10 + 25) )
          i = v10;
        v10 = i;
      }
      else
      {
        do
        {
          v10 = v13;
          v13 = (__int64 *)v13[2];
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
  }
  if ( (unsigned __int64)v10[4] >= *a4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LODWORD(a1) = v6;
LABEL_5:
  v11 = (_QWORD *)std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_at<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
                    (_DWORD)a1,
                    (unsigned int)&v15,
                    v8,
                    (_DWORD)v7,
                    (__int64)a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
