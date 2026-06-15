/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180067828
 * Callers:
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180067FB8 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@KV?$allocator@K@std@@@std@@AEAAXQEAK_K1@Z @ 0x180068604 (-_Change_array@-$vector@KV-$allocator@K@std@@@std@@AEAAXQEAK_K1@Z.c)
 *     ?_Xlength@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x18006866C (-_Xlength@-$vector@KV-$allocator@K@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  char *v16; // rcx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<unsigned long>::_Xlength(a1);
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *((_DWORD *)v13 + v6) = *a3;
  v14 = a1[1];
  v15 = *a1;
  v16 = (char *)v13;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v13, v15, a2 - (_BYTE *)*a1);
    v16 = (char *)v13 + 4 * v6 + 4;
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  std::vector<unsigned long>::_Change_array(a1, v13, v8, v11, -2LL);
  return (__int64)*a1 + 4 * v6;
}
