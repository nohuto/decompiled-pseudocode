/*
 * XREFs of ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18002F46C
 * Callers:
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800300D4 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void *__fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  const char *v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  SIZE_T v6; // rcx
  char *v7; // r14
  __int64 v8; // r15
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  size_t v12; // r8
  char *v13; // rcx
  void *result; // rax
  __int64 v15; // rcx

  v2 = 1LL;
  v3 = (const char *)a1[2];
  if ( v3 )
    v2 = (unsigned __int64)v3;
  while ( 1 )
  {
    v4 = v2 - (_QWORD)v3;
    if ( v2 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error(v3);
    v2 *= 2LL;
  }
  v5 = a1[3] >> 1;
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v8 = 8 * v5;
  v9 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v7[8 * v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = &v7[8 * v5 + v9];
  if ( v5 > v4 )
  {
    memmove_0(v11, v10, 8 * v4);
    memmove_0(v7, (const void *)(8 * v4 + a1[1]), v8 - 8 * v4);
    v13 = &v7[v8 - 8 * v4];
    v12 = 8 * v4;
  }
  else
  {
    memmove_0(v11, v10, 8 * v5);
    memset_0(&v11[v8], 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = v7;
  }
  result = memset_0(v13, 0, v12);
  v15 = a1[1];
  if ( v15 )
    result = (void *)std::_Deallocate<16,0>(v15, 8LL * a1[2]);
  a1[1] = v7;
  a1[2] += v4;
  return result;
}
