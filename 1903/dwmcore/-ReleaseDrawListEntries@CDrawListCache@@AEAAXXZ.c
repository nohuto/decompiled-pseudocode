/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18009A728
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004EAF0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18007A8E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009AD10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18009AD48 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1800C66E0 (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  char *v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  const char *v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v1 = (char *)this + 32;
  v2 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32);
  v3 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
  v4 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v3;
  while ( v2 != (_QWORD *)v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
    ++v2;
  }
  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v5;
  v7 = (v6 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v1)) >> 3;
  if ( v7 )
  {
    v8 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v1);
    v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1) + 8 * v8;
    v11 = (v9 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v1)) >> 3;
    if ( v7 > v11 )
      std::_Xoverflow_error(v10);
    v12 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v1);
    v14 = 0LL;
    *(_QWORD *)&v13 = v12;
    *((_QWORD *)&v13 + 1) = v11;
    if ( v7 != v11 )
    {
      v15 = v13;
      v16 = v14;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        &v13,
        v12 + 8 * v7,
        v12 + 8 * v11,
        &v15);
    }
    detail::pointer_buffer_impl<CDrawListEntry *>::consume(v1, -(__int64)v7);
  }
}
