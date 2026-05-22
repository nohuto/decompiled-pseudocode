/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1801500F0
 * Callers:
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180153414 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1801589BC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x18015D44C (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18015D58C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015E110 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?_Umove_if_noexcept@?$vector@EV?$allocator@E@std@@@std@@AEAAXPEAE00@Z @ 0x180160B68 (-_Umove_if_noexcept@-$vector@EV-$allocator@E@std@@@std@@AEAAXPEAE00@Z.c)
 */

char *__fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        void **a1,
        unsigned __int64 a2)
{
  char *result; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  const struct std::nothrow_t *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  char *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rbx
  void *v14; // [rsp+50h] [rbp+8h]

  result = (char *)*a1;
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = (_BYTE *)a1[2] - (_BYTE *)*a1;
  if ( a2 <= v6 )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        result += a2;
        a1[1] = result;
      }
    }
    else
    {
      v13 = &result[a2];
      result = (char *)memset_0(a1[1], 0, &result[a2] - (_BYTE *)a1[1]);
      a1[1] = v13;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 >> 1;
    if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v8 = (const struct std::nothrow_t *)(v7 + v6);
      if ( v7 + v6 < a2 )
        v8 = (const struct std::nothrow_t *)a2;
    }
    else
    {
      v8 = (const struct std::nothrow_t *)a2;
    }
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>((size_t)v8);
    v10 = v9;
    v14 = v9;
    try
    {
      v11 = (char *)v9 + a2;
      memset_0((char *)v9 + v5, 0, v11 - ((char *)v9 + v5));
      std::vector<unsigned char>::_Umove_if_noexcept(v12, *a1, a1[1], v10, -2LL);
      if ( *a1 )
        std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((_BYTE *)a1[2] - (_BYTE *)*a1));
      *a1 = v10;
      a1[1] = v11;
      result = (char *)v8 + (_QWORD)v10;
      a1[2] = (char *)v8 + (_QWORD)v10;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v14, v8);
      throw;
    }
  }
  return result;
}
