/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800ADE20
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800ADFD0 (-ensure_extra_capacity@-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AD468 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AD754 (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int128 v4; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // rax
  __int64 v11; // r9
  bool v12; // sf
  unsigned __int16 *v13; // r8
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned __int16 *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _WORD *v19; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r11
  __int64 v25; // r10
  bool v26; // sf
  bool v27; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  _BYTE v30[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = a1[1];
  v6 = *a1;
  v7 = (__int64)(v4 - *a1) >> 1;
  if ( *((_QWORD *)&v4 + 1) <= v7 )
  {
    v22 = (__int64)(v4 - 2LL * *((_QWORD *)&v4 + 1) - v6) >> 1;
    v23 = v22 + *((_QWORD *)&v4 + 1);
    if ( v22 + *((_QWORD *)&v4 + 1) > v7 )
      std::_Xoverflow_error((const char *)v4);
    *(_QWORD *)&v28 = *a1;
    *((_QWORD *)&v28 + 1) = v7;
    v29 = 0LL;
    if ( v23 != v7 )
    {
      v31 = v29;
      v27 = v4 < 0;
      if ( *((_QWORD *)&v4 + 1) )
      {
        if ( !v6 )
          goto LABEL_50;
        v27 = v4 < 0;
      }
      if ( v27 && *((_QWORD *)&v4 + 1) || *((__int64 *)&v4 + 1) > 0 && v7 < *((_QWORD *)&v4 + 1) )
        goto LABEL_50;
      v31 = *((_QWORD *)&v4 + 1);
      v29 = *((_QWORD *)&v4 + 1);
      std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        v30,
        v6 + 2 * v23,
        v6 + 2 * v7,
        &v28);
      *(_QWORD *)&v4 = a1[1];
    }
    result = 2 * v22;
    a1[1] = v4 - 2 * v22;
    return result;
  }
  *((_QWORD *)&v4 + 1) -= v7;
  detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    *((_QWORD *)&v4 + 1));
  v8 = *a1;
  v9 = 0LL;
  v10 = (unsigned __int16 *)a1[1];
  v29 = 0LL;
  v11 = (__int64)((__int64)v10 - v8) >> 1;
  v6 = v11 - v7;
  v31 = 0LL;
  *(_QWORD *)&v4 = v8 + 2 * v11;
  v28 = v4;
  v12 = v4 < 0;
  if ( *((_QWORD *)&v4 + 1) )
  {
    if ( !(_QWORD)v4 )
      goto LABEL_50;
    v12 = v4 < 0;
  }
  if ( v12 )
  {
    *(_QWORD *)&v4 = -*((_QWORD *)&v4 + 1);
    if ( *((_QWORD *)&v4 + 1) )
      goto LABEL_50;
  }
  v31 = *((_QWORD *)&v4 + 1);
  *(_QWORD *)&v4 = v11 - v7;
  if ( *((_QWORD *)&v4 + 1) < v6 )
    *(_QWORD *)&v4 = *((_QWORD *)&v4 + 1);
  *(_QWORD *)&v4 = 2 * v4;
  v29 = *((_QWORD *)&v4 + 1);
  v13 = (unsigned __int16 *)((char *)v10 - v4);
  if ( v10 != (unsigned __int16 *)((char *)v10 - v4) )
  {
    v24 = v28;
    v25 = v29;
    do
    {
      --v10;
      if ( !v24 )
        goto LABEL_50;
      if ( !v25 )
        goto LABEL_50;
      if ( (unsigned __int64)--v25 >= *((_QWORD *)&v28 + 1) )
        goto LABEL_50;
      *(_QWORD *)&v4 = *v10;
      *(_WORD *)(v24 + 2 * v25) = v4;
    }
    while ( v10 != v13 );
  }
  if ( v6 <= *((_QWORD *)&v4 + 1) )
  {
    v14 = 2 * v7;
    goto LABEL_11;
  }
  v29 = 0LL;
  *(_QWORD *)&v28 = v8;
  *((_QWORD *)&v28 + 1) = v11;
  v31 = 0LL;
  v26 = v11 < 0;
  if ( v11 )
  {
    if ( !v8 )
      goto LABEL_50;
    v26 = v11 < 0;
  }
  if ( v26 && v11 )
  {
LABEL_50:
    _o__invalid_parameter_noinfo_noreturn(v4, v6);
    JUMPOUT(0x18013ECC3LL);
  }
  v31 = v11;
  v14 = 2 * v7;
  v29 = v11;
  std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
    v30,
    v14 + v8,
    v8 + 2 * (v11 - *((_QWORD *)&v4 + 1)),
    &v28);
LABEL_11:
  result = 2LL * *((_QWORD *)&v4 + 1);
  a1[1] += 2LL * *((_QWORD *)&v4 + 1);
  v16 = (unsigned __int16 *)(v14 + v8);
  if ( *((_QWORD *)&v4 + 1) )
  {
    if ( *((_QWORD *)&v4 + 1) >= 8uLL && (v16 > a3 || (unsigned __int16 *)((char *)v16 + result - 2) < a3) )
    {
      v17 = *((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFF8uLL;
      do
        v9 += 8LL;
      while ( v9 < v17 );
      v18 = 2 * v17;
      result = *a3;
      v19 = (_WORD *)(v14 + v8);
      for ( i = v18 >> 1; i; --i )
        *v19++ = result;
      v16 = (unsigned __int16 *)((char *)v16 + v18);
    }
    if ( v9 < *((_QWORD *)&v4 + 1) )
    {
      v21 = *((_QWORD *)&v4 + 1) - v9;
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
