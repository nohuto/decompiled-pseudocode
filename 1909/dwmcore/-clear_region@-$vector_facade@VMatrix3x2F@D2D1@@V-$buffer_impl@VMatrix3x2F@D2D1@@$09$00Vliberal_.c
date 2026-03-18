/*
 * XREFs of ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020DB20
 * Callers:
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020DAE0 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 *     ?PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025212C (-PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18020CACC (--$uninitialized_copy@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  const char *v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // sf
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = (const char *)(a2 + a3);
  v10 = v6 / 24;
  if ( (unsigned __int64)v9 > v6 / 24 )
    std::_Xoverflow_error(v9);
  v14 = 0LL;
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v6 / 24;
  if ( v9 != (const char *)v10 )
  {
    v11 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_11;
      v11 = a2 < 0;
    }
    if ( v11 && a2 || a2 > 0 && v10 < a2 )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v9, v10);
      __debugbreak();
    }
    v14 = a2;
    v16 = a2;
    v15 = v13;
    std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
      (__int64)&v13,
      v5 + 24LL * (_QWORD)v9,
      v5 + 24 * v10,
      (__int64 *)&v15);
    v3 = a1[1];
  }
  result = 24 * a3;
  a1[1] = v3 - 24 * a3;
  return result;
}
