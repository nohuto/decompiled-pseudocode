/*
 * XREFs of ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x18005FC20
 * Callers:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEF64 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int128 *a4)
{
  _QWORD *v4; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  CMILRefCountBase *v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-58h]

  v4 = (_QWORD *)(a2 + 8);
  v11 = *a4;
  v7 = *(_QWORD *)a4 + 16LL * *((_QWORD *)a4 + 2);
  while ( v4 - 1 != a3 )
  {
    *(_DWORD *)v7 = *((_DWORD *)v4 - 2);
    *(_DWORD *)(v7 + 4) = *((_DWORD *)v4 - 1);
    v8 = *v4;
    *v4 = 0LL;
    v9 = *(CMILRefCountBase **)(v7 + 8);
    *(_QWORD *)(v7 + 8) = v8;
    if ( v9 )
      CMILRefCountBase::Release(v9);
    v7 += 16LL;
    v4 += 2;
  }
  *(_OWORD *)a1 = v11;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v7 - (__int64)v11) >> 4;
  return result;
}
