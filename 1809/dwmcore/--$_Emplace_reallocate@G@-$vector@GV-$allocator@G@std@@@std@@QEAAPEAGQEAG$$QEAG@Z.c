/*
 * XREFs of ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x180189E5C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Calculate_growth@?$vector@GV?$allocator@G@std@@@std@@AEBA_K_K@Z @ 0x180189F58 (-_Calculate_growth@-$vector@GV-$allocator@G@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x180189F90 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(
        const void **a1,
        _BYTE *a2,
        _WORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (a2 - (_BYTE *)*a1) >> 1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = std::vector<unsigned short>::_Calculate_growth(a1, v6 + 1);
  v10 = 2 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  *(_WORD *)&v12[2 * v4] = *a3;
  v13 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = (_BYTE *)a1[1] - a2;
    v13 = &v12[2 * v4 + 2];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<unsigned short>::_Change_array(a1, v12, v8, v9);
  return (__int64)*a1 + 2 * v4;
}
