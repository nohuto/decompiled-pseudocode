/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800164B8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800DDD78 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x1800DE960 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@PEAU32@@Z @ 0x180016010 (-_Min@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

_QWORD *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(
        _QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *i; // rax

  v1 = (_QWORD *)*a1;
  v2 = a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    v3 = v1[2];
    if ( *(_BYTE *)(v3 + 25) )
    {
      for ( i = (_QWORD *)v1[1]; !*((_BYTE *)i + 25) && v1 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      {
        *v2 = i;
        v1 = i;
      }
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Min((_QWORD *)v3);
    }
    *v2 = i;
  }
  return v2;
}
