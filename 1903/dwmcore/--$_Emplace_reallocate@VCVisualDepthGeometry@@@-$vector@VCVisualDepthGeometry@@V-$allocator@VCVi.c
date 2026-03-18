/*
 * XREFs of ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x18025BC80
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18025C000 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXQEAVCVisualDepthGeometry@@_K1@Z @ 0x18025C48C (-_Change_array@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@A.c)
 */

__int64 __fastcall std::vector<CVisualDepthGeometry>::_Emplace_reallocate<CVisualDepthGeometry>(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  _OWORD *v3; // rbx
  __int64 v5; // rdx
  const char *v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // r11
  __int64 v16; // r14
  _OWORD *v17; // rcx
  _OWORD *v18; // rcx
  _OWORD *v19; // r9
  _OWORD *v20; // rdx
  _OWORD *v21; // rcx
  __int128 v22; // xmm0
  _OWORD *v23; // rcx
  __int128 v24; // xmm0
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _OWORD *v27; // rcx
  __int128 v28; // xmm0

  v3 = a2;
  v5 = (__int64)a2 - *a1;
  v7 = (const char *)(a1[1] - *a1);
  v8 = v5 / 176;
  if ( (__int64)v7 / 176 == 0x1745D1745D1745DLL )
    std::_Xlength_error(v7);
  v9 = (__int64)v7 / 176 + 1;
  v10 = (a1[2] - *a1) / 176LL;
  v11 = v10 >> 1;
  if ( v10 <= 0x1745D1745D1745DLL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 176 * v12;
  if ( v12 > 0x1745D1745D1745DLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = (_OWORD *)v14;
  v16 = 176 * v8;
  v17 = (_OWORD *)(v16 + v14);
  *v17 = *a3;
  v17[1] = a3[1];
  v17[2] = a3[2];
  v17[3] = a3[3];
  v17[4] = a3[4];
  v17[5] = a3[5];
  v17[6] = a3[6];
  v18 = (_OWORD *)(v16 + v14 + 128);
  *(v18 - 1) = a3[7];
  *v18 = a3[8];
  v18[1] = a3[9];
  v18[2] = a3[10];
  v19 = (_OWORD *)a1[1];
  v20 = (_OWORD *)*a1;
  if ( v3 == v19 )
  {
    for ( ; v20 != v19; v21[2] = v22 )
    {
      v21 = v15 + 8;
      *v15 = *v20;
      v15[1] = v20[1];
      v15[2] = v20[2];
      v15[3] = v20[3];
      v15[4] = v20[4];
      v15[5] = v20[5];
      v15[6] = v20[6];
      v15 += 11;
      *(v21 - 1) = v20[7];
      *v21 = v20[8];
      v21[1] = v20[9];
      v22 = v20[10];
      v20 += 11;
    }
  }
  else
  {
    if ( v20 != v3 )
    {
      do
      {
        v23 = v15 + 8;
        *v15 = *v20;
        v15[1] = v20[1];
        v15[2] = v20[2];
        v15[3] = v20[3];
        v15[4] = v20[4];
        v15[5] = v20[5];
        v15[6] = v20[6];
        v15 += 11;
        *(v23 - 1) = v20[7];
        *v23 = v20[8];
        v23[1] = v20[9];
        v24 = v20[10];
        v20 += 11;
        v23[2] = v24;
      }
      while ( v20 != v3 );
      v19 = (_OWORD *)a1[1];
    }
    if ( v3 != v19 )
    {
      v25 = v14 + v16 - (_QWORD)v3 + 176;
      do
      {
        v26 = (_OWORD *)((char *)v3 + v25);
        *v26 = *v3;
        v26[1] = v3[1];
        v26[2] = v3[2];
        v26[3] = v3[3];
        v26[4] = v3[4];
        v26[5] = v3[5];
        v26[6] = v3[6];
        v27 = (_OWORD *)((char *)v3 + v25 + 128);
        *(v27 - 1) = v3[7];
        *v27 = v3[8];
        v27[1] = v3[9];
        v28 = v3[10];
        v3 += 11;
        v27[2] = v28;
      }
      while ( v3 != v19 );
    }
  }
  std::vector<CVisualDepthGeometry>::_Change_array(a1, v14, v9, v12);
  return v16 + *a1;
}
