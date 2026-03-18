/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCProjectedShadowReceiver@@@?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@QEAAPEAPEAVCProjectedShadowReceiver@@QEAPEAV2@AEBQEAV2@@Z @ 0x180021A80
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1800035E0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<CProjectedShadowReceiver *>::_Emplace_reallocate<CProjectedShadowReceiver * const &>(
        char *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  char *v14; // rdi
  char *v15; // r15
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  char *result; // rax

  v4 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error(a1);
  v8 = v6 + 1;
  v9 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = &v14[8 * v4];
  *(_QWORD *)v15 = *a3;
  v16 = v14;
  v17 = (_BYTE *)*((_QWORD *)a1 + 1);
  v18 = *(_BYTE **)a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v14, v18, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = v15 + 8;
    v19 = *((_QWORD *)a1 + 1) - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = &v14[8 * v4];
  *((_QWORD *)a1 + 1) = &v14[8 * v8];
  *((_QWORD *)a1 + 2) = &v14[v12];
  *(_QWORD *)a1 = v14;
  return result;
}
