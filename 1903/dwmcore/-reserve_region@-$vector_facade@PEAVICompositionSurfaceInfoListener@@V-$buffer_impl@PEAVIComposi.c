/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x18002AB90
 * Callers:
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002A43C (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002AC64 (-ensure_extra_capacity@-$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansi.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

__int64 __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 *v5; // r9
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // r11
  bool v14; // sf
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  char v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v6 = *a1;
  v17 = 0LL;
  v7 = (__int64 *)a1[1];
  v16 = 1LL;
  v8 = ((__int64)v7 - v6) >> 3;
  v19 = 0LL;
  v9 = v8 - a2;
  v10 = v6 + 8 * v8;
  v15 = v10;
  if ( !v10 )
    goto LABEL_7;
  v19 = 1LL;
  v11 = 1LL;
  if ( v9 <= 1 )
    v11 = v8 - a2;
  v10 = 8 * v11;
  v5 = (__int64 *)((char *)v7 - v10);
  v17 = 1LL;
  if ( v7 != (__int64 *)((char *)v7 - v10) )
  {
    v13 = v15;
    v4 = v17;
    do
    {
      --v7;
      if ( !v13 )
        goto LABEL_7;
      if ( !v4 )
        goto LABEL_7;
      if ( --v4 >= v16 )
        goto LABEL_7;
      v10 = *v7;
      *(_QWORD *)(v13 + 8 * v4) = *v7;
    }
    while ( v7 != v5 );
  }
  if ( v9 > 1 )
  {
    v17 = 0LL;
    v15 = v6;
    v16 = v8;
    v19 = 0LL;
    v14 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_7;
      v14 = v8 < 0;
    }
    if ( !v14 || !v8 )
    {
      v19 = v8;
      v17 = v8;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        v18,
        v6 + 8 * a2,
        v6 + 8 * (v8 - 1),
        &v15);
      goto LABEL_6;
    }
LABEL_7:
    _o__invalid_parameter_noinfo_noreturn(v10, v4, v8, v5);
    JUMPOUT(0x18002AC5BLL);
  }
LABEL_6:
  a1[1] += 8LL;
  return v6 + 8 * a2;
}
