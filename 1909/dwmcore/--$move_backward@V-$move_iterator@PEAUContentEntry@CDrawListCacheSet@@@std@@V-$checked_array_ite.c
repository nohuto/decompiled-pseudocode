/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AD2C4
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18006674C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  CDirtyRegion *v11; // rcx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v6 = a3;
  v8 = -((a3 - a2) >> 4);
  if ( v8 < 0 && a4[2] < (unsigned __int64)-v8 || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8);
    __debugbreak();
  }
  v9 = *a4 + 16LL * a4[2];
  while ( a2 != v6 )
  {
    v6 -= 16LL;
    v9 -= 16LL;
    *(_DWORD *)v9 = *(_DWORD *)v6;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(v6 + 4);
    v10 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0LL;
    v11 = *(CDirtyRegion **)(v9 + 8);
    *(_QWORD *)(v9 + 8) = v10;
    if ( v11 )
      CDirtyRegion::Release(v11);
  }
  result = a1;
  a4[2] = (v9 - *a4) >> 4;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
