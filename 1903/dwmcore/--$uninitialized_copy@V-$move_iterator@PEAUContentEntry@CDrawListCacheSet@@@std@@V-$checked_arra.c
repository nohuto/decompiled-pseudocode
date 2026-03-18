/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AEC60
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18004E7EC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // r10
  bool v6; // cc
  __int64 v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = ((__int64)a3 - a2) >> 4;
  v6 = v5 <= 0;
  if ( v5 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v5 )
      goto LABEL_6;
    v6 = v5 <= 0;
  }
  if ( !v6 && a4[1] - a4[2] < (unsigned __int64)v5 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    __debugbreak();
  }
  v7 = *a4 + 16LL * a4[2];
  for ( i = (_QWORD *)(a2 + 8); i - 1 != a3; i += 2 )
  {
    *(_DWORD *)v7 = *((_DWORD *)i - 2);
    *(_DWORD *)(v7 + 4) = *((_DWORD *)i - 1);
    v9 = *i;
    *i = 0LL;
    *(_QWORD *)(v7 + 8) = v9;
    v7 += 16LL;
  }
  result = a1;
  a4[2] = (v7 - *a4) >> 4;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
