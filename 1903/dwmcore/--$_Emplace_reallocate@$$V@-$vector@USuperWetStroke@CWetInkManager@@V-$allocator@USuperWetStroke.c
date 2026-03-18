/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CWetInkManager@@QEAU23@@Z @ 0x1802518CC
 * Callers:
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CWetInkManager@@XZ @ 0x180251B2C (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CWetInkManager@@_K1@Z @ 0x1802521A4 (-_Change_array@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkMana.c)
 */

__int64 __fastcall std::vector<CWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdi
  _QWORD *v14; // r8
  __int64 v15; // rcx
  _OWORD *v16; // rdx
  __int64 v17; // rax
  _OWORD *v18; // rdx
  __int64 v19; // rax
  _OWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax

  v4 = (unsigned __int128)(((__int64)a2 - *a1) * (__int128)0x6666666666666667LL) >> 64;
  v5 = a1[1] - *a1;
  v6 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
  if ( v5 / 80 == 0x333333333333333LL )
    std::_Xlength_error((const char *)v5);
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
  *(_DWORD *)(v12 + v13 + 73) = 0;
  *(_WORD *)(v12 + v13 + 77) = 0;
  *(_BYTE *)(v12 + v13 + 79) = 0;
  *(_QWORD *)(v12 + v13) = 0LL;
  *(_QWORD *)(v12 + v13 + 8) = 0LL;
  memset_0((void *)(v13 + v12 + 16), 0, 0x38uLL);
  *(_BYTE *)(v12 + v13 + 72) = 0;
  v14 = (_QWORD *)a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    if ( (_QWORD *)v15 != v14 )
    {
      v16 = (_OWORD *)(v13 + 16);
      do
      {
        *((_QWORD *)v16 - 2) = *(_QWORD *)v15;
        v17 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)(v15 + 8) = 0LL;
        *((_QWORD *)v16 - 1) = v17;
        *v16 = *(_OWORD *)(v15 + 16);
        v16 += 5;
        *(v16 - 4) = *(_OWORD *)(v15 + 32);
        *(v16 - 3) = *(_OWORD *)(v15 + 48);
        *((_QWORD *)v16 - 4) = *(_QWORD *)(v15 + 64);
        LOBYTE(v17) = *(_BYTE *)(v15 + 72);
        v15 += 80LL;
        *((_BYTE *)v16 - 24) = v17;
      }
      while ( (_QWORD *)v15 != v14 );
    }
  }
  else
  {
    if ( (_QWORD *)v15 != a2 )
    {
      v18 = (_OWORD *)(v13 + 16);
      do
      {
        *((_QWORD *)v18 - 2) = *(_QWORD *)v15;
        v19 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)(v15 + 8) = 0LL;
        *((_QWORD *)v18 - 1) = v19;
        *v18 = *(_OWORD *)(v15 + 16);
        v18 += 5;
        *(v18 - 4) = *(_OWORD *)(v15 + 32);
        *(v18 - 3) = *(_OWORD *)(v15 + 48);
        *((_QWORD *)v18 - 4) = *(_QWORD *)(v15 + 64);
        LOBYTE(v19) = *(_BYTE *)(v15 + 72);
        v15 += 80LL;
        *((_BYTE *)v18 - 24) = v19;
      }
      while ( (_QWORD *)v15 != a2 );
      v14 = (_QWORD *)a1[1];
    }
    if ( a2 != v14 )
    {
      v20 = (_OWORD *)(v13 + v12 + 96);
      v21 = a2 + 1;
      do
      {
        *((_QWORD *)v20 - 2) = *(v21 - 1);
        v22 = *v21;
        *v21 = 0LL;
        v21 += 10;
        *((_QWORD *)v20 - 1) = v22;
        *v20 = *(_OWORD *)(v21 - 9);
        v20 += 5;
        *(v20 - 4) = *(_OWORD *)(v21 - 7);
        *(v20 - 3) = *(_OWORD *)(v21 - 5);
        *((_QWORD *)v20 - 4) = *(v21 - 3);
        *((_BYTE *)v20 - 24) = *((_BYTE *)v21 - 16);
      }
      while ( v21 - 1 != v14 );
    }
  }
  std::vector<CWetInkManager::SuperWetStroke>::_Change_array(a1, v13, v7, v10);
  return v12 + *a1;
}
