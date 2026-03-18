/*
 * XREFs of ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x180199DFC
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800061EC (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1800063B8 (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
        __int64 *a1,
        char *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbp
  void *v17; // rcx
  __int64 v18; // r8
  const void *v19; // rdx
  size_t v20; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (__int64)&a2[-*a1];
  v7 = a1[1] - *a1;
  v8 = v4 / 20;
  if ( v7 / 20 == 0xCCCCCCCCCCCCCCCLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = v7 / 20 + 1;
  v10 = (a1[2] - *a1) / 20;
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 20 * v12;
  if ( v12 > 0xCCCCCCCCCCCCCCCLL )
    v13 = -1LL;
  v14 = (_DWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = 5 * v8;
  v16 = (__int64)v14;
  *(_OWORD *)&v14[v15] = *(_OWORD *)a3;
  v14[v15 + 4] = *(_DWORD *)(a3 + 16);
  v17 = v14;
  v18 = a1[1];
  v19 = (const void *)*a1;
  if ( a2 == (char *)v18 )
  {
    v20 = v18 - (_QWORD)v19;
  }
  else
  {
    memmove_0(v14, v19, (size_t)&a2[-*a1]);
    v20 = a1[1] - (_QWORD)a2;
    v19 = a2;
    v17 = (void *)(v16 + 4 * v15 + 20);
  }
  memmove_0(v17, v19, v20);
  std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, v16, v9, v12);
  return *a1 + 4 * v15;
}
