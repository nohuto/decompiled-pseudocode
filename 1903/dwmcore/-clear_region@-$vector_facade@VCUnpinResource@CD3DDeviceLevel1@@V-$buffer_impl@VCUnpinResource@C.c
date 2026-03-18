/*
 * XREFs of ?clear_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EA42C
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDeviceLevel1@@@2@@Z @ 0x1800EA630 (-erase@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@CD3DDevi.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLevel1@@0@Z @ 0x1800E9E3C (--$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLev.c)
 *     ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800E9E74 (--$move@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_array_iterator@PE.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v6; // r9
  const char *v7; // rcx
  __int64 *v8; // rbx
  bool v9; // sf
  __int64 v10; // rdi
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = (const char *)(a2 + a3);
  if ( a2 + a3 > v6 )
    std::_Xoverflow_error(v7);
  v12 = 0LL;
  v8 = (__int64 *)(v4 + 16 * v6);
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v6;
  if ( v7 != (const char *)v6 )
  {
    v9 = a2 < 0;
    if ( a2 )
    {
      if ( !v4 )
        goto LABEL_10;
      v9 = a2 < 0;
    }
    if ( v9 && a2 || a2 > 0 && v6 < a2 )
    {
LABEL_10:
      _o__invalid_parameter_noinfo_noreturn(v7, a2, v4, v6);
      __debugbreak();
    }
    v12 = a2;
    v13 = v11;
    v14 = a2;
    std::move<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
      (__int64)&v11,
      (__int64 *)(v4 + 16LL * (_QWORD)v7),
      (__int64)v8,
      &v13);
  }
  v10 = 16 * a3;
  detail::destruct_range<CD3DDeviceLevel1::CUnpinResource>(&v8[v10 / 0xFFFFFFFFFFFFFFF8uLL], v8);
  a1[1] -= v10;
}
