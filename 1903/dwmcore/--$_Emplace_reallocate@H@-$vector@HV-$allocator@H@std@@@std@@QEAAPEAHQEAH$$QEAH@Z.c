/*
 * XREFs of ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180178BEC
 * Callers:
 *     _lambda_7073ea3a1159c22cf152f2e0fb8a80e9_::_lambda_invoker_cdecl_ @ 0x1800BD7B0 (_lambda_7073ea3a1159c22cf152f2e0fb8a80e9_--_lambda_invoker_cdecl_.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EEBB8 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x180178DF0 (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 */

__int64 __fastcall std::vector<int>::_Emplace_reallocate<int>(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // r14
  char *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v4 = (__int64)&a2[-*(_QWORD *)a1] >> 2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_DWORD *)&v13[4 * v4] = *a3;
  v14 = v13;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v17 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v14 = &v13[4 * v4 + 4];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<int>::_Change_array(a1, v13, v8, v11);
  return *(_QWORD *)a1 + 4 * v4;
}
