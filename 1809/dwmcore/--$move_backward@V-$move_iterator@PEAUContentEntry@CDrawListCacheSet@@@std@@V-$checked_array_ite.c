/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x180184220
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800273AC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  CMILRefCountBase *v11; // rcx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = (_QWORD *)(a3 + 8);
  v8 = *a4 + 16LL * a4[2];
  while ( a2 != v4 - 1 )
  {
    v9 = *((_DWORD *)v4 - 6);
    v4 -= 2;
    v8 -= 16LL;
    *(_DWORD *)v8 = v9;
    *(_DWORD *)(v8 + 4) = *((_DWORD *)v4 - 1);
    v10 = *v4;
    *v4 = 0LL;
    v11 = *(CMILRefCountBase **)(v8 + 8);
    *(_QWORD *)(v8 + 8) = v10;
    if ( v11 )
      CMILRefCountBase::Release(v11);
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 4;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
