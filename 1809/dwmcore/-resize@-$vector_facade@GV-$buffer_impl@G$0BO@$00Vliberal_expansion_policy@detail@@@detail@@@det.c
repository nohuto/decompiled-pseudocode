/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800585B0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18005888C (--$uninitialized_copy@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3)
{
  _BYTE *v3; // rdi
  char *v5; // r8
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  LPVOID v13; // rax
  __int64 v14; // r8
  _BYTE *v15; // rdx
  LPVOID v16; // rdi
  _BYTE *v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  bool v23; // sf
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // r10
  unsigned __int64 v27; // rsi
  bool v28; // sf
  char *v29; // rax
  __int64 v30; // r8
  __int16 v31; // cx
  __int64 result; // rax
  unsigned __int16 *v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  _WORD *v36; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v38; // rbx
  __int128 v39; // [rsp+20h] [rbp-50h] BYREF
  __int64 v40; // [rsp+30h] [rbp-40h]
  __int128 v41; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h]

  v3 = (_BYTE *)*a1;
  v5 = (char *)a1[1];
  v7 = (__int64)&v5[-*a1] >> 1;
  if ( a2 <= v7 )
    return detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             a2);
  v8 = a1[2];
  v9 = a2 - v7;
  v10 = 0LL;
  if ( (v8 - (__int64)v5) >> 1 < a2 - v7 )
  {
    v11 = (v8 - (__int64)v3) >> 1;
    if ( a2 < v7 )
      std::_Xoverflow_error((const char *)v11);
    v12 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v11, v11, a2);
    v13 = operator new(saturated_mul(v12, 2uLL));
    v14 = a1[1];
    v15 = (_BYTE *)*a1;
    *(_QWORD *)&v39 = v13;
    v16 = v13;
    *((_QWORD *)&v39 + 1) = v7;
    v40 = 0LL;
    v41 = v39;
    v42 = 0LL;
    ((void (__fastcall *)(__int128 *, _BYTE *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
      &v39,
      v15,
      v14,
      &v41);
    v17 = (_BYTE *)*a1;
    v18 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v16;
    if ( v18 )
      v17 = 0LL;
    WPF::ProcessHeapImpl::Free(v17);
    v3 = (_BYTE *)*a1;
    v5 = (char *)(*a1 + 2 * v7);
    v19 = *a1 + 2 * v12;
    a1[1] = v5;
    a1[2] = v19;
  }
  v40 = 0LL;
  v20 = (v5 - v3) >> 1;
  *((_QWORD *)&v39 + 1) = v9;
  v21 = v20 - v7;
  v42 = 0LL;
  v22 = 2 * v20;
  *(_QWORD *)&v39 = &v3[2 * v20];
  v23 = v9 < 0;
  if ( v9 )
  {
    if ( !&v3[2 * v20] )
      goto LABEL_27;
    v23 = v9 < 0;
  }
  if ( v23 && v9 )
    goto LABEL_27;
  v42 = v9;
  v24 = ((v5 - v3) >> 1) - v7;
  if ( v9 < v21 )
    v24 = v9;
  v25 = 2 * v24;
  v40 = v9;
  v26 = &v5[-v25];
  if ( v5 != &v5[-v25] )
  {
    v27 = *((_QWORD *)&v39 + 1);
    v22 = v39;
    v8 = v40;
    do
    {
      v5 -= 2;
      if ( !v22 )
        goto LABEL_27;
      if ( !v8 )
        goto LABEL_27;
      if ( --v8 >= v27 )
        goto LABEL_27;
      *(_WORD *)(v22 + 2 * v8) = *(_WORD *)v5;
    }
    while ( v5 != v26 );
    v22 = 2 * v20;
  }
  if ( v21 > v9 )
  {
    *(_QWORD *)&v39 = v3;
    *((_QWORD *)&v39 + 1) = v20;
    v41 = v39;
    v28 = v20 < 0;
    if ( v20 )
    {
      if ( !v3 )
        goto LABEL_27;
      v28 = v20 < 0;
    }
    if ( v28 && v20 )
    {
LABEL_27:
      _o__invalid_parameter_noinfo_noreturn(v8, v20, v5, v22);
      __debugbreak();
    }
    v29 = &v3[2 * (v20 - v9)];
    v30 = v22 - (_QWORD)v29 + v41;
    while ( &v3[2 * v7] != v29 )
    {
      v31 = *((_WORD *)v29 - 1);
      v29 -= 2;
      *(_WORD *)&v29[v30] = v31;
    }
  }
  result = 2 * v9;
  a1[1] += 2 * v9;
  v33 = (unsigned __int16 *)&v3[2 * v7];
  if ( v9 )
  {
    if ( (unsigned __int64)v9 >= 8 && (v33 > a3 || (unsigned __int16 *)((char *)v33 + result - 2) < a3) )
    {
      v34 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
      do
        v10 += 8LL;
      while ( v10 < v34 );
      v35 = 2 * v34;
      result = *a3;
      v36 = &v3[2 * v7];
      for ( i = v35 >> 1; i; --i )
        *v36++ = result;
      v33 = (unsigned __int16 *)((char *)v33 + v35);
    }
    if ( v10 < v9 )
    {
      v38 = v9 - v10;
      do
      {
        result = *a3;
        *v33++ = result;
        --v38;
      }
      while ( v38 );
    }
  }
  return result;
}
