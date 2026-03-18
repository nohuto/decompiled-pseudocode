/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEF64
 * Callers:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 * Callees:
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x180027134 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x18005FC20 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  CDrawListCacheSet::ContentEntry *v6; // rdi
  __int64 v7; // rbx
  void *result; // rax
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4) >> 4;
  if ( a3 > v5 )
    std::_Xoverflow_error(v4);
  v10 = 0LL;
  v6 = (CDrawListCacheSet::ContentEntry *)&v4[16 * v5];
  v7 = 16 * a3;
  *(_QWORD *)&v9 = v4;
  *((_QWORD *)&v9 + 1) = v5;
  if ( a3 != v5 )
  {
    v10 = 0LL;
    v12 = 0LL;
    v11 = v9;
    std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
      (__int64)&v9,
      (__int64)&v4[v7],
      &v4[16 * v5],
      &v11);
  }
  result = detail::destruct_range<CDrawListCacheSet::ContentEntry>(
             (CDrawListCacheSet::ContentEntry *)((char *)v6 - v7),
             v6);
  *(_QWORD *)(a1 + 8) -= v7;
  return result;
}
