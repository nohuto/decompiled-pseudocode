/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x180098154
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180097280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x180099088 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  const char *v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size(a1);
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) + 8 * v5;
  v8 = (v6 - detail::pointer_buffer_impl<CDrawListEntry *>::first(a1)) >> 3;
  if ( a3 > v8 )
    std::_Xoverflow_error(v7);
  v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v13 = 0LL;
  *(_QWORD *)&v12 = v9;
  *((_QWORD *)&v12 + 1) = v8;
  v10 = v9 + 8 * v8;
  if ( a3 != v8 )
  {
    v13 = 0LL;
    v15 = 0LL;
    v14 = v12;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v12,
      v9 + 8 * a3,
      v10,
      &v14);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3, v10);
}
