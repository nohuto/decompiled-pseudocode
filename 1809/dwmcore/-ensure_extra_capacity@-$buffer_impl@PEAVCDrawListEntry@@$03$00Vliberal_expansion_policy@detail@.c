/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E6520
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800E6734 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800671D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  LPVOID v11; // rbx
  _QWORD *v12; // rcx
  bool v13; // zf
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  result = (__int64)&v3[-v4] >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - *a1) >> 3;
    if ( v6 + a2 < v6 )
      std::_Xoverflow_error(v3);
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((__int64)&v3[-*a1] >> 3),
           (__int64)&v3[-*a1] >> 3,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 8uLL));
    v9 = (_QWORD *)a1[1];
    v10 = (_QWORD *)*a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v6;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      (__int64)&v15,
      v10,
      v9,
      &v17);
    v12 = (_QWORD *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    WPF::ProcessHeapImpl::Free(v12);
    v14 = (_QWORD *)*a1;
    a1[1] = *a1 + 8 * v6;
    result = (unsigned __int64)&v14[v7];
    a1[2] = result;
  }
  return result;
}
