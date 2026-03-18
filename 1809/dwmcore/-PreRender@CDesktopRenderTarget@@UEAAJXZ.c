/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180049690
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800F0200 (-PreRender@CDesktopRenderTarget@@WGI@EAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800888A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     HintPpm @ 0x18014A494 (HintPpm.c)
 *     McTemplateU0dtxxxx @ 0x18014A70C (McTemplateU0dtxxxx.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  unsigned __int64 v1; // rbx
  CDesktopRenderTarget *v2; // r14
  int v3; // edi
  int v4; // eax
  int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  HANDLE CurrentThread; // rax
  BOOL v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  HANDLE v13; // rax
  BOOL v14; // eax
  unsigned __int64 v16; // rdi
  int v17; // edx
  int v18; // ecx
  char v19; // al
  int v20; // r9d
  unsigned __int64 v21; // r14
  int v22; // edx
  int v23; // ecx
  char v24; // al
  unsigned __int64 CycleTime; // [rsp+60h] [rbp+20h] BYREF
  int v26; // [rsp+68h] [rbp+28h] BYREF
  __int16 v27; // [rsp+6Ch] [rbp+2Ch]

  v1 = 0LL;
  v2 = this;
  v3 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    this = (CDesktopRenderTarget *)*((_QWORD *)this + 7);
    if ( this )
    {
      v4 = CVisualTree::PreCompute(this, (__int128 *)((char *)v2 + 212));
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, 0x7C9u);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925D8, 2u, v3, 0x63Eu);
  }
  else
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState();
    BYTE4(CycleTime) = 3;
    v5 = 1;
    v27 = WORD2(CycleTime);
    LODWORD(CycleTime) = 0;
    v26 = 0;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
      12805652LL,
      &v26,
      1LL,
      3);
    LOBYTE(v6) = 3;
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v6)
      && !byte_1803082E0 )
    {
      v16 = qword_180308300;
      QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
      v19 = CycleTime;
      if ( v16 < CycleTime )
      {
        HintPpm(2LL);
        v19 = CycleTime;
        v20 = 1;
        byte_1803082E0 = 1;
      }
      else
      {
        v20 = 0;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0dtxxxx(v18, v17, 3, v20, qword_1803082D8, qword_1803082D0, v16, v19);
    }
    v7 = 0LL;
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v9 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v7 = CycleTime;
      if ( v9 )
        qword_180308108 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v7;
    v10 = CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)((char *)v2 + 104), 1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802925D8, 2u, v10, 0x647u);
    }
    else
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState();
      BYTE4(CycleTime) = 3;
      v27 = WORD2(CycleTime);
      LODWORD(CycleTime) = 0;
      v26 = 0;
      wil::details::ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
        12805652LL,
        &v26,
        1LL,
        3);
      LOBYTE(v12) = 3;
      if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v12)
        && !byte_1803082E0 )
      {
        v21 = qword_180308308;
        QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
        v24 = CycleTime;
        if ( v21 < CycleTime )
        {
          HintPpm(2LL);
          v24 = CycleTime;
          byte_1803082E0 = 1;
        }
        else
        {
          v5 = 0;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0dtxxxx(v23, v22, 4, v5, qword_1803082D8, qword_1803082D0, v21, v24);
      }
      CycleTime = 0LL;
      if ( ::CycleTime )
      {
        v13 = GetCurrentThread();
        v14 = QueryThreadCycleTime(v13, &CycleTime);
        v1 = CycleTime;
        if ( v14 )
          qword_180308118 += CycleTime - ::CycleTime;
      }
      ::CycleTime = v1;
    }
  }
  return (unsigned int)v3;
}
