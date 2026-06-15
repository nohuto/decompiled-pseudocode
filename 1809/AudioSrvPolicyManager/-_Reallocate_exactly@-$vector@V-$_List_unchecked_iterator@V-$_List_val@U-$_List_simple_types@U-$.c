/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18001A3B4
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001A6EC (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001AB44 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>::_Reallocate_exactly(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  char *v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  char *v14; // r8
  char *v15; // rcx
  __int64 result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = 8 * a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = v6;
  v8 = (char *)*a1;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    v11 = v6 - (_QWORD)v8;
    do
    {
      *(_QWORD *)&v8[v11] = *(_QWORD *)v8;
      v8 += 8;
      ++v9;
    }
    while ( v9 != v10 );
  }
  v12 = (char *)*a1;
  if ( *a1 )
  {
    v13 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v13 >= 0x1000 )
    {
      v13 = (const struct std::nothrow_t *)((char *)v13 + 39);
      v14 = (char *)*((_QWORD *)v12 - 1);
      v15 = (char *)(v12 - v14);
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v13);
        JUMPOUT(0x18001A4A7LL);
      }
      v12 = v14;
    }
    operator delete(v12, v13);
  }
  *a1 = v7;
  a1[1] = v7 + 8 * v3;
  result = v4 + v7;
  a1[2] = v4 + v7;
  return result;
}
