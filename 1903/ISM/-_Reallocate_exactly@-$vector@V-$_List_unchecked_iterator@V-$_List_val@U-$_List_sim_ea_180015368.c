/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180015368
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800151F8 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>>>>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rcx
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  char *result; // rax
  signed __int64 v12; // r8

  v3 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v4 = 8 * a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = v6;
  v8 = *(char **)a1;
  v9 = 0LL;
  v10 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v10 = 0LL;
  if ( v10 )
  {
    try
    {
      v12 = v6 - v8;
      do
      {
        *(_QWORD *)&v8[v12] = *(_QWORD *)v8;
        v8 += 8;
        ++v9;
      }
      while ( v9 != v10 );
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8 * a2));
      throw;
    }
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = &v7[8 * v3];
  result = &v7[v4];
  *(_QWORD *)(a1 + 16) = &v7[v4];
  return result;
}
