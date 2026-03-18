/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18025FA8C
 * Callers:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18025FBD8 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18020E1BC (--$uninitialized_copy@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((__int64)&v3[-v4] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (__int64)&v3[-v4] / 24 < a2 )
  {
    v6 = (v4 - *a1) / 24;
    if ( v6 + a2 < v6 )
      std::_Xoverflow_error(v3);
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)&v3[-*a1],
           (__int64)&v3[-*a1] / 24,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0x18uLL));
    v9 = a1[1];
    v10 = *a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v6;
    v11 = (__int64)v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
      (__int64)&v15,
      v10,
      v9,
      (__int64 *)&v17);
    v12 = (void *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *a1;
    result = 3 * v7;
    a1[1] = *a1 + 24 * v6;
    a1[2] = v14 + 24 * v7;
  }
  return result;
}
