/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800938B4 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800A3808 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800A87A0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800AF5A8 (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800AFDC4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800B0E38 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D60E8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DCE18 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x18017123C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A6DE4 (-GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  unsigned int v1; // r15d
  int v3; // r12d
  int v4; // r13d
  int v5; // esi
  unsigned int v6; // esi
  __int64 v7; // rbx
  struct CDisplay *v8; // r15
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  struct CDisplay *v13; // rbx
  bool v14; // dl
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int *v19; // rsi
  int v20; // eax
  unsigned int v21; // ecx
  int *v22; // rcx
  int v23; // r9d
  int v24; // r10d
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // esi
  void *v28; // rcx
  CDisplaySet *v29; // rsi
  int CurrentDisplaySet; // eax
  unsigned int v32; // ecx
  int RenderTargets; // eax
  unsigned int v34; // ecx
  __int64 v35; // r15
  CHwndRenderTarget *v36; // r14
  __int64 v37; // rcx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  struct CRenderTarget **v40; // rdx
  int inited; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  int v48; // eax
  int v49; // r14d
  int v50; // ebx
  int v51; // r9d
  int v52; // r10d
  int v53; // r8d
  int v54; // ecx
  int v55; // eax
  int v56; // [rsp+28h] [rbp-69h]
  int v57; // [rsp+28h] [rbp-69h]
  char v58; // [rsp+30h] [rbp-61h]
  char v59; // [rsp+30h] [rbp-61h]
  char v60; // [rsp+38h] [rbp-59h]
  char v61; // [rsp+38h] [rbp-59h]
  bool v62; // [rsp+48h] [rbp-49h]
  char v63; // [rsp+49h] [rbp-48h]
  char v64; // [rsp+4Ah] [rbp-47h]
  int v65; // [rsp+58h] [rbp-39h]
  int v66; // [rsp+68h] [rbp-29h]
  struct CDisplay *v67; // [rsp+70h] [rbp-21h] BYREF
  CDisplaySet *v68; // [rsp+78h] [rbp-19h] BYREF
  struct CRenderTarget *v69[2]; // [rsp+88h] [rbp-9h] BYREF
  __int128 v70; // [rsp+98h] [rbp+7h]
  float v71; // [rsp+A8h] [rbp+17h] BYREF
  float v72; // [rsp+ACh] [rbp+1Bh]
  float v73; // [rsp+B0h] [rbp+1Fh]
  float v74; // [rsp+B4h] [rbp+23h]

  v1 = 0;
  v3 = 0;
  v68 = 0LL;
  v4 = 0;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  LODWORD(v67) = 0;
  v66 = 0;
  LODWORD(v69[0]) = 0;
  v65 = 0;
  if ( *((_BYTE *)this + 152) )
  {
    *((_BYTE *)this + 152) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 168));
    v18 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802C0180, 2u, RenderTargets, 0x410u, 0LL);
      return v18;
    }
    v62 = *((_DWORD *)this + 8) != 0;
  }
  v5 = *((_DWORD *)this + 20) - 1;
  if ( v5 >= 0 )
  {
    v35 = 8LL * v5;
    do
    {
      v36 = *(CHwndRenderTarget **)(v35 + *((_QWORD *)this + 7));
      if ( CDesktopRenderTarget::FindDisplayNoRef((CDesktopRenderTarget *)((char *)this - 168), v36) )
      {
        v60 = *((_BYTE *)this + 209);
        v58 = *((_BYTE *)this + 192);
        v56 = *((_DWORD *)this + 43);
        v70 = *((_OWORD *)this + 11);
        inited = CHwndRenderTarget::InitFullScreen(v36, v56, v58, v60);
        v18 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, &dword_1802C0180, 2u, inited, 0x427u, 0LL);
          return v18;
        }
        v43 = CDesktopRenderTarget::AddHwndRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v36);
        v18 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, &dword_1802C0180, 2u, v43, 0x429u, 0LL);
          return v18;
        }
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 56, (unsigned int)v5);
        if ( v36 )
          (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v36 + 16LL))(v36);
        v63 = 1;
      }
      v35 -= 8LL;
      --v5;
    }
    while ( v5 >= 0 );
    v3 = (int)v67;
    v1 = 0;
    v4 = (int)v69[0];
  }
  v6 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v6);
      v69[0] = (struct CRenderTarget *)v7;
      v8 = *(struct CDisplay **)(v7 + 168);
      if ( g_DisplayManager )
      {
        v9 = *((_DWORD *)g_DisplayManager + 18);
        v10 = 0LL;
        if ( v9 )
          break;
      }
LABEL_8:
      if ( *(_BYTE *)(*((_QWORD *)this - 19) + 1274LL)
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 248LL))(v7) )
      {
        goto LABEL_51;
      }
      v11 = *(_DWORD *)(v7 + 516);
      v12 = (unsigned int)(*((_DWORD *)g_DisplayManager + 18) - 1);
      if ( (int)v12 < 0 )
      {
LABEL_53:
        v13 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v13 = *(struct CDisplay **)(*((_QWORD *)g_DisplayManager + 6) + 8 * v12);
          if ( *((_DWORD *)v13 + 62) == v11 )
            break;
          v12 = (unsigned int)(v12 - 1);
          if ( (int)v12 < 0 )
            goto LABEL_53;
        }
      }
LABEL_12:
      if ( v8 != v13 )
      {
        CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v69[0]);
        v64 = 1;
        if ( v13 )
        {
          v61 = *((_BYTE *)this + 209);
          v59 = *((_BYTE *)this + 192);
          v57 = *((_DWORD *)this + 43);
          v70 = *((_OWORD *)this + 11);
          v45 = CHwndRenderTarget::InitFullScreen(v69[0], v57, v59, v61);
          v1 = 0;
          if ( v45 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v46, &dword_1802C0180, 2u, v45, 0x447u, 0LL);
          goto LABEL_14;
        }
        v37 = *((unsigned int *)this + 20);
        v1 = 0;
        v38 = 0;
        if ( !(_DWORD)v37 )
        {
LABEL_56:
          v39 = v37 + 1;
          if ( (int)v37 + 1 < (unsigned int)v37 )
          {
            v18 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB8u, 0LL);
          }
          else
          {
            if ( v39 <= *((_DWORD *)this + 19) )
            {
              *(struct CRenderTarget **)(*((_QWORD *)this + 7) + 8 * v37) = v69[0];
              *((_DWORD *)this + 20) = v39;
LABEL_59:
              CRenderTargetManager::RemoveRenderTarget(
                *(CRenderTargetManager **)(*((_QWORD *)this - 19) + 64LL),
                v69[0]);
              DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 8, v69);
              --v6;
              v63 = 1;
              goto LABEL_14;
            }
            v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v69);
            v18 = v48;
            if ( v48 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v48, 0xC3u, 0LL);
          }
          if ( (v18 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v47, &dword_1802C0180, 2u, v18, 0x451u, 0LL);
            v29 = v68;
            goto LABEL_60;
          }
          goto LABEL_59;
        }
        v40 = (struct CRenderTarget **)*((_QWORD *)this + 7);
        while ( v69[0] != *v40 )
        {
          ++v38;
          ++v40;
          if ( v38 >= (unsigned int)v37 )
            goto LABEL_56;
        }
        goto LABEL_59;
      }
      v1 = 0;
LABEL_14:
      if ( ++v6 >= *((_DWORD *)this + 8) )
        goto LABEL_15;
    }
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)g_DisplayManager + 6) + 8 * v10) + 312LL) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_8;
    }
LABEL_51:
    v67 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(g_DisplayManager, *(HMONITOR *)(v7 + 520), &v67);
    v13 = v67;
    goto LABEL_12;
  }
LABEL_15:
  if ( v62 || (v14 = 0, v63) )
    v14 = 1;
  v15 = CDesktopRenderTarget::ConfigureMitOutputRectangles((CDesktopRenderTarget *)((char *)this - 168), v14);
  LODWORD(v67) = v15;
  v18 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802C0180, 2u, v15, 0x45Du, 0LL);
    goto LABEL_35;
  }
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v19 = *(int **)(*((_QWORD *)this + 1) + 8LL * v1);
      v20 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v19 + 368LL))(v19);
      LODWORD(v67) = v20;
      v18 = v20;
      if ( v20 < 0 )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v19 + 248LL))(v19)
        || *(_BYTE *)(*((_QWORD *)v19 + 2) + 1274LL) )
      {
        v22 = (int *)(*((_QWORD *)v19 + 21) + 120LL);
      }
      else
      {
        v22 = v19 + 117;
      }
      v23 = v66;
      v24 = v65;
      if ( v66 <= v65 || (LODWORD(v16) = 0, v3 <= v4) )
        LODWORD(v16) = 1;
      v25 = v22[2];
      if ( v25 <= *v22 || (v26 = 0, v22[3] <= v22[1]) )
        v26 = 1;
      if ( (_DWORD)v16 )
      {
        if ( v26 )
        {
          v3 = 0;
          v66 = 0;
          v4 = 0;
          v65 = 0;
        }
        else
        {
          *(_OWORD *)v69 = *(_OWORD *)v22;
          v3 = HIDWORD(v69[1]);
          v4 = HIDWORD(v69[0]);
          v66 = (int)v69[1];
          v65 = (int)v69[0];
        }
      }
      else if ( !v26 )
      {
        if ( *v22 < v65 )
          v24 = *v22;
        v65 = v24;
        if ( v22[1] < v4 )
          v4 = v22[1];
        if ( v25 > v66 )
          v23 = v22[2];
        v66 = v23;
        if ( v22[3] > v3 )
          v3 = v22[3];
      }
      if ( ++v1 >= *((_DWORD *)this + 8) )
        goto LABEL_31;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_1802C0180, 2u, v20, 0x463u, 0LL);
    goto LABEL_35;
  }
LABEL_31:
  v27 = 0;
  if ( *((_DWORD *)this + 32) )
  {
    v49 = v66;
    v50 = v65;
    do
    {
      CVirtualMonitorCaptureRenderTarget::GetDesktopBounds(*(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v27), &v71);
      v51 = (int)v71;
      LODWORD(v16) = (int)v72;
      LODWORD(v70) = (int)v71;
      v52 = (int)v73;
      DWORD1(v70) = (int)v72;
      v53 = (int)v74;
      DWORD2(v70) = (int)v73;
      HIDWORD(v70) = (int)v74;
      if ( v49 <= v50 || (v54 = 0, v3 <= v4) )
        v54 = 1;
      if ( v52 <= v51 || (v55 = 0, v53 <= (int)v16) )
        v55 = 1;
      if ( v54 )
      {
        if ( v55 )
        {
          v3 = 0;
          v49 = 0;
          v4 = 0;
          v50 = 0;
        }
        else
        {
          *(_OWORD *)v69 = v70;
          v3 = HIDWORD(v70);
          v49 = DWORD2(v70);
          v4 = DWORD1(v70);
          v50 = v70;
        }
      }
      else if ( !v55 )
      {
        if ( v51 < v50 )
          v50 = (int)v71;
        if ( (int)v16 < v4 )
          v4 = (int)v72;
        if ( v52 > v49 )
          v49 = (int)v73;
        if ( v53 > v3 )
          v3 = (int)v74;
      }
      ++v27;
    }
    while ( v27 < *((_DWORD *)this + 32) );
    v65 = v50;
    v18 = (unsigned int)v67;
    v66 = v49;
  }
  v28 = (void *)*((_QWORD *)this + 27);
  *((float *)this + 39) = (float)v65;
  *((float *)this + 40) = (float)v4;
  *((float *)this + 41) = (float)v66;
  *((float *)this + 42) = (float)v3;
  if ( v28 )
  {
    if ( !v62 )
      goto LABEL_34;
    SetEvent(v28);
  }
  if ( !v62 )
  {
LABEL_34:
    if ( !v63 )
      goto LABEL_35;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)v28, &v68);
  v18 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v29 = v68;
    CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v68 + 2));
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802C0180, 2u, CurrentDisplaySet, 0x488u, 0LL);
LABEL_35:
  v29 = v68;
LABEL_36:
  if ( v64 )
  {
LABEL_60:
    v16 = *(_QWORD *)(*((_QWORD *)this - 19) + 376LL);
    if ( v16 )
      *(_BYTE *)(v16 + 20) = 1;
  }
  if ( v29 )
    CDisplaySet::Release(v29, v16);
  return v18;
}
