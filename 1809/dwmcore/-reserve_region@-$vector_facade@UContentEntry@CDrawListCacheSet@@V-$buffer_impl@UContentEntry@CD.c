/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800273AC
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180027190 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x18002716C (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002757C (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x180184220 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  CDrawListCacheSet::ContentEntry *v10; // r15
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r11
  bool v14; // sf
  CDrawListCacheSet::ContentEntry *v15; // rdi
  CDrawListCacheSet::ContentEntry *v16; // rsi
  CDrawListCacheSet::ContentEntry *i; // rbx
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v7 = *a1;
  v8 = a1[1];
  *((_QWORD *)&v19 + 1) = 1LL;
  v20 = 0LL;
  v9 = (v8 - v7) >> 4;
  v22 = 0LL;
  v10 = (CDrawListCacheSet::ContentEntry *)(v7 + 16 * v9);
  v11 = v9 - a2;
  *(_QWORD *)&v19 = v10;
  v21 = v19;
  if ( !v10 )
    goto LABEL_22;
  v22 = 1LL;
  v12 = v9 - a2;
  if ( v11 > 1 )
    v12 = 1LL;
  v5 = 16 * v12;
  v13 = v8 - v5;
  v20 = 1LL;
  if ( v8 != v8 - v5 )
  {
    v6 = v20;
    v4 = (__int64 *)(v21 + 24);
    do
    {
      v8 -= 16LL;
      if ( !(_QWORD)v19 )
        goto LABEL_22;
      if ( !v6 )
        goto LABEL_22;
      --v6;
      v4 -= 2;
      if ( v6 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_22;
      *((_DWORD *)v4 - 2) = *(_DWORD *)v8;
      *((_DWORD *)v4 - 1) = *(_DWORD *)(v8 + 4);
      v5 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = 0LL;
      *v4 = v5;
    }
    while ( v8 != v13 );
  }
  if ( v11 > 1 )
  {
    *(_QWORD *)&v21 = v7;
    *((_QWORD *)&v21 + 1) = v9;
    v22 = 0LL;
    v14 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_22;
      v14 = v9 < 0;
    }
    if ( v14 && v9 )
    {
LABEL_22:
      _o__invalid_parameter_noinfo_noreturn(v5, v4, v9, v6);
      JUMPOUT(0x180027573LL);
    }
    v22 = v9;
    v19 = v21;
    v20 = v9;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      &v21,
      v7 + 16 * a2,
      v7 + 16 * v9 - 16,
      &v19);
  }
  v15 = (CDrawListCacheSet::ContentEntry *)(v7 + 16 * (a2 + 1));
  if ( v10 < v15 )
    v15 = v10;
  v16 = (CDrawListCacheSet::ContentEntry *)(v7 + 16 * a2);
  for ( i = v16; i != v15; i = (CDrawListCacheSet::ContentEntry *)((char *)i + 16) )
    CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(i);
  a1[1] += 16LL;
  return v16;
}
