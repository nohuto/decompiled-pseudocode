/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CWetInkManager@@QEAU23@@Z @ 0x180177934
 * Callers:
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180177B98 (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CWetInkManager@@_K1@Z @ 0x1801784C0 (-_Change_array@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkMana.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // r8
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  __int64 v18; // rax
  _OWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _OWORD *v22; // rdx
  __int64 v23; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int128)(((__int64)a2 - *a1) * (__int128)0x6666666666666667LL) >> 64;
  v5 = a1[1] - *a1;
  v6 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
  if ( v5 / 80 == 0x333333333333333LL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v7 = v5 / 80 + 1;
  v8 = (a1[2] - *a1) / 80;
  v9 = v8 >> 1;
  if ( v8 <= 0x333333333333333LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 80 * v10;
  if ( v10 > 0x333333333333333LL )
    v11 = -1LL;
  v12 = 80 * v6;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v14 = (_QWORD *)(80 * v6 + v13);
  memset_0(v14, 0, 0x50uLL);
  *v14 = 0LL;
  v14[1] = 0LL;
  memset_0(v14 + 2, 0, 0x38uLL);
  *((_BYTE *)v14 + 72) = 0;
  v15 = (_QWORD *)a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    if ( (_QWORD *)v16 != v15 )
    {
      v17 = (_OWORD *)(v13 + 16);
      do
      {
        *((_QWORD *)v17 - 2) = *(_QWORD *)v16;
        v18 = *(_QWORD *)(v16 + 8);
        *(_QWORD *)(v16 + 8) = 0LL;
        *((_QWORD *)v17 - 1) = v18;
        *v17 = *(_OWORD *)(v16 + 16);
        v17 += 5;
        *(v17 - 4) = *(_OWORD *)(v16 + 32);
        *(v17 - 3) = *(_OWORD *)(v16 + 48);
        *((_QWORD *)v17 - 4) = *(_QWORD *)(v16 + 64);
        LOBYTE(v18) = *(_BYTE *)(v16 + 72);
        v16 += 80LL;
        *((_BYTE *)v17 - 24) = v18;
      }
      while ( (_QWORD *)v16 != v15 );
    }
  }
  else
  {
    if ( (_QWORD *)v16 != a2 )
    {
      v19 = (_OWORD *)(v13 + 16);
      do
      {
        *((_QWORD *)v19 - 2) = *(_QWORD *)v16;
        v20 = *(_QWORD *)(v16 + 8);
        *(_QWORD *)(v16 + 8) = 0LL;
        *((_QWORD *)v19 - 1) = v20;
        *v19 = *(_OWORD *)(v16 + 16);
        v19 += 5;
        *(v19 - 4) = *(_OWORD *)(v16 + 32);
        *(v19 - 3) = *(_OWORD *)(v16 + 48);
        *((_QWORD *)v19 - 4) = *(_QWORD *)(v16 + 64);
        LOBYTE(v20) = *(_BYTE *)(v16 + 72);
        v16 += 80LL;
        *((_BYTE *)v19 - 24) = v20;
      }
      while ( (_QWORD *)v16 != a2 );
      v15 = (_QWORD *)a1[1];
    }
    if ( a2 != v15 )
    {
      v21 = a2 + 1;
      v22 = v14 + 12;
      do
      {
        *((_QWORD *)v22 - 2) = *(v21 - 1);
        v23 = *v21;
        *v21 = 0LL;
        v21 += 10;
        *((_QWORD *)v22 - 1) = v23;
        *v22 = *(_OWORD *)(v21 - 9);
        v22 += 5;
        *(v22 - 4) = *(_OWORD *)(v21 - 7);
        *(v22 - 3) = *(_OWORD *)(v21 - 5);
        *((_QWORD *)v22 - 4) = *(v21 - 3);
        *((_BYTE *)v22 - 24) = *((_BYTE *)v21 - 16);
      }
      while ( v21 - 1 != v15 );
    }
  }
  std::vector<CWetInkManager::SuperWetStroke>::_Change_array(a1, v13, v7, v10);
  return v12 + *a1;
}
