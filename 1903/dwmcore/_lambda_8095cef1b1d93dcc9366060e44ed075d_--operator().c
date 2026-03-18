/*
 * XREFs of _lambda_8095cef1b1d93dcc9366060e44ed075d_::operator() @ 0x180031E34
 * Callers:
 *     _lambda_8095cef1b1d93dcc9366060e44ed075d_::_lambda_invoker_cdecl_ @ 0x180031E00 (_lambda_8095cef1b1d93dcc9366060e44ed075d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Insert_at@AEB_KU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@1@_NPEAU?$_Tree_node@_KPEAX@1@AEB_KU_Not_a_node_tag@1@@Z @ 0x180077CF4 (--$_Insert_at@AEB_KU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180173854 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 lambda_8095cef1b1d93dcc9366060e44ed075d_::operator()(__int64 a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v18; // [rsp+70h] [rbp+28h]
  __int64 v19; // [rsp+78h] [rbp+30h]
  __int64 v20; // [rsp+80h] [rbp+38h]
  va_list va1; // [rsp+88h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v15 = a2;
  v14 = a1;
  v3 = v16;
  v4 = a3;
  if ( (v19 & 0x1A) != 0 )
  {
    LOBYTE(a3) = 1;
    v5 = qword_18033C8A8;
    v6 = *(_QWORD *)(qword_18033C8A8 + 8);
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v5 = v6;
      if ( v16 < *(_QWORD *)(v6 + 32) )
      {
        v6 = *(_QWORD *)v6;
        LOBYTE(a3) = 1;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
        LOBYTE(a3) = 0;
      }
    }
    v7 = v5;
    if ( (_BYTE)a3 )
    {
      if ( v5 == *(_QWORD *)qword_18033C8A8 )
      {
        LOBYTE(a3) = 1;
LABEL_6:
        std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
          (unsigned int)&qword_18033C8A8,
          (unsigned int)&v15,
          a3,
          v5,
          (__int64)va);
        goto LABEL_7;
      }
      if ( *(_BYTE *)(v5 + 25) )
      {
        v7 = *(_QWORD *)(v5 + 16);
      }
      else if ( *(_BYTE *)(*(_QWORD *)v5 + 25LL) )
      {
        for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v7 = i;
        if ( *(_BYTE *)(v7 + 25) )
          i = v7;
        v7 = i;
      }
      else
      {
        v7 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max();
      }
    }
    if ( *(_QWORD *)(v7 + 32) >= v3 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( (v19 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    v8 = qword_18033C8B8;
    v9 = *(_QWORD *)(qword_18033C8B8 + 8);
    while ( !*(_BYTE *)(v9 + 25) )
    {
      v8 = v9;
      if ( v3 < *(_QWORD *)(v9 + 32) )
      {
        v9 = *(_QWORD *)v9;
        LOBYTE(a3) = 1;
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 16);
        LOBYTE(a3) = 0;
      }
    }
    v10 = v8;
    if ( (_BYTE)a3 )
    {
      if ( v8 == *(_QWORD *)qword_18033C8B8 )
      {
        LOBYTE(a3) = 1;
        goto LABEL_12;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v10 = *(_QWORD *)(v8 + 16);
      }
      else if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
      {
        for ( j = *(_QWORD *)(v8 + 8); !*(_BYTE *)(j + 25) && v10 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
          v10 = j;
        if ( *(_BYTE *)(v10 + 25) )
          j = v10;
        v10 = j;
      }
      else
      {
        v10 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max();
      }
    }
    if ( *(_QWORD *)(v10 + 32) < v3 )
LABEL_12:
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
        (unsigned int)&qword_18033C8B8,
        (unsigned int)&v14,
        a3,
        v8,
        (__int64)va);
  }
  return anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
           *((_QWORD *)qword_18033CC40 + 5),
           v4,
           v3,
           v20,
           v18);
}
