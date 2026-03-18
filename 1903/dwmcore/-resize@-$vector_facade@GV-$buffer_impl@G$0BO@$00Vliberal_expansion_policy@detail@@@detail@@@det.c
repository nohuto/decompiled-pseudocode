/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x18002D080
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002D230 (-ensure_extra_capacity@-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AED28 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AF014 (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  __int128 v5; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // r8
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int16 *v12; // rax
  bool v13; // sf
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned __int16 *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _WORD *v19; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r11
  __int64 v24; // r10
  bool v25; // sf
  bool v26; // sf
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  _BYTE v29[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v5 + 1) = a2;
  *(_QWORD *)&v5 = a1[1];
  v7 = *a1;
  v8 = (__int64)(v5 - *a1) >> 1;
  if ( *((_QWORD *)&v5 + 1) <= v8 )
  {
    v22 = (__int64)(v5 - 2LL * *((_QWORD *)&v5 + 1) - v7) >> 1;
    v9 = (unsigned __int16 *)(v22 + *((_QWORD *)&v5 + 1));
    if ( v22 + *((_QWORD *)&v5 + 1) > v8 )
      std::_Xoverflow_error((const char *)v5);
    *(_QWORD *)&v27 = *a1;
    *((_QWORD *)&v27 + 1) = v8;
    v28 = 0LL;
    if ( v9 != (unsigned __int16 *)v8 )
    {
      v30 = v28;
      v26 = v5 < 0;
      if ( *((_QWORD *)&v5 + 1) )
      {
        if ( !v7 )
          goto LABEL_50;
        v26 = v5 < 0;
      }
      if ( v26 && *((_QWORD *)&v5 + 1) || *((__int64 *)&v5 + 1) > 0 && v8 < *((_QWORD *)&v5 + 1) )
        goto LABEL_50;
      v30 = *((_QWORD *)&v5 + 1);
      v28 = *((_QWORD *)&v5 + 1);
      std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        v29,
        v7 + 2LL * (_QWORD)v9,
        v7 + 2 * v8,
        &v27);
      *(_QWORD *)&v5 = a1[1];
    }
    result = 2 * v22;
    a1[1] = v5 - 2 * v22;
    return result;
  }
  *((_QWORD *)&v5 + 1) -= v8;
  detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    *((_QWORD *)&v5 + 1));
  v10 = *a1;
  v11 = 0LL;
  v12 = (unsigned __int16 *)a1[1];
  v28 = 0LL;
  a4 = (__int64)((__int64)v12 - v10) >> 1;
  v7 = a4 - v8;
  v30 = 0LL;
  *(_QWORD *)&v5 = v10 + 2 * a4;
  v27 = v5;
  v13 = v5 < 0;
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( !(_QWORD)v5 )
      goto LABEL_50;
    v13 = v5 < 0;
  }
  if ( v13 )
  {
    *(_QWORD *)&v5 = -*((_QWORD *)&v5 + 1);
    if ( *((_QWORD *)&v5 + 1) )
      goto LABEL_50;
  }
  v30 = *((_QWORD *)&v5 + 1);
  *(_QWORD *)&v5 = a4 - v8;
  if ( *((_QWORD *)&v5 + 1) < v7 )
    *(_QWORD *)&v5 = *((_QWORD *)&v5 + 1);
  *(_QWORD *)&v5 = 2 * v5;
  v28 = *((_QWORD *)&v5 + 1);
  v9 = (unsigned __int16 *)((char *)v12 - v5);
  if ( v12 != (unsigned __int16 *)((char *)v12 - v5) )
  {
    v23 = v27;
    v24 = v28;
    do
    {
      --v12;
      if ( !v23 )
        goto LABEL_50;
      if ( !v24 )
        goto LABEL_50;
      if ( (unsigned __int64)--v24 >= *((_QWORD *)&v27 + 1) )
        goto LABEL_50;
      *(_QWORD *)&v5 = *v12;
      *(_WORD *)(v23 + 2 * v24) = v5;
    }
    while ( v12 != v9 );
  }
  if ( v7 <= *((_QWORD *)&v5 + 1) )
  {
    v14 = 2 * v8;
    goto LABEL_11;
  }
  v28 = 0LL;
  *(_QWORD *)&v27 = v10;
  *((_QWORD *)&v27 + 1) = a4;
  v30 = 0LL;
  v25 = a4 < 0;
  if ( a4 )
  {
    if ( !v10 )
      goto LABEL_50;
    v25 = a4 < 0;
  }
  if ( v25 && a4 )
  {
LABEL_50:
    _o__invalid_parameter_noinfo_noreturn(v5, v7, v9, a4);
    JUMPOUT(0x1800F0A5BLL);
  }
  v30 = a4;
  v14 = 2 * v8;
  v28 = a4;
  std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
    v29,
    v14 + v10,
    v10 + 2 * (a4 - *((_QWORD *)&v5 + 1)),
    &v27);
LABEL_11:
  result = 2LL * *((_QWORD *)&v5 + 1);
  a1[1] += 2LL * *((_QWORD *)&v5 + 1);
  v16 = (unsigned __int16 *)(v14 + v10);
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( *((_QWORD *)&v5 + 1) >= 8uLL && (v16 > a3 || (unsigned __int16 *)((char *)v16 + result - 2) < a3) )
    {
      v17 = *((_QWORD *)&v5 + 1) & 0xFFFFFFFFFFFFFFF8uLL;
      do
        v11 += 8LL;
      while ( v11 < v17 );
      v18 = 2 * v17;
      result = *a3;
      v19 = (_WORD *)(v14 + v10);
      for ( i = v18 >> 1; i; --i )
        *v19++ = result;
      v16 = (unsigned __int16 *)((char *)v16 + v18);
    }
    if ( v11 < *((_QWORD *)&v5 + 1) )
    {
      v21 = *((_QWORD *)&v5 + 1) - v11;
      do
      {
        result = *a3;
        *v16++ = result;
        --v21;
      }
      while ( v21 );
    }
  }
  return result;
}
