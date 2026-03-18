/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18004E7EC
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18004D300 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801AEA70 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AEB84 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AEC60 (--$uninitialized_copy@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1801AED00 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v7; // rdx
  CDrawListCacheSet::ContentEntry *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  CDrawListCacheSet::ContentEntry *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  CDrawListCacheSet::ContentEntry *v16; // rdi
  CDrawListCacheSet::ContentEntry *v17; // rsi
  CDrawListCacheSet::ContentEntry *i; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  void *v22; // rax
  __int64 v23; // r8
  CDrawListCacheSet::ContentEntry *v24; // rdx
  void *v25; // rbx
  CDrawListCacheSet::ContentEntry *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  bool v29; // sf
  __int128 v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]

  v4 = *((_QWORD *)a1 + 1);
  v7 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( !(((__int64)v7 - v4) >> 4) )
  {
    v20 = (v4 - *(_QWORD *)a1) >> 4;
    if ( v20 + 1 < v20 )
      std::_Xoverflow_error(a1);
    v21 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            ((__int64)v7 - *(_QWORD *)a1) >> 4,
            v20 + 1);
    v22 = operator new(saturated_mul(v21, 0x10uLL));
    v23 = *((_QWORD *)a1 + 1);
    v24 = *(CDrawListCacheSet::ContentEntry **)a1;
    *(_QWORD *)&v30 = v22;
    v25 = v22;
    *((_QWORD *)&v30 + 1) = v20;
    v31 = 0LL;
    v32 = v30;
    v33 = 0LL;
    ((void (__fastcall *)(__int128 *, CDrawListCacheSet::ContentEntry *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      &v30,
      v24,
      v23,
      &v32);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(CDrawListCacheSet::ContentEntry **)a1);
    v26 = *(CDrawListCacheSet::ContentEntry **)a1;
    v27 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v25;
    if ( v27 )
      v26 = 0LL;
    operator delete(v26);
    v4 = *(_QWORD *)a1 + 16 * v20;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v21;
    *((_QWORD *)a1 + 1) = v4;
  }
  v8 = *(CDrawListCacheSet::ContentEntry **)a1;
  v9 = v4 - *(_QWORD *)a1;
  *((_QWORD *)&v30 + 1) = 1LL;
  v10 = v9 >> 4;
  v31 = 0LL;
  v11 = v10 - a2;
  v12 = (CDrawListCacheSet::ContentEntry *)((char *)v8 + 16 * v10);
  v33 = 0LL;
  *(_QWORD *)&v30 = v12;
  v32 = v30;
  if ( !v12 )
    goto LABEL_30;
  v33 = 1LL;
  v13 = v10 - a2;
  if ( v11 > 1 )
    v13 = 1LL;
  v14 = 16 * v13;
  v15 = v4 - v14;
  v31 = 1LL;
  if ( v4 != v4 - v14 )
  {
    a4 = v31;
    v7 = (_QWORD *)(v32 + 24);
    do
    {
      v4 -= 16LL;
      if ( !(_QWORD)v30 )
        goto LABEL_30;
      if ( !a4 )
        goto LABEL_30;
      --a4;
      v7 -= 2;
      if ( a4 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_30;
      *((_DWORD *)v7 - 2) = *(_DWORD *)v4;
      *((_DWORD *)v7 - 1) = *(_DWORD *)(v4 + 4);
      v28 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 8) = 0LL;
      *v7 = v28;
    }
    while ( v4 != v15 );
  }
  if ( v11 <= 1 )
    goto LABEL_7;
  *(_QWORD *)&v32 = v8;
  *((_QWORD *)&v32 + 1) = v10;
  v33 = 0LL;
  v29 = v10 < 0;
  if ( v10 )
  {
    if ( !v8 )
      goto LABEL_30;
    v29 = v10 < 0;
  }
  if ( v29 && v10 )
  {
LABEL_30:
    _o__invalid_parameter_noinfo_noreturn(v10, v7, v11, a4);
    JUMPOUT(0x18010A57FLL);
  }
  v33 = v10;
  v30 = v32;
  v31 = v10;
  ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
    &v32,
    (char *)v8 + 16 * a2,
    (char *)v8 + 16 * v10 - 16,
    &v30);
LABEL_7:
  v16 = (CDrawListCacheSet::ContentEntry *)((char *)v8 + 16 * a2 + 16);
  if ( v12 < v16 )
    v16 = v12;
  v17 = (CDrawListCacheSet::ContentEntry *)((char *)v8 + 16 * a2);
  for ( i = v17; i != v16; i = (CDrawListCacheSet::ContentEntry *)((char *)i + 16) )
    CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(i, (unsigned int)v7);
  *((_QWORD *)a1 + 1) += 16LL;
  return v17;
}
