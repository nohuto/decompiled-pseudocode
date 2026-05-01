/*
 * XREFs of ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x1803AAD64
 * Callers:
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803AB290 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@QEAU12@0PEAU12@AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1803AAF70 (--$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V-$allocator@UHint@ActivationHints@@@std.c)
 *     ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x1803AB944 (-_Change_array@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@A.c)
 */

__int64 __fastcall std::vector<ActivationHints::Hint>::_Emplace_reallocate<ActivationHints::Hint>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 result; // rax
  void *v22; // [rsp+20h] [rbp-48h]
  _QWORD *v23; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) / 80;
  v7 = (a1[1] - *a1) / 80;
  if ( v7 == 0x333333333333333LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 80;
  v10 = v9 >> 1;
  if ( v9 <= 0x333333333333333LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 80 * v11;
  if ( v11 > 0x333333333333333LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 10 * v6;
  v15 = &v13[v14];
  try
  {
    v15[2] = 0LL;
    v15[3] = 0LL;
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v15[6] = 0LL;
    v15[7] = 0LL;
    *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v15 + 3) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a3 + 48) = 0LL;
    *(_QWORD *)(a3 + 56) = 7LL;
    *(_WORD *)(a3 + 32) = 0;
    v15[8] = *(_QWORD *)(a3 + 64);
    v16 = *(_QWORD *)(a3 + 72);
    *(_QWORD *)(a3 + 72) = 0LL;
    v15[9] = v16;
    v23 = &v13[v14];
    v17 = a1[1];
    v18 = (__int64)v13;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
        v19,
        a2,
        v13);
      v23 = v13;
      v18 = (__int64)&v13[v14 + 10];
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
      v19,
      v17,
      v18);
    std::vector<ActivationHints::Hint>::_Change_array(a1, v13, v8, v11, v13, -2LL);
    result = v14 * 8 + *a1;
  }
  catch ( ... )
  {
    std::vector<ActivationHints::Hint>::_Destroy(v20, v23, &v13[v14 + 10]);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(80 * v11));
    throw;
  }
  return result;
}
