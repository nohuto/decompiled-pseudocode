/*
 * XREFs of ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180014EF4
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180014AA8 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 * Callees:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x180014FA0 (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::GetDisplaySize(CDisplayManager *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  int CurrentDisplaySet; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  int PrimaryDisplay; // eax
  unsigned int v15; // ecx
  CDisplaySet *v16; // [rsp+30h] [rbp-38h] BYREF
  struct CDisplay *v17[6]; // [rsp+38h] [rbp-30h] BYREF

  v16 = 0LL;
  v17[0] = 0LL;
  v7 = (unsigned int)a1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(a1, &v16);
  v10 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, CurrentDisplaySet, 0xB9u, 0LL);
  }
  else if ( (int)CDisplaySet::GetDisplay(v16, a2, v7, v17) >= 0
         || (PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v16, v17), v10 = PrimaryDisplay, PrimaryDisplay >= 0) )
  {
    v11 = *((_QWORD *)v17[0] + 15);
    v12 = _mm_srli_si128(*(__m128i *)((char *)v17[0] + 120), 8).m128i_u64[0];
    *a3 = v12 - v11;
    *a4 = HIDWORD(v12) - HIDWORD(v11);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, PrimaryDisplay, 0xBCu, 0LL);
  }
  ReleaseInterface<CDisplaySet const>(&v16);
  ReleaseInterface<CD3DSurface>(v17);
  return v10;
}
