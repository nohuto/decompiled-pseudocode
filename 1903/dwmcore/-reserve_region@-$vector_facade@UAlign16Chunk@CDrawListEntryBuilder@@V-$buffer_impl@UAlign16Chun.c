/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801B0458
 * Callers:
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801B02A0 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AF09C (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B0094 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rsi
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int128 v9; // rcx
  unsigned __int64 v10; // r10
  bool v11; // sf
  _OWORD *v12; // rax
  bool v13; // sf
  __int64 v14; // rdi
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v9 + 1) = a3;
  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = (_OWORD *)a1[1];
  v17 = 0LL;
  v8 = ((__int64)v7 - v6) >> 4;
  v19 = 0LL;
  *(_QWORD *)&v9 = v6 + 16 * v8;
  v10 = v8 - a2;
  v16 = v9;
  v18 = v9;
  v11 = v9 < 0;
  if ( *((_QWORD *)&v9 + 1) )
  {
    if ( !(_QWORD)v9 )
      goto LABEL_20;
    v11 = v9 < 0;
  }
  if ( v11 && *((_QWORD *)&v9 + 1) )
    goto LABEL_20;
  v19 = *((_QWORD *)&v9 + 1);
  *(_QWORD *)&v9 = *((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) >= v10 )
    *(_QWORD *)&v9 = v8 - a2;
  *(_QWORD *)&v9 = 16 * v9;
  v12 = (_OWORD *)((char *)v7 - v9);
  v17 = *((_QWORD *)&v9 + 1);
  if ( v7 != (_OWORD *)((char *)v7 - v9) )
  {
    v5 = v17;
    *(_QWORD *)&v9 = v18 + 16LL * *((_QWORD *)&v9 + 1);
    do
    {
      --v7;
      if ( !(_QWORD)v16 )
        goto LABEL_20;
      if ( !v5 )
        goto LABEL_20;
      --v5;
      *(_QWORD *)&v9 = v9 - 16;
      if ( v5 >= *((_QWORD *)&v16 + 1) )
        goto LABEL_20;
      *(_OWORD *)v9 = *v7;
    }
    while ( v7 != v12 );
  }
  if ( v10 <= *((_QWORD *)&v9 + 1) )
  {
    v14 = 16 * a2;
  }
  else
  {
    *(_QWORD *)&v18 = v6;
    *((_QWORD *)&v18 + 1) = v8;
    v19 = 0LL;
    v13 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_20;
      v13 = v8 < 0;
    }
    if ( v13 && v8 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v9, v7, v8, v5);
      __debugbreak();
    }
    v19 = v8;
    v14 = 16 * a2;
    v16 = v18;
    v17 = v8;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      (__int64)&v18,
      (_OWORD *)(v14 + v6),
      (_OWORD *)(v6 + 16 * (v8 - *((_QWORD *)&v9 + 1))),
      &v16);
  }
  a1[1] += 16LL * *((_QWORD *)&v9 + 1);
  return v14 + v6;
}
