/*
 * XREFs of ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18025E318
 * Callers:
 *     ??$emplace_back@VMatrix3x2F@D2D1@@@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVMatrix3x2F@D2D1@@@Z @ 0x18025E0F4 (--$emplace_back@VMatrix3x2F@D2D1@@@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180250F20 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18025E1CC (-ensure_extra_capacity@-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int128 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // sf
  __int64 v14; // rbx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v9 + 1) = 1LL;
  detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v4 = *a1;
  v5 = a1[1];
  v17 = 0LL;
  v6 = (unsigned __int128)((v5 - v4) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v19 = 0LL;
  v7 = (v5 - v4) / 24;
  v8 = v7 - a2;
  *(_QWORD *)&v9 = v4 + 24 * v7;
  v16 = v9;
  v18 = v9;
  if ( !(_QWORD)v9 )
    goto LABEL_19;
  v19 = 1LL;
  v10 = 1LL;
  if ( v8 <= 1 )
    v10 = v7 - a2;
  v16 = v9;
  v17 = 1LL;
  v11 = 24 * v10;
  v6 = v5 - v11;
  if ( v5 != v5 - v11 )
  {
    v12 = v17;
    *(_QWORD *)&v9 = v18 + 24;
    do
    {
      v5 -= 24LL;
      if ( !(_QWORD)v16 )
        goto LABEL_19;
      if ( !v12 )
        goto LABEL_19;
      --v12;
      *(_QWORD *)&v9 = v9 - 24;
      if ( v12 >= *((_QWORD *)&v16 + 1) )
        goto LABEL_19;
      *(_OWORD *)v9 = *(_OWORD *)v5;
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v6 );
  }
  if ( v8 <= 1 )
  {
    v14 = 24 * a2;
  }
  else
  {
    *(_QWORD *)&v18 = v4;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = 0LL;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v4 )
        goto LABEL_19;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_19:
      _o__invalid_parameter_noinfo_noreturn(v9, v6);
      JUMPOUT(0x18025E4C0LL);
    }
    v19 = v7;
    v14 = 24 * a2;
    v16 = v18;
    v17 = v7;
    std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      (__int64)&v18,
      24 * a2 + v4,
      v4 + 24 * (v7 - 1),
      (__int64 *)&v16);
  }
  a1[1] += 24LL;
  return v14 + v4;
}
