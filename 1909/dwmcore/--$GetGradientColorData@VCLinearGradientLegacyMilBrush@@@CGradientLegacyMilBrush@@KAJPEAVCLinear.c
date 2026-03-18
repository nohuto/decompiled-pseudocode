/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180211A70
 * Callers:
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180211BF8 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAJMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z @ 0x180036320 (-GetOpacity@CLegacyMilBrush@@KAJMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801E9038 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E9388 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 */

__int64 __fastcall CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  signed int Opacity; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v8; // edx
  _OWORD *v9; // rdi
  __int64 v10; // r14
  char *v11; // rdx
  float v12; // xmm6_4
  float *v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rax
  float v17; // [rsp+60h] [rbp+8h] BYREF
  float v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 120);
  a2[1] = *a2;
  a2[4] = a2[3];
  Opacity = CLegacyMilBrush::GetOpacity(*(float *)(a1 + 72), *(_QWORD *)(a1 + 80), &v18);
  v7 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Opacity, 0x56u, 0LL);
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
        v11 = (char *)a2[1];
        v12 = *((double *)v9 - 1);
        v17 = v12;
        if ( (char *)a2[2] == v11 )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            (__int64)a2,
            v11,
            v9);
        }
        else
        {
          *(_OWORD *)v11 = *v9;
          a2[1] += 16LL;
        }
        v13 = (float *)a2[4];
        if ( (float *)a2[5] == v13 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(a2 + 3), v13, &v17);
        }
        else
        {
          a2[4] += 4LL;
          *v13 = v12;
        }
        v9 = (_OWORD *)((char *)v9 + 24);
        --v10;
      }
      while ( v10 );
    }
    v14 = a2[1];
    for ( i = *a2; i != v14; i += 16LL )
      *(float *)(i + 12) = v18 * *(float *)(i + 12);
  }
  return v7;
}
