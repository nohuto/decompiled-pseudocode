/*
 * XREFs of ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EB4C4
 * Callers:
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z @ 0x1800EB174 (-UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLevel1@@0@Z @ 0x1800EAC5C (--$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLev.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EAD58 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_array_it.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@detail@@YAXV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@0@0V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@Z @ 0x1800EAE1C (--$move_backward_uninitialized@V-$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@V-$c.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EB338 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  bool v15; // sf
  __int64 v16; // rdi
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+50h] BYREF

  v23 = a3;
  detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    1uLL);
  v19 = 0LL;
  v6 = 1LL;
  v7 = *a1;
  v8 = a1[1];
  v9 = v8 - *a1;
  *((_QWORD *)&v18 + 1) = 1LL;
  v10 = v9 >> 4;
  v19 = 0LL;
  v11 = 16 * v10;
  v12 = v10 - a2;
  v13 = 16 * v10 + v7;
  *(_QWORD *)&v18 = v13;
  if ( !v13 )
    goto LABEL_15;
  v19 = 1LL;
  v14 = 1LL;
  v23 = v8;
  if ( v12 <= 1 )
    v14 = v10 - a2;
  v20 = v18;
  v21 = 1LL;
  v22 = v8 - 16 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
    &v22,
    &v23,
    (__int64 *)&v20);
  if ( v12 > 1 )
  {
    v19 = 0LL;
    *(_QWORD *)&v18 = v7;
    *((_QWORD *)&v18 + 1) = v10;
    v21 = 0LL;
    v15 = v10 < 0;
    if ( v10 )
    {
      if ( !v7 )
        goto LABEL_15;
      v15 = v10 < 0;
    }
    if ( !v15 || !v10 )
    {
      v21 = v10;
      v16 = 16 * a2;
      v19 = v10;
      std::move_backward<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        (__int64)&v20,
        (char *)(16 * a2 + v7),
        (char *)(16 * v10 + v7 - 16),
        &v18);
      goto LABEL_12;
    }
LABEL_15:
    _o__invalid_parameter_noinfo_noreturn(v5, v6);
    JUMPOUT(0x1800EB640LL);
  }
  v16 = 16 * a2;
LABEL_12:
  if ( v13 >= 16 * (a2 + 1) + v7 )
    v11 = 16 * (a2 + 1);
  detail::destruct_range<CD3DDeviceLevel1::CUnpinResource>((__int64 *)(v16 + v7), (__int64 *)(v7 + v11));
  a1[1] += 16LL;
  return v16 + v7;
}
