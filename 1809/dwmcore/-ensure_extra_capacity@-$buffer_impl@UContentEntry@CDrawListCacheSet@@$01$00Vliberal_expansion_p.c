/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002757C
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800273AC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x180027134 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801842D8 (--$uninitialized_copy@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // r8
  CDrawListCacheSet::ContentEntry *v9; // rdx
  __int64 v10; // rbx
  CDrawListCacheSet::ContentEntry *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  if ( (__int64)&v3[-v4] >> 4 < a2 )
  {
    v5 = (v4 - *a1) >> 4;
    if ( v5 + a2 < v5 )
      std::_Xoverflow_error(v3);
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((__int64)&v3[-*a1] >> 4),
           (__int64)&v3[-*a1] >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = a1[1];
    v9 = (CDrawListCacheSet::ContentEntry *)*a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = (__int64)v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *, CDrawListCacheSet::ContentEntry *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      &v14,
      v9,
      v8,
      &v16);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(
      (CDrawListCacheSet::ContentEntry *)*a1,
      (CDrawListCacheSet::ContentEntry *)a1[1]);
    v11 = (CDrawListCacheSet::ContentEntry *)*a1;
    v12 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    WPF::ProcessHeapImpl::Free(v11);
    v13 = *a1 + 16 * v5;
    a1[2] = *a1 + 16 * v6;
    a1[1] = v13;
  }
}
