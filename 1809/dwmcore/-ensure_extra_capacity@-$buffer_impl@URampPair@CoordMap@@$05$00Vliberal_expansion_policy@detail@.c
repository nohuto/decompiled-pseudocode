/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000CE34
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000CC78 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18022CF68 (--$uninitialized_copy@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  void *v8; // rax
  __int64 v9; // r8
  char *v10; // rdx
  void *v11; // rbx
  char *v12; // rcx
  bool v13; // zf
  char *v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((__int64)&v3[-v4] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (__int64)&v3[-v4] / 12 < a2 )
  {
    v6 = (v4 - *a1) / 12;
    if ( v6 + a2 < v6 )
      std::_Xoverflow_error(v3);
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)&v3[-*a1],
           (__int64)&v3[-*a1] / 12,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0xCuLL));
    v9 = a1[1];
    v10 = (char *)*a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v6;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v15,
      v10,
      v9,
      &v17);
    v12 = (char *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    WPF::ProcessHeapImpl::Free(v12);
    v14 = (char *)*a1;
    result = 3 * v7;
    a1[1] = *a1 + 12 * v6;
    a1[2] = &v14[12 * v7];
  }
  return result;
}
