/*
 * XREFs of ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EA6A4
 * Callers:
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z @ 0x1800EA354 (-UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLevel1@@0@Z @ 0x1800E9E3C (--$destruct_range@VCUnpinResource@CD3DDeviceLevel1@@@detail@@YAXPEAVCUnpinResource@CD3DDeviceLev.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800E9F38 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_array_it.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@detail@@YAXV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@0@0V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@Z @ 0x1800E9FFC (--$move_backward_uninitialized@V-$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@V-$c.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EA518 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  bool v17; // sf
  __int64 v18; // rdi
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF

  v25 = a3;
  detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    1uLL);
  v21 = 0LL;
  v8 = 1LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = v10 - *a1;
  *((_QWORD *)&v20 + 1) = 1LL;
  v12 = v11 >> 4;
  v21 = 0LL;
  v13 = 16 * v12;
  v14 = v12 - a2;
  v15 = 16 * v12 + v9;
  *(_QWORD *)&v20 = v15;
  if ( !v15 )
    goto LABEL_15;
  v21 = 1LL;
  v16 = 1LL;
  v25 = v10;
  if ( v14 <= 1 )
    v16 = v12 - a2;
  v22 = v20;
  v23 = 1LL;
  v24 = v10 - 16 * v16;
  detail::move_backward_uninitialized<detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
    &v24,
    &v25,
    (__int64 *)&v22,
    v7);
  if ( v14 > 1 )
  {
    v21 = 0LL;
    *(_QWORD *)&v20 = v9;
    *((_QWORD *)&v20 + 1) = v12;
    v23 = 0LL;
    v17 = v12 < 0;
    if ( v12 )
    {
      if ( !v9 )
        goto LABEL_15;
      v17 = v12 < 0;
    }
    if ( !v17 || !v12 )
    {
      v23 = v12;
      v18 = 16 * a2;
      v21 = v12;
      std::move_backward<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        (__int64)&v22,
        (__int64 *)(16 * a2 + v9),
        16 * v12 + v9 - 16,
        &v20);
      goto LABEL_12;
    }
LABEL_15:
    _o__invalid_parameter_noinfo_noreturn(v5, v8, v6, v7);
    JUMPOUT(0x1800EA820LL);
  }
  v18 = 16 * a2;
LABEL_12:
  if ( v15 >= 16 * (a2 + 1) + v9 )
    v13 = 16 * (a2 + 1);
  detail::destruct_range<CD3DDeviceLevel1::CUnpinResource>((__int64 *)(v18 + v9), (__int64 *)(v9 + v13));
  a1[1] += 16LL;
  return v18 + v9;
}
