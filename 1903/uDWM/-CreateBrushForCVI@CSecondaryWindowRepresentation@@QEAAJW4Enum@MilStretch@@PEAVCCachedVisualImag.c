/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCResource@@2PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180030A78
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800240EC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003DA8C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  void *v13; // [rsp+28h] [rbp-51h]
  __int128 v14; // [rsp+78h] [rbp-1h] BYREF
  __int128 v15; // [rsp+88h] [rbp+Fh] BYREF

  v14 = 0uLL;
  v7 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x44Bu, v13);
  }
  else
  {
    if ( a4 )
    {
      v9 = 0;
      v14 = 0uLL;
    }
    else
    {
      v9 = 1;
      v14 = _xmm;
    }
    v15 = _xmm;
    if ( a5 )
      v10 = *(_DWORD *)(a5 + 24);
    else
      v10 = 0;
    LODWORD(v13) = v9;
    v11 = CImageLegacyMilBrushProxy::Update(0LL, 1LL, &v14, &v15, v10);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x479u, v13);
    }
    else
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      *a6 = 0LL;
    }
  }
  return v8;
}
