/*
 * XREFs of ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE794
 * Callers:
 *     ?RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z @ 0x18005A2B8 (-RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z.c)
 *     ??_GCBackdropRegion@@MEAAPEAXI@Z @ 0x18005A300 (--_GCBackdropRegion@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18005D7CC (--$move@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_iterator@PEAUB.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  const char *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // sf
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = (const char *)(a2 + a3);
  v10 = v6 / 24;
  if ( (unsigned __int64)v9 > v6 / 24 )
    std::_Xoverflow_error(v9);
  v15 = 0LL;
  *(_QWORD *)&v14 = v5;
  v11 = v5 + 24 * v10;
  *((_QWORD *)&v14 + 1) = v6 / 24;
  if ( v9 != (const char *)v10 )
  {
    v12 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_10;
      v12 = a2 < 0;
    }
    if ( v12 && a2 || a2 > 0 && v10 < a2 )
    {
LABEL_10:
      _o__invalid_parameter_noinfo_noreturn(v9, v10, v11, v6);
      __debugbreak();
    }
    v15 = a2;
    v17 = a2;
    v16 = v14;
    std::move<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
      (__int64)&v14,
      v5 + 24LL * (_QWORD)v9,
      v11,
      &v16);
    v3 = a1[1];
  }
  result = 24 * a3;
  a1[1] = v3 - 24 * a3;
  return result;
}
