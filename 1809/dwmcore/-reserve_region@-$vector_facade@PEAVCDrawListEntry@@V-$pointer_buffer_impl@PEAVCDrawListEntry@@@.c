/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800B2DAC
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800B2A90 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800671D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ?end@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCDrawListEntry@@@2@XZ @ 0x1800B3088 (-end@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@de.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1800B3A90 (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3B10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800EEE68 (-capacity@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVCOverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@V?$move_iterator@PEAPEAVCOverlayContext@@@0@0V12@@Z @ 0x180152628 (--$move_backward@V-$move_iterator@PEAPEAVCOverlayContext@@@std@@V-$checked_array_iterator@PEAPEA.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  const char *v8; // rcx
  unsigned __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned __int64 v11; // r15
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  bool v25; // sf
  __int64 *v26; // rax
  __int64 v27; // rdx
  bool v28; // sf
  __int64 v30; // rax
  __int128 v31; // [rsp+20h] [rbp-40h] BYREF
  __int64 v32; // [rsp+30h] [rbp-30h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]
  __int64 *v36; // [rsp+90h] [rbp+30h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+40h]

  v6 = *a1 & 3;
  if ( (*a1 & 3) != 0 )
  {
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
    }
    else
    {
      if ( v6 <= 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 1LL;
  }
  if ( detail::pointer_buffer_impl<CDrawListEntry *>::capacity(a1) - v7 >= a3 )
    goto LABEL_16;
  v9 = v7 + a3;
  if ( v7 + a3 < v7 )
    std::_Xoverflow_error(v8);
  if ( v9 != 1 )
  {
    v10 = operator new(8 * v9 + 16);
    v32 = 0LL;
    *((_QWORD *)&v31 + 1) = v7;
    *v10 = 0LL;
    v11 = (unsigned __int64)(v10 + 2);
    v10[1] = 0LL;
    *(_QWORD *)&v31 = v10 + 2;
    v12 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
    v33 = v31;
    v34 = v32;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      (__int64)&v31,
      v12,
      &v12[v7],
      &v33);
    v13 = *a1 & 3;
    if ( (*a1 & 3) != 0 )
    {
      if ( v13 == 1 )
      {
        v14 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
        goto LABEL_15;
      }
      if ( v13 <= 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v14 = 0LL;
LABEL_15:
    *(_QWORD *)a1 = v11 | 1;
    WPF::ProcessHeapImpl::Free(v14);
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16) = v7;
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 8) = v9;
    goto LABEL_16;
  }
  *(_QWORD *)a1 = 3LL;
LABEL_16:
  v15 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::size(a1);
  v16 = v15 - a2;
  v17 = v15;
  detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::end(a1, &v36);
  v18 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v32 = 0LL;
  v23 = v18;
  *((_QWORD *)&v31 + 1) = a3;
  v34 = 0LL;
  v24 = v18 + 8 * v17;
  *(_QWORD *)&v31 = v24;
  v37 = v24;
  v25 = a3 < 0;
  if ( a3 )
  {
    if ( !v24 )
      goto LABEL_35;
    v25 = a3 < 0;
  }
  if ( v25 && a3 )
    goto LABEL_35;
  v26 = v36;
  v27 = v16;
  v34 = a3;
  if ( a3 < v16 )
    v27 = a3;
  v19 = 8 * v27;
  v20 = (__int64 *)((char *)v36 - v19);
  v32 = a3;
  if ( v36 != (__int64 *)((char *)v36 - v19) )
  {
    v22 = v31;
    v21 = v32;
    do
    {
      --v26;
      if ( !v22 )
        goto LABEL_35;
      if ( !v21 )
        goto LABEL_35;
      if ( (unsigned __int64)--v21 >= *((_QWORD *)&v31 + 1) )
        goto LABEL_35;
      v19 = *v26;
      *(_QWORD *)(v22 + 8 * v21) = *v26;
    }
    while ( v26 != v20 );
  }
  if ( v16 > a3 )
  {
    v32 = 0LL;
    *(_QWORD *)&v31 = v23;
    *((_QWORD *)&v31 + 1) = v17;
    v34 = 0LL;
    v28 = v17 < 0;
    if ( v17 )
    {
      if ( !v23 )
        goto LABEL_35;
      v28 = v17 < 0;
    }
    if ( v28 && v17 )
    {
LABEL_35:
      _o__invalid_parameter_noinfo_noreturn(v20, v19, v21, v22);
      __debugbreak();
    }
    v34 = v17;
    v32 = v17;
    std::move_backward<std::move_iterator<COverlayContext * *>,stdext::checked_array_iterator<COverlayContext * *>>(
      &v33,
      v23 + 8 * a2,
      v23 + 8 * (v17 - a3),
      &v31);
  }
  if ( a3 )
  {
    if ( (*a1 & 3) == 0 )
      goto LABEL_44;
    if ( (*a1 & 3) == 1LL )
    {
      v30 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      *(_QWORD *)(v30 - 16) += a3;
      return v23 + 8 * a2;
    }
    if ( (*a1 & 3) != 2LL )
    {
      if ( (*a1 & 3) != 3LL )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a3 != 1 )
LABEL_44:
        *(_QWORD *)a1 = 2LL;
    }
  }
  return v23 + 8 * a2;
}
