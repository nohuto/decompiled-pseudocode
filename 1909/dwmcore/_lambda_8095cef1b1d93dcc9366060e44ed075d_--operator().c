/*
 * XREFs of _lambda_8095cef1b1d93dcc9366060e44ed075d_::operator() @ 0x18004C050
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8095cef1b1d93dcc9366060e44ed075d__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EB770 (std--_Func_impl_no_alloc__lambda_8095cef1b1d93dcc9366060e44ed075d__void_void___unsi_ea_1800EB770.c)
 * Callees:
 *     ??$_Insert_at@AEB_KU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@1@_NPEAU?$_Tree_node@_KPEAX@1@AEB_KU_Not_a_node_tag@1@@Z @ 0x18003D9D4 (--$_Insert_at@AEB_KU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 lambda_8095cef1b1d93dcc9366060e44ed075d_::operator()(__int64 a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v3; // rbx
  char v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // r8
  __int64 *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v20; // [rsp+70h] [rbp+28h]
  __int64 v21; // [rsp+78h] [rbp+30h]
  __int64 v22; // [rsp+80h] [rbp+38h]
  va_list va1; // [rsp+88h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v17 = a2;
  v16 = a1;
  v3 = v18;
  if ( (v21 & 0x1A) != 0 )
  {
    v5 = 1;
    v6 = qword_180339998;
    v7 = *(_QWORD *)(qword_180339998 + 8);
    while ( !*(_BYTE *)(v7 + 25) )
    {
      v6 = v7;
      if ( v18 < *(_QWORD *)(v7 + 32) )
      {
        v7 = *(_QWORD *)v7;
        v5 = 1;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
        v5 = 0;
      }
    }
    v8 = v6;
    if ( v5 )
    {
      if ( v6 == *(_QWORD *)qword_180339998 )
      {
        v5 = 1;
LABEL_6:
        std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
          (const char *)&qword_180339998,
          &v17,
          v5,
          (__int64 *)v6,
          (unsigned __int64 *)va);
        goto LABEL_7;
      }
      if ( *(_BYTE *)(v6 + 25) )
      {
        v8 = *(_QWORD *)(v6 + 16);
      }
      else if ( *(_BYTE *)(*(_QWORD *)v6 + 25LL) )
      {
        for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v8 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v8 = i;
        if ( *(_BYTE *)(v8 + 25) )
          i = v8;
        v8 = i;
      }
      else
      {
        v8 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max();
      }
    }
    if ( *(_QWORD *)(v8 + 32) >= v3 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( (v21 & 4) != 0 )
  {
    v9 = 1;
    v10 = (__int64 *)qword_1803399A8;
    v11 = *(_QWORD *)(qword_1803399A8 + 8);
    while ( !*(_BYTE *)(v11 + 25) )
    {
      v10 = (__int64 *)v11;
      if ( v3 < *(_QWORD *)(v11 + 32) )
      {
        v11 = *(_QWORD *)v11;
        v9 = 1;
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
        v9 = 0;
      }
    }
    v12 = (__int64)v10;
    if ( v9 )
    {
      if ( v10 == *(__int64 **)qword_1803399A8 )
      {
        v9 = 1;
        goto LABEL_12;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v12 = v10[2];
      }
      else if ( *(_BYTE *)(*v10 + 25) )
      {
        for ( j = v10[1]; !*(_BYTE *)(j + 25) && v12 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
          v12 = j;
        if ( *(_BYTE *)(v12 + 25) )
          j = v12;
        v12 = j;
      }
      else
      {
        v12 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max();
      }
    }
    if ( *(_QWORD *)(v12 + 32) < v3 )
LABEL_12:
      std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
        (const char *)&qword_1803399A8,
        &v16,
        v9,
        v10,
        (unsigned __int64 *)va);
  }
  return anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
           *((_QWORD *)qword_180339D30 + 5),
           a3,
           v3,
           v22,
           v20);
}
