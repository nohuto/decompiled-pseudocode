/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801AEB98
 * Callers:
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801AE9E0 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AD7DC (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AE7D4 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rsi
  _OWORD *v6; // rdx
  __int64 v7; // r8
  __int128 v8; // rcx
  unsigned __int64 v9; // r10
  bool v10; // sf
  _OWORD *v11; // rax
  unsigned __int64 v12; // r9
  bool v13; // sf
  __int64 v14; // rdi
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v8 + 1) = a3;
  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v5 = *a1;
  v6 = (_OWORD *)a1[1];
  v17 = 0LL;
  v7 = ((__int64)v6 - v5) >> 4;
  v19 = 0LL;
  *(_QWORD *)&v8 = v5 + 16 * v7;
  v9 = v7 - a2;
  v16 = v8;
  v18 = v8;
  v10 = v8 < 0;
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( !(_QWORD)v8 )
      goto LABEL_20;
    v10 = v8 < 0;
  }
  if ( v10 && *((_QWORD *)&v8 + 1) )
    goto LABEL_20;
  v19 = *((_QWORD *)&v8 + 1);
  *(_QWORD *)&v8 = *((_QWORD *)&v8 + 1);
  if ( *((_QWORD *)&v8 + 1) >= v9 )
    *(_QWORD *)&v8 = v7 - a2;
  *(_QWORD *)&v8 = 16 * v8;
  v11 = (_OWORD *)((char *)v6 - v8);
  v17 = *((_QWORD *)&v8 + 1);
  if ( v6 != (_OWORD *)((char *)v6 - v8) )
  {
    v12 = v17;
    *(_QWORD *)&v8 = v18 + 16LL * *((_QWORD *)&v8 + 1);
    do
    {
      --v6;
      if ( !(_QWORD)v16 )
        goto LABEL_20;
      if ( !v12 )
        goto LABEL_20;
      --v12;
      *(_QWORD *)&v8 = v8 - 16;
      if ( v12 >= *((_QWORD *)&v16 + 1) )
        goto LABEL_20;
      *(_OWORD *)v8 = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v9 <= *((_QWORD *)&v8 + 1) )
  {
    v14 = 16 * a2;
  }
  else
  {
    *(_QWORD *)&v18 = v5;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = 0LL;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_20;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v8, v6);
      __debugbreak();
    }
    v19 = v7;
    v14 = 16 * a2;
    v16 = v18;
    v17 = v7;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      (__int64)&v18,
      (_OWORD *)(v14 + v5),
      (_OWORD *)(v5 + 16 * (v7 - *((_QWORD *)&v8 + 1))),
      &v16);
  }
  a1[1] += 16LL * *((_QWORD *)&v8 + 1);
  return v14 + v5;
}
