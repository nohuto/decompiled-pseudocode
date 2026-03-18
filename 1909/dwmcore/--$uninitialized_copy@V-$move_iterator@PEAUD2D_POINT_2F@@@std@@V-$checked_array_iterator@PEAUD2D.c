/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801AD5F8
 * Callers:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE3D4 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE4A4 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AE8DC (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v5; // r10
  bool v6; // cc
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - a2;
  v6 = v5 <= 0;
  if ( v5 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v5 )
      goto LABEL_6;
    v6 = v5 <= 0;
  }
  if ( !v6 && a4[1] - a4[2] < (unsigned __int64)v5 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
  }
  v7 = *a4;
  v8 = (_QWORD *)(*a4 + 8 * a4[2]);
  while ( a2 != a3 )
    *v8++ = *a2++;
  result = a1;
  a4[2] = ((__int64)v8 - v7) >> 3;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
