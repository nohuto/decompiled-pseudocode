/*
 * XREFs of ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x18032AE3C
 * Callers:
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x18032B560 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x18032BFF8 (-_Change_array@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@A.c)
 */

__int64 __fastcall std::vector<ActivationHints::Hint>::_Emplace_reallocate<ActivationHints::Hint>(
        char **a1,
        char *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r10
  __int64 v15; // r15
  _QWORD *v16; // r8
  __int64 v17; // rax
  char *v18; // r9
  char *v19; // rcx
  _QWORD *v20; // rdx
  signed __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  signed __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  signed __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 result; // rax
  _QWORD *v31; // [rsp+20h] [rbp-48h]
  void *v32; // [rsp+20h] [rbp-48h]
  _QWORD *v33; // [rsp+70h] [rbp+8h]
  __int64 v34; // [rsp+88h] [rbp+20h]

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
  v14 = v13;
  v31 = v13;
  v15 = 10 * v6;
  v16 = &v13[v15];
  v34 = (__int64)&v13[v15 + 10];
  try
  {
    v16[2] = 0LL;
    v16[3] = 0LL;
    *(_OWORD *)v16 = *(_OWORD *)a3;
    *((_OWORD *)v16 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v16[6] = 0LL;
    v16[7] = 0LL;
    *((_OWORD *)v16 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v16 + 3) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a3 + 48) = 0LL;
    *(_QWORD *)(a3 + 56) = 7LL;
    *(_WORD *)(a3 + 32) = 0;
    v16[8] = *(_QWORD *)(a3 + 64);
    v17 = *(_QWORD *)(a3 + 72);
    *(_QWORD *)(a3 + 72) = 0LL;
    v16[9] = v17;
    v33 = v16;
    v18 = a1[1];
    v19 = *a1;
    if ( a2 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v14 + 7;
        v21 = v19 - (char *)v14;
        do
        {
          *(v20 - 5) = 0LL;
          *(v20 - 4) = 0LL;
          *(_OWORD *)(v20 - 7) = *(_OWORD *)((char *)v20 + v21 - 56);
          *(_OWORD *)(v20 - 5) = *(_OWORD *)((char *)v20 + v21 - 40);
          *(_QWORD *)((char *)v20 + v21 - 40) = 0LL;
          *(_QWORD *)((char *)v20 + v21 - 32) = 7LL;
          *(_WORD *)((char *)v20 + v21 - 56) = 0;
          *(v20 - 1) = 0LL;
          *v20 = 0LL;
          *(_OWORD *)(v20 - 3) = *(_OWORD *)((char *)v20 + v21 - 24);
          *(_OWORD *)(v20 - 1) = *(_OWORD *)((char *)v20 + v21 - 8);
          *(_QWORD *)((char *)v20 + v21 - 8) = 0LL;
          *(_QWORD *)((char *)v20 + v21) = 7LL;
          *(_WORD *)((char *)v20 + v21 - 24) = 0;
          v20[1] = *(_QWORD *)((char *)v20 + v21 + 8);
          v22 = *(_QWORD *)((char *)v20 + v21 + 16);
          *(_QWORD *)((char *)v20 + v21 + 16) = 0LL;
          v20[2] = v22;
          v20 += 10;
        }
        while ( (char *)v20 + v21 - 56 != v18 );
      }
    }
    else
    {
      if ( v19 != a2 )
      {
        v23 = v14 + 7;
        v24 = v19 - (char *)v14;
        do
        {
          *(v23 - 5) = 0LL;
          *(v23 - 4) = 0LL;
          *(_OWORD *)(v23 - 7) = *(_OWORD *)((char *)v23 + v24 - 56);
          *(_OWORD *)(v23 - 5) = *(_OWORD *)((char *)v23 + v24 - 40);
          *(_QWORD *)((char *)v23 + v24 - 40) = 0LL;
          *(_QWORD *)((char *)v23 + v24 - 32) = 7LL;
          *(_WORD *)((char *)v23 + v24 - 56) = 0;
          *(v23 - 1) = 0LL;
          *v23 = 0LL;
          *(_OWORD *)(v23 - 3) = *(_OWORD *)((char *)v23 + v24 - 24);
          *(_OWORD *)(v23 - 1) = *(_OWORD *)((char *)v23 + v24 - 8);
          *(_QWORD *)((char *)v23 + v24 - 8) = 0LL;
          *(_QWORD *)((char *)v23 + v24) = 7LL;
          *(_WORD *)((char *)v23 + v24 - 24) = 0;
          v23[1] = *(_QWORD *)((char *)v23 + v24 + 8);
          v25 = *(_QWORD *)((char *)v23 + v24 + 16);
          *(_QWORD *)((char *)v23 + v24 + 16) = 0LL;
          v23[2] = v25;
          v23 += 10;
        }
        while ( (char *)v23 + v24 - 56 != a2 );
        v18 = a1[1];
      }
      v33 = v14;
      if ( a2 != v18 )
      {
        v26 = v16 + 17;
        v27 = &a2[-(v15 * 8)] - (char *)v14;
        do
        {
          *(v26 - 5) = 0LL;
          *(v26 - 4) = 0LL;
          *(_OWORD *)(v26 - 7) = *(_OWORD *)((char *)v26 + v27 - 136);
          *(_OWORD *)(v26 - 5) = *(_OWORD *)((char *)v26 + v27 - 120);
          *(_QWORD *)((char *)v26 + v27 - 120) = 0LL;
          *(_QWORD *)((char *)v26 + v27 - 112) = 7LL;
          *(_WORD *)((char *)v26 + v27 - 136) = 0;
          *(v26 - 1) = 0LL;
          *v26 = 0LL;
          *(_OWORD *)(v26 - 3) = *(_OWORD *)((char *)v26 + v27 - 104);
          *(_OWORD *)(v26 - 1) = *(_OWORD *)((char *)v26 + v27 - 88);
          *(_QWORD *)((char *)v26 + v27 - 88) = 0LL;
          *(_QWORD *)((char *)v26 + v27 - 80) = 7LL;
          *(_WORD *)((char *)v26 + v27 - 104) = 0;
          v26[1] = *(_QWORD *)((char *)v26 + v27 - 72);
          v28 = *(_QWORD *)((char *)v26 + v27 - 64);
          *(_QWORD *)((char *)v26 + v27 - 64) = 0LL;
          v26[2] = v28;
          v26 += 10;
        }
        while ( (char *)v26 + v27 - 136 != v18 );
      }
    }
    std::vector<ActivationHints::Hint>::_Change_array(a1, v14, v8, v11, v31, -2LL);
    result = (__int64)&(*a1)[v15 * 8];
  }
  catch ( ... )
  {
    std::vector<ActivationHints::Hint>::_Destroy(v29, v33, v34);
    std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(80 * v11));
    throw;
  }
  return result;
}
