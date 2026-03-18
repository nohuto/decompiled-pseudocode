/*
 * XREFs of ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1800C4344
 * Callers:
 *     _lambda_f08f89e48aea7a3cf710738a505e63f5_::_lambda_invoker_cdecl_ @ 0x180064BD0 (_lambda_f08f89e48aea7a3cf710738a505e63f5_--_lambda_invoker_cdecl_.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18018A408 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x1800C441C (--$_Insert_at@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  int v6; // edi
  __int64 *v7; // r9
  char v8; // r10
  __int64 *v9; // rax
  __int64 *v10; // rax
  char v11; // r8
  _QWORD *v12; // rax
  __int64 *v14; // rcx
  __int64 *i; // rcx
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = (int)a1;
  v7 = *a1;
  v8 = 1;
  v9 = (__int64 *)(*a1)[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    v7 = v9;
    if ( *a4 < *((_DWORD *)v9 + 7) )
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
      v11 = 1;
      goto LABEL_8;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (__int64 *)v7[2];
    }
    else
    {
      v14 = (__int64 *)*v7;
      if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)*i; i = (__int64 *)i[1] )
          v10 = i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = i;
      }
      else
      {
        do
        {
          v10 = v14;
          v14 = (__int64 *)v14[2];
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
  }
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v8;
  LODWORD(a1) = v6;
LABEL_8:
  v12 = (_QWORD *)std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
                    (_DWORD)a1,
                    (unsigned int)&v16,
                    v11,
                    (_DWORD)v7,
                    (__int64)a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
