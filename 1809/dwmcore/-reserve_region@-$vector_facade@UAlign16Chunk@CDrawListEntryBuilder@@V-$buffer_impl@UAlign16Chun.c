/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1800E6864
 * Callers:
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x18018223C (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E6628 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  _OWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r11
  bool v12; // sf
  signed __int64 v13; // rcx
  _OWORD *v14; // r10
  bool v15; // sf
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-40h]

  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v7 = *a1;
  v8 = (_OWORD *)a1[1];
  v9 = ((__int64)v8 - *a1) >> 4;
  v10 = *a1 + 16 * v9;
  v11 = v9 - a2;
  v19 = v10;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !v10 )
      goto LABEL_21;
    v12 = a3 < 0;
  }
  if ( v12 )
  {
    v10 = -a3;
    if ( a3 )
      goto LABEL_21;
  }
  v13 = v9 - a2;
  if ( a3 < v11 )
    v13 = a3;
  v10 = 16 * v13;
  v14 = (_OWORD *)((char *)v8 - v10);
  if ( v8 != (_OWORD *)((char *)v8 - v10) )
  {
    v6 = *a1 + 16 * v9;
    --v8;
    if ( v19 )
    {
      v10 = v19 + 16 * a3;
      v6 = a3;
      while ( v6 )
      {
        --v6;
        v10 -= 16LL;
        if ( v6 >= a3 )
          break;
        *(_OWORD *)v10 = *v8;
        if ( v8 == v14 )
          goto LABEL_15;
        --v8;
      }
    }
    goto LABEL_21;
  }
LABEL_15:
  if ( v11 > a3 )
  {
    v15 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_21;
      v15 = v9 < 0;
    }
    if ( v15 )
    {
      v10 = -v9;
      if ( v9 )
      {
LABEL_21:
        _o__invalid_parameter_noinfo_noreturn(v10, v7, v6, v8);
        __debugbreak();
      }
    }
    v16 = (_OWORD *)(v7 + 16 * (v9 - a3));
    v17 = &v16[a3];
    while ( (_OWORD *)(v7 + 16 * a2) != v16 )
      *--v17 = *--v16;
  }
  a1[1] += 16 * a3;
  return v7 + 16 * a2;
}
