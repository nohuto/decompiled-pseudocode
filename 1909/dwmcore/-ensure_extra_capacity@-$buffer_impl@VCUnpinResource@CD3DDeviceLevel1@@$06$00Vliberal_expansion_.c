/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EB338
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EB4C4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLevel1@@0@Z @ 0x1800EAC5C (--$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLev.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EAEB4 (--$uninitialized_copy@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_arr.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  char *v8; // r8
  char *v9; // rdx
  LPVOID v10; // rbx
  __int64 *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = *(const char **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (__int64)&v3[-v4] >> 4 < a2 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 4;
    if ( v5 + a2 < v5 )
      std::_Xoverflow_error(v3);
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((__int64)&v3[-*(_QWORD *)a1] >> 4),
           (__int64)&v3[-*(_QWORD *)a1] >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = *(char **)(a1 + 8);
    v9 = *(char **)a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    std::uninitialized_copy<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
      (__int64)&v14,
      v9,
      v8,
      &v16);
    detail::destruct_range<CD3DDeviceLevel1::CUnpinResource>(*(__int64 **)a1, *(__int64 **)(a1 + 8));
    v11 = *(__int64 **)a1;
    v12 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = *(_QWORD *)a1 + 16 * v5;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v6;
    *(_QWORD *)(a1 + 8) = v13;
  }
}
