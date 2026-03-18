/*
 * XREFs of ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002A2AC
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18002A130 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002A43C (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A7C0 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 */

__int64 __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  const char *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v10; // r8
  __int64 result; // rax
  bool v12; // sf
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = (const char *)(a2 + a3);
  v8 = v6 >> 3;
  if ( a2 + a3 > v8 )
    std::_Xoverflow_error(v7);
  v14 = 0LL;
  v10 = v5 + 8 * v8;
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v8;
  if ( v7 != (const char *)v8 )
  {
    v12 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_12;
      v12 = a2 < 0;
    }
    if ( (!v12 || !a2) && (a2 <= 0 || v8 >= a2) )
    {
      v14 = a2;
      v16 = a2;
      v15 = v13;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        &v13,
        v5 + 8LL * (_QWORD)v7,
        v10,
        &v15);
      v3 = a1[1];
      goto LABEL_3;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v7, a2, v10, v8);
    JUMPOUT(0x1800EFBC5LL);
  }
LABEL_3:
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
