/*
 * XREFs of ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B5B68
 * Callers:
 *     ??_GCBackdropRegion@@MEAAPEAXI@Z @ 0x1800B5A80 (--_GCBackdropRegion@@MEAAPEAXI@Z.c)
 *     ?RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z @ 0x18025275C (-RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18020E1BC (--$uninitialized_copy@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_.c)
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
  __int64 result; // rax
  bool v13; // sf
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
    v13 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_12;
      v13 = a2 < 0;
    }
    if ( (!v13 || !a2) && (a2 <= 0 || v10 >= a2) )
    {
      v15 = a2;
      v17 = a2;
      v16 = v14;
      std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
        &v14,
        v5 + 24LL * (_QWORD)v9,
        v11,
        &v16);
      v3 = a1[1];
      goto LABEL_3;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v9, v10, v11, v6);
    JUMPOUT(0x1801403E5LL);
  }
LABEL_3:
  result = 24 * a3;
  a1[1] = v3 - 24 * a3;
  return result;
}
