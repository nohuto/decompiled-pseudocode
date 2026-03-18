/*
 * XREFs of ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801AEAA8
 * Callers:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18004D25C (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r8
  bool v8; // cc
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rax
  CDirtyRegion *v12; // rcx
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v7 = ((__int64)a3 - a2) >> 4;
  v8 = v7 <= 0;
  if ( v7 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v7 )
      goto LABEL_6;
    v8 = v7 <= 0;
  }
  if ( !v8 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, v7, a4);
    __debugbreak();
  }
  v9 = (_QWORD *)(a2 + 8);
  v10 = *a4 + 16LL * a4[2];
  while ( v9 - 1 != a3 )
  {
    *(_DWORD *)v10 = *((_DWORD *)v9 - 2);
    *(_DWORD *)(v10 + 4) = *((_DWORD *)v9 - 1);
    v11 = *v9;
    *v9 = 0LL;
    v12 = *(CDirtyRegion **)(v10 + 8);
    *(_QWORD *)(v10 + 8) = v11;
    if ( v12 )
      CDirtyRegion::Release(v12);
    v10 += 16LL;
    v9 += 2;
  }
  result = a1;
  a4[2] = (v10 - *a4) >> 4;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
