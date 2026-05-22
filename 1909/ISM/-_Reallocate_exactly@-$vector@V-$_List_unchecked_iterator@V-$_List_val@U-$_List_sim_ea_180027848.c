/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180027848
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180027708 (-_Init@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>::_Reallocate_exactly(
        __int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  _QWORD *result; // rax
  __int64 v9; // r8

  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  v4 = v3;
  v5 = v3;
  v6 = 0LL;
  v7 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v7 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)a1 - (_QWORD)v3;
    try
    {
      do
      {
        *v5 = *(_QWORD *)((char *)v5 + v9);
        ++v5;
        ++v6;
      }
      while ( v6 != v7 );
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x80);
      throw;
    }
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = &v4[v2];
  result = v4 + 16;
  *(_QWORD *)(a1 + 16) = v4 + 16;
  return result;
}
