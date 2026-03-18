/*
 * XREFs of ??$_Lbound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEBI@Z @ 0x1800DECB8
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800DDD78 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
        __int64 *a1,
        _DWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rax

  v2 = (__int64 *)*a1;
  v3 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v3 + 25) )
  {
    if ( *((_DWORD *)v3 + 7) >= *a2 )
    {
      v2 = v3;
      v3 = (__int64 *)*v3;
    }
    else
    {
      v3 = (__int64 *)v3[2];
    }
  }
  return v2;
}
