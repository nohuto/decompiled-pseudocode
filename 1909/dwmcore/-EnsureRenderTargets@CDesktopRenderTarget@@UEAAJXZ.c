/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800276C0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002819C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180028570 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x18002B368 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B724 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002BCEC (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180099574 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D64A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DDA88 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EC85C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5524 (-GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
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
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int *v18; // rsi
  signed int v19; // eax
  __int64 v20; // rcx
  int *v21; // rcx
  int v22; // r9d
  int v23; // r10d
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // esi
  void *v28; // rcx
  CDisplaySet *v29; // rsi
  signed int CurrentDisplaySet; // eax
  __int64 v32; // rcx
  signed int RenderTargets; // eax
  __int64 v34; // rcx
  __int64 v35; // r15
  HMONITOR *v36; // r14
  struct CDisplay *DisplayNoRef; // rax
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // edx
  __int64 v41; // rdx
  struct CRenderTarget **v42; // rdx
  signed int inited; // eax
  __int64 v44; // rcx
  signed int v45; // eax
  __int64 v46; // rcx
  signed int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  signed int v50; // eax
  int v51; // r14d
  int v52; // ebx
  int v53; // r9d
  int v54; // edx
  int v55; // r10d
  int v56; // r8d
  int v57; // ecx
  int v58; // eax
  int v59; // [rsp+28h] [rbp-69h]
  int v60; // [rsp+28h] [rbp-69h]
  char v61; // [rsp+30h] [rbp-61h]
  char v62; // [rsp+30h] [rbp-61h]
  char v63; // [rsp+38h] [rbp-59h]
  char v64; // [rsp+38h] [rbp-59h]
  bool v65; // [rsp+48h] [rbp-49h]
  char v66; // [rsp+49h] [rbp-48h]
  char v67; // [rsp+4Ah] [rbp-47h]
  int v68; // [rsp+58h] [rbp-39h]
  int v69; // [rsp+68h] [rbp-29h]
  struct CDisplay *v70; // [rsp+70h] [rbp-21h] BYREF
  CDisplaySet *v71; // [rsp+78h] [rbp-19h] BYREF
  struct CRenderTarget *v72[2]; // [rsp+88h] [rbp-9h] BYREF
  __int128 v73; // [rsp+98h] [rbp+7h] BYREF
  float v74; // [rsp+A8h] [rbp+17h] BYREF
  float v75; // [rsp+ACh] [rbp+1Bh]
  float v76; // [rsp+B0h] [rbp+1Fh]
  float v77; // [rsp+B4h] [rbp+23h]

  v1 = 0;
  v3 = 0;
  v71 = 0LL;
  v4 = 0;
  v65 = 0;
  v67 = 0;
  v66 = 0;
  LODWORD(v70) = 0;
  v69 = 0;
  LODWORD(v72[0]) = 0;
  v68 = 0;
  if ( *((_BYTE *)this + 152) )
  {
    *((_BYTE *)this + 152) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 168));
    v17 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802BE2C0, 2u, RenderTargets, 0x410u, 0LL);
      return v17;
    }
    v65 = *((_DWORD *)this + 8) != 0;
  }
  v5 = *((_DWORD *)this + 20) - 1;
  if ( v5 >= 0 )
  {
    v35 = 8LL * v5;
    do
    {
      v36 = *(HMONITOR **)(v35 + *((_QWORD *)this + 7));
      DisplayNoRef = CDesktopRenderTarget::FindDisplayNoRef((CDesktopRenderTarget *)((char *)this - 168), v36);
      if ( DisplayNoRef )
      {
        v63 = *((_BYTE *)this + 209);
        v61 = *((_BYTE *)this + 192);
        v59 = *((_DWORD *)this + 43);
        v73 = *((_OWORD *)this + 11);
        inited = CHwndRenderTarget::InitFullScreen(
                   (CHwndRenderTarget *)v36,
                   (__int64)this - 168,
                   (__int64)DisplayNoRef,
                   &v73,
                   v59,
                   v61,
                   v63);
        v17 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, &dword_1802BE2C0, 2u, inited, 0x427u, 0LL);
          return v17;
        }
        v45 = CDesktopRenderTarget::AddHwndRenderTarget((CDesktopRenderTarget *)((char *)this - 168), (CDisplay **)v36);
        v17 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, &dword_1802BE2C0, 2u, v45, 0x429u, 0LL);
          return v17;
        }
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 56, (unsigned int)v5);
        if ( v36 )
          (*((void (__fastcall **)(HMONITOR *))*v36 + 2))(v36);
        v66 = 1;
      }
      v35 -= 8LL;
      --v5;
    }
    while ( v5 >= 0 );
    v3 = (int)v70;
    v1 = 0;
    v4 = (int)v72[0];
  }
  v6 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v6);
      v72[0] = (struct CRenderTarget *)v7;
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
        CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v72[0]);
        v67 = 1;
        if ( v13 )
        {
          v64 = *((_BYTE *)this + 209);
          v62 = *((_BYTE *)this + 192);
          v60 = *((_DWORD *)this + 43);
          v73 = *((_OWORD *)this + 11);
          v47 = CHwndRenderTarget::InitFullScreen(v72[0], (__int64)this - 168, (__int64)v13, &v73, v60, v62, v64);
          v1 = 0;
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v48, &dword_1802BE2C0, 2u, v47, 0x447u, 0LL);
          goto LABEL_14;
        }
        v38 = *((unsigned int *)this + 20);
        v1 = 0;
        v39 = 0;
        if ( !(_DWORD)v38 )
        {
LABEL_56:
          v40 = v38 + 1;
          if ( (int)v38 + 1 < (unsigned int)v38 )
          {
            v17 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          else
          {
            if ( v40 <= *((_DWORD *)this + 19) )
            {
              *(struct CRenderTarget **)(*((_QWORD *)this + 7) + 8 * v38) = v72[0];
              *((_DWORD *)this + 20) = v40;
LABEL_59:
              CRenderTargetManager::RemoveRenderTarget(
                *(CRenderTargetManager **)(*((_QWORD *)this - 19) + 64LL),
                v72[0]);
              DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 1, v72);
              --v6;
              v66 = 1;
              goto LABEL_14;
            }
            v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v72);
            v17 = v50;
            if ( v50 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v50, 0xC3u, 0LL);
          }
          if ( (v17 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v49, &dword_1802BE2C0, 2u, v17, 0x451u, 0LL);
            v29 = v71;
            goto LABEL_60;
          }
          goto LABEL_59;
        }
        v42 = (struct CRenderTarget **)*((_QWORD *)this + 7);
        while ( v72[0] != *v42 )
        {
          ++v39;
          ++v42;
          if ( v39 >= (unsigned int)v38 )
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
    v70 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(g_DisplayManager, *(HMONITOR *)(v7 + 520), &v70);
    v13 = v70;
    goto LABEL_12;
  }
LABEL_15:
  if ( v65 || (v14 = 0, v66) )
    v14 = 1;
  v15 = CDesktopRenderTarget::ConfigureMitOutputRectangles((CDesktopRenderTarget *)((char *)this - 168), v14);
  LODWORD(v70) = v15;
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802BE2C0, 2u, v15, 0x45Du, 0LL);
    goto LABEL_35;
  }
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v18 = *(int **)(*((_QWORD *)this + 1) + 8LL * v1);
      v19 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v18 + 368LL))(v18);
      LODWORD(v70) = v19;
      v17 = v19;
      if ( v19 < 0 )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v18 + 248LL))(v18)
        || *(_BYTE *)(*((_QWORD *)v18 + 2) + 1274LL) )
      {
        v21 = (int *)(*((_QWORD *)v18 + 21) + 120LL);
      }
      else
      {
        v21 = v18 + 117;
      }
      v22 = v69;
      v23 = v68;
      if ( v69 <= v68 || (v24 = 0, v3 <= v4) )
        v24 = 1;
      v25 = v21[2];
      if ( v25 <= *v21 || (v26 = 0, v21[3] <= v21[1]) )
        v26 = 1;
      if ( v24 )
      {
        if ( v26 )
        {
          v3 = 0;
          v69 = 0;
          v4 = 0;
          v68 = 0;
        }
        else
        {
          *(_OWORD *)v72 = *(_OWORD *)v21;
          v3 = HIDWORD(v72[1]);
          v4 = HIDWORD(v72[0]);
          v69 = (int)v72[1];
          v68 = (int)v72[0];
        }
      }
      else if ( !v26 )
      {
        if ( *v21 < v68 )
          v23 = *v21;
        v68 = v23;
        if ( v21[1] < v4 )
          v4 = v21[1];
        if ( v25 > v69 )
          v22 = v21[2];
        v69 = v22;
        if ( v21[3] > v3 )
          v3 = v21[3];
      }
      if ( ++v1 >= *((_DWORD *)this + 8) )
        goto LABEL_31;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802BE2C0, 2u, v19, 0x463u, 0LL);
    goto LABEL_35;
  }
LABEL_31:
  v27 = 0;
  if ( *((_DWORD *)this + 32) )
  {
    v51 = v69;
    v52 = v68;
    do
    {
      CVirtualMonitorCaptureRenderTarget::GetDesktopBounds(*(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v27), &v74);
      v53 = (int)v74;
      v54 = (int)v75;
      LODWORD(v73) = (int)v74;
      v55 = (int)v76;
      DWORD1(v73) = (int)v75;
      v56 = (int)v77;
      DWORD2(v73) = (int)v76;
      HIDWORD(v73) = (int)v77;
      if ( v51 <= v52 || (v57 = 0, v3 <= v4) )
        v57 = 1;
      if ( v55 <= v53 || (v58 = 0, v56 <= v54) )
        v58 = 1;
      if ( v57 )
      {
        if ( v58 )
        {
          v3 = 0;
          v51 = 0;
          v4 = 0;
          v52 = 0;
        }
        else
        {
          *(_OWORD *)v72 = v73;
          v3 = HIDWORD(v73);
          v51 = DWORD2(v73);
          v4 = DWORD1(v73);
          v52 = v73;
        }
      }
      else if ( !v58 )
      {
        if ( v53 < v52 )
          v52 = (int)v74;
        if ( v54 < v4 )
          v4 = (int)v75;
        if ( v55 > v51 )
          v51 = (int)v76;
        if ( v56 > v3 )
          v3 = (int)v77;
      }
      ++v27;
    }
    while ( v27 < *((_DWORD *)this + 32) );
    v68 = v52;
    v17 = (unsigned int)v70;
    v69 = v51;
  }
  v28 = (void *)*((_QWORD *)this + 27);
  *((float *)this + 39) = (float)v68;
  *((float *)this + 40) = (float)v4;
  *((float *)this + 41) = (float)v69;
  *((float *)this + 42) = (float)v3;
  if ( v28 )
  {
    if ( !v65 )
      goto LABEL_34;
    SetEvent(v28);
  }
  if ( !v65 )
  {
LABEL_34:
    if ( !v66 )
      goto LABEL_35;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)v28, &v71);
  v17 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v29 = v71;
    CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v71 + 2));
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802BE2C0, 2u, CurrentDisplaySet, 0x488u, 0LL);
LABEL_35:
  v29 = v71;
LABEL_36:
  if ( v67 )
  {
LABEL_60:
    v41 = *(_QWORD *)(*((_QWORD *)this - 19) + 376LL);
    if ( v41 )
      *(_BYTE *)(v41 + 20) = 1;
  }
  if ( v29 )
    CDisplaySet::Release(v29);
  return v17;
}
