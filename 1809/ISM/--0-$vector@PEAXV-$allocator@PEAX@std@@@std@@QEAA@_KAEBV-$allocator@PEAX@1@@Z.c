/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1800915C8
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<void *>::vector<void *>(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rbx
  size_t v4; // rsi
  size_t v5; // rcx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v4 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      if ( v4 )
        v3 = operator new(8 * a2);
    }
    else
    {
      v5 = v4 + 39;
      if ( v4 + 39 < v4 )
        v5 = -1LL;
      v6 = operator new(v5);
      if ( !v6 )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v7);
        __debugbreak();
      }
      v3 = (_QWORD *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v3 - 1) = v6;
    }
    *a1 = v3;
    a1[1] = v3;
    a1[2] = v4 + *a1;
    try
    {
      memset_0(v3, 0, v4);
      a1[1] = &v3[v4 / 8];
    }
    catch ( ... )
    {
      std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>((__int64)a1);
      throw;
    }
  }
  return a1;
}
