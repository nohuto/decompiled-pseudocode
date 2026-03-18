/*
 * XREFs of std::vector_unsigned_short_std::allocator_unsigned_short___::_Resize__lambda_5d91c21a7dab2480088f44d5291e9dfa___ @ 0x1801C447C
 * Callers:
 *     ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648 (-OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Calculate_growth@?$vector@GV?$allocator@G@std@@@std@@AEBA_K_K@Z @ 0x180189F58 (-_Calculate_growth@-$vector@GV-$allocator@G@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x180189F90 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_short_std::allocator_unsigned_short___::_Resize__lambda_5d91c21a7dab2480088f44d5291e9dfa___(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _BYTE *v2; // rdi
  _BYTE *v4; // rcx
  unsigned __int64 v6; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdi
  SIZE_T v9; // rcx
  unsigned __int64 v10; // r9
  char *v11; // rbx
  size_t v12; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_BYTE *)a1[1];
  v4 = (_BYTE *)*a1;
  v6 = (v2 - v4) >> 1;
  result = (__int64)(a1[2] - (_QWORD)v4) >> 1;
  if ( a2 <= result )
  {
    if ( a2 <= v6 )
    {
      if ( a2 == v6 )
        return result;
      result = (unsigned __int64)&v4[2 * a2];
    }
    else
    {
      v12 = 2 * (a2 - v6);
      memset_0(v2, 0, v12);
      result = (unsigned __int64)&v2[v12];
    }
    a1[1] = result;
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v8 = std::vector<unsigned short>::_Calculate_growth(a1, a2);
    v9 = 2 * v8;
    if ( v8 > v10 )
      v9 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    memset_0(&v11[2 * v6], 0, 2 * (a2 - v6));
    memmove_0(v11, (const void *)*a1, a1[1] - *a1);
    return std::vector<unsigned short>::_Change_array((__int64)a1, (__int64)v11, a2, v8);
  }
  return result;
}
