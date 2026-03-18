/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801C2A50
 * Callers:
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801C2BD0 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x1800BC480 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x18022255C (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 */

__int64 __fastcall CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(
        __int64 a1,
        const void **a2)
{
  __int64 v2; // r14
  int Opacity; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v8; // edx
  _OWORD *v9; // rdi
  __int64 v10; // r14
  _OWORD *v11; // rdx
  float v12; // xmm6_4
  float *v13; // rdx
  float *v14; // rcx
  float *i; // rax
  float v17; // [rsp+60h] [rbp+8h] BYREF
  float v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 120);
  a2[1] = *a2;
  a2[4] = a2[3];
  Opacity = CLegacyMilBrush::GetOpacity(*(double *)(a1 + 72), *(_QWORD *)(a1 + 80), &v18);
  v7 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Opacity, 0x55u);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 116) / 0x18u;
    if ( v8 )
    {
      v9 = (_OWORD *)(v2 + 8);
      v10 = v8;
      do
      {
        v11 = a2[1];
        v12 = *((double *)v9 - 1);
        v17 = v12;
        if ( a2[2] == v11 )
        {
          std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(a2, v11, v9);
        }
        else
        {
          *v11 = *v9;
          a2[1] = (char *)a2[1] + 16;
        }
        v13 = (float *)a2[4];
        if ( a2[5] == v13 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(a2 + 3, v13, &v17);
        }
        else
        {
          a2[4] = (char *)a2[4] + 4;
          *v13 = v12;
        }
        v9 = (_OWORD *)((char *)v9 + 24);
        --v10;
      }
      while ( v10 );
    }
    v14 = (float *)a2[1];
    for ( i = (float *)*a2; i != v14; i += 4 )
      i[3] = v18 * i[3];
  }
  return v7;
}
