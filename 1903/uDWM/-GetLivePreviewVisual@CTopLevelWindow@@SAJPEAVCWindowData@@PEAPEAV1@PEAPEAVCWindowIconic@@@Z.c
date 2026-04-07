/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D460
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007CDD0 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025178 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003ED34 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18009109C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3)
{
  unsigned int v3; // edi
  CTopLevelWindow *v7; // rbp
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int WindowRestoreRect; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rbx
  signed int LastError; // eax
  int v22; // r9d
  unsigned int v24; // [rsp+20h] [rbp-68h]
  __int128 v25; // [rsp+30h] [rbp-58h]
  struct tagRECT rc; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 50);
  v8 = *((_BYTE *)a1 + 605);
  wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService((__int64)a1, (__int64)a2, (__int64)a3);
  if ( (v8 & 1) != 0 )
    goto LABEL_17;
  v12 = *((_QWORD *)a1 + 54);
  if ( v12 )
  {
    v19 = (*((_DWORD *)a1 + 25) & 0x20000000) == 0;
    v20 = *(_QWORD *)(v12 + 24);
    v25 = *(_OWORD *)(v20 + 636);
    rc = *(struct tagRECT *)(*(_QWORD *)(v12 + 32) + 48LL);
    if ( !v19 )
    {
      WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
      v3 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v24 = 5329;
        goto LABEL_19;
      }
    }
    SetLastError(0);
    if ( !OffsetRect(&rc, -(int)v25, -DWORD2(v25)) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      v24 = 5332;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      v22 = v3;
      goto LABEL_20;
    }
    CVisual::SetOffset((struct tagPOINT *)v20, (const struct tagPOINT *)&rc);
    *a2 = (struct CTopLevelWindow *)v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
LABEL_23:
    wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(v17, v16, v18);
    return v3;
  }
  if ( !v7 || (*((_DWORD *)a1 + 25) & 0x20000000) != 0 )
  {
LABEL_17:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v24 = 5318;
      goto LABEL_19;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v17 = *((_QWORD *)*a3 + 11);
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    goto LABEL_23;
  }
  wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(v10, v9, v11);
  WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, v13, v14, a2);
  v3 = WindowRestoreRect;
  if ( WindowRestoreRect >= 0 )
    goto LABEL_23;
  v24 = 5377;
LABEL_19:
  v22 = WindowRestoreRect;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v24);
  return v3;
}
