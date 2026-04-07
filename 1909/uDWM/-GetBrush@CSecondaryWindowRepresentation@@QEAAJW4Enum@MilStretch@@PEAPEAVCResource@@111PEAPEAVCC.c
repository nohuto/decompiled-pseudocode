/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180023AAC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180010610 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B1A80 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180004180 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180018054 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800259F4 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800266B0 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCResource@@2PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180031B28 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v11; // rdi
  CBaseObject *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  CBaseObject *v20; // rax
  int v21; // eax
  unsigned int v22; // eax
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  void *v31; // rdx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int BrushForCVI; // eax
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  CBaseObject *v41; // rcx
  int Brush; // eax
  void *v44; // [rsp+28h] [rbp-71h]
  void *v45; // [rsp+28h] [rbp-71h]
  CBaseObject *v46; // [rsp+40h] [rbp-59h] BYREF
  int v47; // [rsp+48h] [rbp-51h]
  unsigned int v48; // [rsp+4Ch] [rbp-4Dh]
  CBaseObject *v49; // [rsp+50h] [rbp-49h] BYREF
  CBaseObject *v50; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v51; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject *v52; // [rsp+68h] [rbp-31h] BYREF
  CBaseObject **v53; // [rsp+70h] [rbp-29h]
  __int128 v54; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v55[2]; // [rsp+88h] [rbp-11h] BYREF

  v52 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v11 = a8;
  v53 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v49 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    }
    else
    {
      v13 = CResource::Create(
              0x1Cu,
              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
              (__int64 *)&v49);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x394u, v44);
        goto LABEL_63;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v50 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CResource::Create(
              0x1Cu,
              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
              (__int64 *)&v50);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x39Eu, v44);
        goto LABEL_63;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v51 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CResource::Create(
              0x22u,
              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
              (__int64 *)&v51);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3B2u, v44);
        goto LABEL_63;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v52, &v46, (float *)(a1 + 504));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_36;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3B9u, v44);
    goto LABEL_61;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v46 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CCompositor::CreateProxy<CCachedVisualImageProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x3C3u, v44);
      goto LABEL_63;
    }
  }
  v48 = 0;
  v54 = 0uLL;
  if ( v49 )
  {
    v47 = 0;
    v22 = *((_DWORD *)v49 + 6);
    v54 = 0uLL;
    v48 = v22;
  }
  else
  {
    v54 = _xmm;
    v47 = 1;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    goto LABEL_72;
  if ( *(_DWORD *)(a1 + 72) != 2 )
  {
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_20;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v23 = *(CWindowData **)(*((_QWORD *)v25 + 55) + 80LL);
      goto LABEL_20;
    }
    goto LABEL_72;
  }
  v26 = *((_QWORD *)v25 + 54);
  if ( !v26 )
  {
LABEL_72:
    v23 = v25;
    goto LABEL_20;
  }
  v23 = *(CWindowData **)(v26 + 32);
LABEL_20:
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 512) )
      v24 = *(_QWORD *)(a1 + 512);
    goto LABEL_29;
  }
  if ( !v24 )
  {
    v27 = 0LL;
    v28 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      if ( *(_DWORD *)(a1 + 72) == 2 )
      {
        v29 = *(_QWORD *)(v28 + 432);
        if ( v29 )
        {
          v27 = *(_QWORD *)(v29 + 32);
LABEL_26:
          v30 = *(_QWORD *)(v27 + 400);
          if ( !v30 )
            goto LABEL_98;
          if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
            v24 = *(_QWORD *)(v30 + 528);
          else
            v24 = *(_QWORD *)(v30 + 256);
LABEL_29:
          if ( v24 )
            goto LABEL_30;
LABEL_98:
          v31 = 0LL;
          goto LABEL_31;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 72) != 3 )
          goto LABEL_26;
        if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v28 + 440) + 80LL);
          goto LABEL_26;
        }
      }
    }
    v27 = v28;
    goto LABEL_26;
  }
LABEL_30:
  v31 = *(void **)(v24 + 16);
LABEL_31:
  if ( v51 )
    v32 = *((_DWORD *)v51 + 6);
  else
    v32 = 0;
  v55[0] = 0LL;
  v55[1] = 0LL;
  v45 = v31;
  v33 = CCachedVisualImageProxy::Update(v46, &v54, v55, v48, v32);
  v14 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x3F8u, v45);
    goto LABEL_63;
  }
  BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v35, v34, v46, v50, 0LL);
  v14 = BrushForCVI;
  if ( BrushForCVI >= 0 )
  {
    v11 = v53;
LABEL_36:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v37 = v52;
      *v11 = v52;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v38 = v49;
      *a3 = v49;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v39 = v50;
      *a4 = v50;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v40 = v51;
      *a6 = v51;
      if ( v40 )
        _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v41 = v46;
      *a7 = v46;
      if ( v41 )
        _InterlockedIncrement((volatile signed __int32 *)v41 + 2);
    }
    goto LABEL_61;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushForCVI, 0x3FAu, &v52);
LABEL_61:
  if ( v52 )
    CBaseObject::Release(v52);
LABEL_63:
  if ( v49 )
    CBaseObject::Release(v49);
  if ( v50 )
    CBaseObject::Release(v50);
  if ( v51 )
    CBaseObject::Release(v51);
  if ( v46 )
    CBaseObject::Release(v46);
  return v14;
}
