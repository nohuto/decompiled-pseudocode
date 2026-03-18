/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180013E80
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x18000D5C8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180013F48 (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r10
  unsigned int v6; // ebx
  char v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-18h]

  v5 = *a2;
  v6 = 0;
  v8 = 0;
  v9 = (a2[1] - *a2) >> 4;
  v10 = 0LL;
  if ( v9 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = 2 * v11;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 8 * v12) - *(float *)a4)) & _xmm) <= 0.0000011920929 )
        break;
      if ( *(float *)(v5 + 8 * v12) > *(float *)a4 )
        goto LABEL_11;
      v10 = (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_6;
    }
    if ( !*(_DWORD *)(v5 + 8 * v12 + 12) )
    {
      if ( !a5 )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x5Bu);
        return v6;
      }
      v8 = 1;
    }
LABEL_11:
    LODWORD(v9) = v10;
    if ( !v8 )
      goto LABEL_6;
    if ( a5 == 1 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v10 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v10 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    LODWORD(v14) = *(_DWORD *)a4;
    *((_QWORD *)&v14 + 1) = *(unsigned int *)(a4 + 8);
    DWORD1(v14) = *(_DWORD *)(a4 + 4);
    *(_OWORD *)detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
                 a2,
                 (16LL * (unsigned int)v9) >> 4,
                 v10) = v14;
  }
  return v6;
}
