/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18007D9E0
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18007D914 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18007E1C0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000CF44 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18000FA08 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001EEF4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001FFD0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180037F18 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18003B0A8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003DA8C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18007DE7C (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  char v9; // al
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int RectangleGeometry; // eax
  __int64 *v14; // rsi
  int v15; // eax
  __int64 i; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // r9d
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  __int64 *v27; // rsi
  int v28; // eax
  __int64 j; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  int GeometryFromHRGN; // eax
  __int64 v38; // [rsp+50h] [rbp-39h]
  __int128 v39; // [rsp+70h] [rbp-19h] BYREF
  __int64 v40; // [rsp+80h] [rbp-9h] BYREF
  __int64 v41; // [rsp+88h] [rbp-1h]
  __int128 v42; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v5 = 0;
  if ( !*((_DWORD *)this + 82) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    v9 = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    *((_BYTE *)a2 + 129) = v9;
    if ( *((_BYTE *)a2 + 128) )
    {
      v10 = 0;
      v11 = *((_DWORD *)a2 + 1);
      if ( *((_DWORD *)a2 + 3) - v11 >= 0 )
        v10 = *((_DWORD *)a2 + 3) - v11;
      v12 = 0;
      if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 >= 0 )
        v12 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(_DWORD *)a2,
                            v11,
                            v12,
                            v10,
                            (struct CRectangleGeometryProxy **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x506u);
        return v3;
      }
      v14 = (__int64 *)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3) )
      {
        v15 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 3);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x50Au);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v39 + i) = (float)*((int *)a2 + i);
      v40 = 0LL;
      v41 = 0LL;
      v17 = CCachedVisualImageProxy::Update(
              *v14,
              (__int64)&v39,
              (__int64)&v40,
              0,
              0,
              *(_QWORD *)(*((_QWORD *)this + 64) + 16LL),
              0);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x519u);
        return v3;
      }
      v18 = CCachedVisualImageProxy::Freeze((CCachedVisualImageProxy *)*v14);
      v3 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x51Bu);
        return v3;
      }
      v19 = *((_QWORD *)a2 + 4);
      if ( !v19 )
      {
        v20 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 4);
        v3 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x51Fu);
          return v3;
        }
        v19 = *((_QWORD *)a2 + 4);
      }
      v21 = *((_QWORD *)this + 59);
      v42 = _xmm;
      v39 = _xmm;
      v22 = CImageLegacyMilBrushProxy::Update(
              v19,
              *(unsigned int *)(v21 + 24),
              (__int64)&v42,
              (__int64)&v39,
              *(_DWORD *)(v21 + 24),
              1,
              1,
              0,
              0,
              0,
              v38,
              0,
              0,
              *v14);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x53Au);
        return v3;
      }
      v9 = *((_BYTE *)a2 + 129);
    }
    if ( v9 )
    {
      v23 = 0;
      v24 = *((_DWORD *)a2 + 11);
      if ( *((_DWORD *)a2 + 13) - v24 >= 0 )
        v23 = *((_DWORD *)a2 + 13) - v24;
      v25 = 0;
      if ( *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10) >= 0 )
        v25 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      v26 = ResourceHelper::CreateRectangleGeometry(
              *((_DWORD *)a2 + 10),
              v24,
              v25,
              v23,
              (struct CRectangleGeometryProxy **)a2 + 7);
      v3 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x544u);
        return v3;
      }
      v27 = (__int64 *)((char *)a2 + 64);
      if ( !*((_QWORD *)a2 + 8) )
      {
        v28 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 8);
        v3 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x548u);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v39 + j) = (float)*((int *)a2 + j + 10);
      v40 = 0LL;
      v41 = 0LL;
      v30 = CCachedVisualImageProxy::Update(
              *v27,
              (__int64)&v39,
              (__int64)&v40,
              0,
              0,
              *(_QWORD *)(*((_QWORD *)this + 66) + 16LL),
              0);
      v3 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x557u);
        return v3;
      }
      v31 = CCachedVisualImageProxy::Freeze((CCachedVisualImageProxy *)*v27);
      v3 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x559u);
        return v3;
      }
      v32 = *((_QWORD *)a2 + 9);
      if ( !v32 )
      {
        v33 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 9);
        v3 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x55Du);
          return v3;
        }
        v32 = *((_QWORD *)a2 + 9);
      }
      v34 = *((_QWORD *)this + 60);
      v42 = _xmm;
      v39 = _xmm;
      v35 = CImageLegacyMilBrushProxy::Update(
              v32,
              *(unsigned int *)(v34 + 24),
              (__int64)&v42,
              (__int64)&v39,
              *(_DWORD *)(v34 + 24),
              1,
              1,
              0,
              0,
              0,
              v38,
              0,
              0,
              *v27);
      v3 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x578u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(
                           *((HRGN *)a2 + 12),
                           (struct CRgnGeometryProxy **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x57Au);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 38) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 50);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v5 >= *((_DWORD *)this + 82) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4F7u);
  return v3;
}
