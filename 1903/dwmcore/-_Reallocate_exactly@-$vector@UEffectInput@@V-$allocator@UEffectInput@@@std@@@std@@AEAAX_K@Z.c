/*
 * XREFs of ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x180077474
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180077160 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180205F24 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Reallocate_exactly(const struct EffectInput **a1, unsigned __int64 a2)
{
  signed __int64 v3; // r8
  SIZE_T v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  const struct EffectInput *v8; // r12
  __int64 v9; // r15
  const struct EffectInput *v10; // rbx
  EffectInput *v11; // rdi

  v3 = a1[1] - *a1;
  v5 = 104 * a2;
  v6 = v3 / 104;
  if ( a2 > 0x276276276276276LL )
    v5 = -1LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v8 = a1[1];
  v9 = v7;
  v10 = *a1;
  v11 = (EffectInput *)v7;
  while ( v10 != v8 )
  {
    EffectInput::EffectInput(v11, v10);
    v11 = (EffectInput *)((char *)v11 + 104);
    v10 = (const struct EffectInput *)((char *)v10 + 104);
  }
  return std::vector<EffectInput>::_Change_array(a1, v9, v6, a2);
}
