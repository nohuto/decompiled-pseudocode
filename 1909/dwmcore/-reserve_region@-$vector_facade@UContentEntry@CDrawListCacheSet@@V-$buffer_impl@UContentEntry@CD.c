/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18006674C
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180065260 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801AD1B0 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AD2C4 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AD3A0 (--$uninitialized_copy@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1801AD440 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rdx
  CDrawListCacheSet::ContentEntry *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  CDrawListCacheSet::ContentEntry *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  CDrawListCacheSet::ContentEntry *v14; // rdi
  CDrawListCacheSet::ContentEntry *v15; // rsi
  CDrawListCacheSet::ContentEntry *i; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  void *v20; // rax
  __int64 v21; // r8
  CDrawListCacheSet::ContentEntry *v22; // rdx
  void *v23; // rbx
  CDrawListCacheSet::ContentEntry *v24; // rcx
  bool v25; // zf
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  bool v28; // sf
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  v2 = *((_QWORD *)a1 + 1);
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( !(((__int64)v5 - v2) >> 4) )
  {
    v18 = (v2 - *(_QWORD *)a1) >> 4;
    if ( v18 + 1 < v18 )
      std::_Xoverflow_error(a1);
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            ((__int64)v5 - *(_QWORD *)a1) >> 4,
            v18 + 1);
    v20 = operator new(saturated_mul(v19, 0x10uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(CDrawListCacheSet::ContentEntry **)a1;
    *(_QWORD *)&v29 = v20;
    v23 = v20;
    *((_QWORD *)&v29 + 1) = v18;
    v30 = 0LL;
    v31 = v29;
    v32 = 0LL;
    ((void (__fastcall *)(__int128 *, CDrawListCacheSet::ContentEntry *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      &v29,
      v22,
      v21,
      &v31);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(CDrawListCacheSet::ContentEntry **)a1);
    v24 = *(CDrawListCacheSet::ContentEntry **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v2 = *(_QWORD *)a1 + 16 * v18;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 1) = v2;
  }
  v6 = *(CDrawListCacheSet::ContentEntry **)a1;
  v7 = v2 - *(_QWORD *)a1;
  *((_QWORD *)&v29 + 1) = 1LL;
  v8 = v7 >> 4;
  v30 = 0LL;
  v9 = v8 - a2;
  v10 = (CDrawListCacheSet::ContentEntry *)((char *)v6 + 16 * v8);
  v32 = 0LL;
  *(_QWORD *)&v29 = v10;
  v31 = v29;
  if ( !v10 )
    goto LABEL_30;
  v32 = 1LL;
  v11 = v8 - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v12 = 16 * v11;
  v13 = v2 - v12;
  v30 = 1LL;
  if ( v2 != v2 - v12 )
  {
    v26 = v30;
    v5 = (_QWORD *)(v31 + 24);
    do
    {
      v2 -= 16LL;
      if ( !(_QWORD)v29 )
        goto LABEL_30;
      if ( !v26 )
        goto LABEL_30;
      --v26;
      v5 -= 2;
      if ( v26 >= *((_QWORD *)&v29 + 1) )
        goto LABEL_30;
      *((_DWORD *)v5 - 2) = *(_DWORD *)v2;
      *((_DWORD *)v5 - 1) = *(_DWORD *)(v2 + 4);
      v27 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)(v2 + 8) = 0LL;
      *v5 = v27;
    }
    while ( v2 != v13 );
  }
  if ( v9 <= 1 )
    goto LABEL_7;
  *(_QWORD *)&v31 = v6;
  *((_QWORD *)&v31 + 1) = v8;
  v32 = 0LL;
  v28 = v8 < 0;
  if ( v8 )
  {
    if ( !v6 )
      goto LABEL_30;
    v28 = v8 < 0;
  }
  if ( v28 && v8 )
  {
LABEL_30:
    _o__invalid_parameter_noinfo_noreturn(v8, v5);
    JUMPOUT(0x18011484BLL);
  }
  v32 = v8;
  v29 = v31;
  v30 = v8;
  ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
    &v31,
    (char *)v6 + 16 * a2,
    (char *)v6 + 16 * v8 - 16,
    &v29);
LABEL_7:
  v14 = (CDrawListCacheSet::ContentEntry *)((char *)v6 + 16 * a2 + 16);
  if ( v10 < v14 )
    v14 = v10;
  v15 = (CDrawListCacheSet::ContentEntry *)((char *)v6 + 16 * a2);
  for ( i = v15; i != v14; i = (CDrawListCacheSet::ContentEntry *)((char *)i + 16) )
    CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(i, (unsigned int)v5);
  *((_QWORD *)a1 + 1) += 16LL;
  return v15;
}
