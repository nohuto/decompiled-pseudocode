/*
 * XREFs of ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1802046A0
 * Callers:
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x18003D034 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x18003E420 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180204834 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
        const struct EffectInput **a1,
        const struct EffectInput *a2)
{
  const struct EffectInput *v2; // rdi
  signed __int64 v3; // rdx
  signed __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  SIZE_T v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  const struct EffectInput *v14; // rsi
  const struct EffectInput *v15; // rbx
  EffectInput *v16; // rdi
  EffectInput *v17; // r12
  __int64 v18; // r14
  __int64 v20; // [rsp+60h] [rbp+8h]
  __int64 v21; // [rsp+70h] [rbp+18h]

  v2 = a2;
  v3 = a2 - *a1;
  v5 = a1[1] - *a1;
  v6 = v3 / 104;
  if ( v5 / 104 == 0x276276276276276LL )
    std::_Xlength_error((const char *)v5);
  v7 = v5 / 104 + 1;
  v8 = (a1[2] - *a1) / 104;
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 104 * v10;
  if ( v10 > 0x276276276276276LL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v21 = v12;
  v20 = 104 * v6;
  v13 = 104 * v6 + v12;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_BYTE *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = 0LL;
  *(_QWORD *)(v13 + 56) = 0LL;
  v14 = a1[1];
  v15 = *a1;
  if ( v2 == v14 )
  {
    v16 = (EffectInput *)v12;
    while ( v15 != v14 )
    {
      EffectInput::EffectInput(v16, v15);
      v16 = (EffectInput *)((char *)v16 + 104);
      v15 = (const struct EffectInput *)((char *)v15 + 104);
    }
  }
  else
  {
    v17 = (EffectInput *)v12;
    if ( v15 != v2 )
    {
      do
      {
        EffectInput::EffectInput(v17, v15);
        v17 = (EffectInput *)((char *)v17 + 104);
        v15 = (const struct EffectInput *)((char *)v15 + 104);
      }
      while ( v15 != v2 );
      v14 = a1[1];
    }
    if ( v2 != v14 )
    {
      v18 = v13 - (_QWORD)v2;
      do
      {
        EffectInput::EffectInput((const struct EffectInput *)((char *)v2 + v18 + 104), v2);
        v2 = (const struct EffectInput *)((char *)v2 + 104);
      }
      while ( v2 != v14 );
    }
  }
  std::vector<EffectInput>::_Change_array((__int64)a1, v21, v7, v10);
  return (__int64)*a1 + v20;
}
