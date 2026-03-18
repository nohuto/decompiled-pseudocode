/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801842D8
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002757C (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v5; // rcx
  __int64 v7; // r9
  _DWORD *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // [rsp+10h] [rbp-18h]

  v5 = (_QWORD *)(a2 + 8);
  v13 = a4[2];
  v7 = *a4;
  v8 = (_DWORD *)(16 * v13 + v7);
  v9 = 16 * v13 - a2 + v7;
  while ( v5 - 1 != a3 )
  {
    *v8 = *((_DWORD *)v5 - 2);
    v8 += 4;
    *(_DWORD *)((char *)v5 + v9 - 4) = *((_DWORD *)v5 - 1);
    v10 = *v5;
    *v5 = 0LL;
    *(_QWORD *)((char *)v5 + v9) = v10;
    v5 += 2;
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 4;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
