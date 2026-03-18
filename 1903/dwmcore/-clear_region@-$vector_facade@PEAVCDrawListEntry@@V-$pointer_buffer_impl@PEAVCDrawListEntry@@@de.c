/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009AD9C
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004EAF0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009AD10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18009AD48 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  const char *v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size(a1, a2, a3);
  v8 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v6, v7) + 8 * v5;
  v13 = (__int64)(v8 - detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v9, v10)) >> 3;
  if ( a3 > v13 )
    std::_Xoverflow_error(v12);
  v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v11, v14);
  v18 = 0LL;
  *(_QWORD *)&v17 = v15;
  *((_QWORD *)&v17 + 1) = v13;
  if ( a3 != v13 )
  {
    v18 = 0LL;
    v20 = 0LL;
    v19 = v17;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v17,
      v15 + 8 * a3,
      v15 + 8 * v13,
      &v19);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3);
}
