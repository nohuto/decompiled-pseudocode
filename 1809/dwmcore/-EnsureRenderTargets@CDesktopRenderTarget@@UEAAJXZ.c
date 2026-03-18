/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x18007E59C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007E678 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18007FC2C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008AD10 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800C8BB8 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800D8364 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800EA7F4 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800EA920 (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EE720 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  char v1; // r13
  int v3; // esi
  __int64 v4; // r15
  unsigned int v5; // r12d
  __int64 v6; // rbx
  struct CDisplay *v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  struct CDisplay *v12; // rbx
  bool v13; // r14
  bool v14; // dl
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // r12d
  __int64 v19; // r15
  int *v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  int *v23; // rcx
  int v24; // r9d
  int v25; // r10d
  BOOL v26; // edx
  int v27; // r8d
  BOOL v28; // eax
  void *v29; // rcx
  CDisplaySet *v30; // rsi
  int CurrentDisplaySet; // eax
  __int64 v33; // rcx
  int RenderTargets; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  CHwndRenderTarget *v37; // r14
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // eax
  struct CRenderTarget *v41; // rdx
  __int64 v42; // rdx
  int inited; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  struct CRenderTarget **v49; // rax
  int v50; // eax
  int v51; // edx
  int v52; // eax
  unsigned int v53; // [rsp+28h] [rbp-39h]
  unsigned int v54; // [rsp+28h] [rbp-39h]
  char v55; // [rsp+30h] [rbp-31h]
  char v56; // [rsp+30h] [rbp-31h]
  char v57; // [rsp+38h] [rbp-29h]
  char v58; // [rsp+38h] [rbp-29h]
  bool v59; // [rsp+48h] [rbp-19h]
  char v60; // [rsp+49h] [rbp-18h]
  char v61; // [rsp+4Ah] [rbp-17h]
  int v62; // [rsp+4Ch] [rbp-15h]
  int v63; // [rsp+50h] [rbp-11h]
  int v64; // [rsp+54h] [rbp-Dh]
  int v65; // [rsp+58h] [rbp-9h]
  struct CRenderTarget *v66; // [rsp+60h] [rbp-1h] BYREF
  CDisplaySet *v67; // [rsp+68h] [rbp+7h] BYREF
  struct CDisplay *v68[2]; // [rsp+78h] [rbp+17h] BYREF

  v67 = 0LL;
  v1 = 0;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  v65 = 0;
  v59 = 0;
  v61 = 0;
  v60 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    *((_BYTE *)this + 104) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 168));
    v17 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1802925D8, 2u, RenderTargets, 0x3E9u);
      return v17;
    }
    v59 = *((_DWORD *)this + 8) != 0;
  }
  v3 = *((_DWORD *)this + 20) - 1;
  if ( v3 >= 0 )
  {
    v36 = 8LL * v3;
    do
    {
      v37 = *(CHwndRenderTarget **)(v36 + *((_QWORD *)this + 7));
      if ( CDesktopRenderTarget::FindDisplayNoRef((CDesktopRenderTarget *)((char *)this - 168), v37) )
      {
        v57 = *((_BYTE *)this + 161);
        v55 = *((_BYTE *)this + 144);
        v53 = *((_DWORD *)this + 31);
        *(_OWORD *)v68 = *((_OWORD *)this + 8);
        inited = CHwndRenderTarget::InitFullScreen(v37, v53, v55, v57);
        v17 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, &dword_1802925D8, 2u, inited, 0x400u);
          return v17;
        }
        v45 = CDesktopRenderTarget::AddHwndRenderTarget((CDesktopRenderTarget *)((char *)this - 168), (CDisplay **)v37);
        v17 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, &dword_1802925D8, 2u, v45, 0x402u);
          return v17;
        }
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 56, (unsigned int)v3);
        if ( v37 )
          (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v37 + 16LL))(v37);
        v60 = 1;
      }
      v36 -= 8LL;
      --v3;
    }
    while ( v3 >= 0 );
    v1 = v60;
  }
  v4 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v4);
      v66 = (struct CRenderTarget *)v6;
      v7 = *(struct CDisplay **)(v6 + 168);
      if ( qword_180308258 )
      {
        v8 = *((_DWORD *)qword_180308258 + 18);
        v9 = 0LL;
        if ( v8 )
          break;
      }
LABEL_9:
      if ( *(_BYTE *)(*((_QWORD *)this - 19) + 1257LL)
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 224LL))(v6) )
      {
        goto LABEL_53;
      }
      v10 = *(_DWORD *)(v6 + 512);
      v11 = (unsigned int)(*((_DWORD *)qword_180308258 + 18) - 1);
      if ( (int)v11 < 0 )
      {
LABEL_55:
        v12 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v12 = *(struct CDisplay **)(*((_QWORD *)qword_180308258 + 6) + 8 * v11);
          if ( *((_DWORD *)v12 + 64) == v10 )
            break;
          v11 = (unsigned int)(v11 - 1);
          if ( (int)v11 < 0 )
            goto LABEL_55;
        }
      }
LABEL_13:
      if ( v7 != v12 )
      {
        CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 168), v66);
        v61 = 1;
        if ( v12 )
        {
          v58 = *((_BYTE *)this + 161);
          v56 = *((_BYTE *)this + 144);
          v54 = *((_DWORD *)this + 31);
          *(_OWORD *)v68 = *((_OWORD *)this + 8);
          v47 = CHwndRenderTarget::InitFullScreen(v66, v54, v56, v58);
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v48, &dword_1802925D8, 2u, v47, 0x420u);
        }
        else
        {
          v38 = *((unsigned int *)this + 20);
          v39 = 0;
          if ( (_DWORD)v38 )
          {
            v41 = v66;
            v49 = (struct CRenderTarget **)*((_QWORD *)this + 7);
            while ( v66 != *v49 )
            {
              ++v39;
              ++v49;
              if ( v39 >= (unsigned int)v38 )
                goto LABEL_58;
            }
          }
          else
          {
LABEL_58:
            v40 = v38 + 1;
            if ( (int)v38 + 1 >= (unsigned int)v38 )
              v5 = v38 + 1;
            v17 = v40 < (unsigned int)v38 ? 0x80070216 : 0;
            if ( v40 < (unsigned int)v38 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v17, 0xB5u);
            }
            else if ( v5 > *((_DWORD *)this + 19) )
            {
              v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, &v66);
              v17 = v50;
              if ( v50 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v50, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v38) = v66;
              *((_DWORD *)this + 20) = v5;
            }
            if ( (v17 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, &dword_1802925D8, 2u, v17, 0x42Au);
              v30 = v67;
              goto LABEL_66;
            }
            v41 = v66;
          }
          CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 19) + 64LL), v41);
          DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 1, &v66);
          LODWORD(v4) = v4 - 1;
          v1 = 1;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 8) )
        goto LABEL_15;
    }
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_180308258 + 6) + 8 * v9) + 320LL) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_9;
    }
LABEL_53:
    v68[0] = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(qword_180308258, *(HMONITOR *)(v6 + 520), v68);
    v12 = v68[0];
    goto LABEL_13;
  }
LABEL_15:
  v13 = v59;
  v14 = v59 || v1;
  v15 = CDesktopRenderTarget::ConfigureMitOutputRectangles((CDesktopRenderTarget *)((char *)this - 168), v14);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802925D8, 2u, v15, 0x436u);
    goto LABEL_37;
  }
  v18 = 0;
  v19 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v20 = *(int **)(*((_QWORD *)this + 1) + 8 * v19);
      v21 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v20 + 240LL))(v20);
      v17 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802925D8, 2u, v21, 0x43Cu);
        goto LABEL_37;
      }
      if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v20 + 224LL))(v20)
        || *(_BYTE *)(*((_QWORD *)v20 + 2) + 1257LL) )
      {
        v23 = (int *)(*((_QWORD *)v20 + 21) + 120LL);
      }
      else
      {
        v23 = v20 + 117;
      }
      v24 = v64;
      v25 = v65;
      v26 = v64 <= v65 || v18 <= v63;
      v27 = v23[2];
      v28 = v27 <= *v23 || v23[3] <= v23[1];
      if ( v26 )
      {
        if ( v28 )
        {
          v62 = 0;
          v64 = 0;
          v63 = 0;
          v65 = 0;
LABEL_101:
          v18 = v62;
          goto LABEL_32;
        }
        *(_OWORD *)v68 = *(_OWORD *)v23;
        v18 = HIDWORD(v68[1]);
        v62 = HIDWORD(v68[1]);
        v64 = (int)v68[1];
        v63 = HIDWORD(v68[0]);
        v65 = (int)v68[0];
      }
      else if ( !v28 )
      {
        v51 = v63;
        if ( *v23 < v65 )
          v25 = *v23;
        v52 = v62;
        if ( v23[1] < v63 )
          v51 = v23[1];
        v65 = v25;
        if ( v27 > v64 )
          v24 = v23[2];
        v63 = v51;
        v64 = v24;
        if ( v23[3] > v62 )
          v52 = v23[3];
        v62 = v52;
        goto LABEL_101;
      }
LABEL_32:
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= *((_DWORD *)this + 8) )
      {
        v13 = v59;
        break;
      }
    }
  }
  v29 = (void *)*((_QWORD *)this + 21);
  *((float *)this + 27) = (float)v65;
  *((float *)this + 28) = (float)v63;
  *((float *)this + 29) = (float)v64;
  *((float *)this + 30) = (float)v18;
  if ( v29 )
  {
    if ( !v13 )
      goto LABEL_36;
    SetEvent(v29);
  }
  if ( !v13 )
  {
LABEL_36:
    if ( !v1 )
      goto LABEL_37;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)v29, &v67);
  v17 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v30 = v67;
    CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v67 + 2));
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802925D8, 2u, CurrentDisplaySet, 0x452u);
LABEL_37:
  v30 = v67;
LABEL_38:
  if ( v61 )
  {
LABEL_66:
    v42 = *(_QWORD *)(*((_QWORD *)this - 19) + 360LL);
    if ( v42 )
      *(_BYTE *)(v42 + 20) = 1;
  }
  if ( v30 )
    CDisplaySet::Release(v30);
  return v17;
}
