/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00ED0A0
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ECD5C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C00107A4 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00ED8B8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00EDAC4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00EDDB4 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01233FC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0130430 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0130C24 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0131974 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0132070 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C01C34F8 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0221D68 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C02224F0 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  __int64 v9; // rax
  __int64 v12; // rdi
  int v15; // ebx
  __int64 XHot; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  char v19; // r15
  bool v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _FAST_MUTEX *v25; // rcx
  int MonitorInstance; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char v31; // r15
  int v32; // ebx
  __int64 v33; // rcx
  const GUID *v34; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  const struct _DXGKARG_SETPOINTERPOSITION *v36; // rbx
  bool v37; // r15
  __int64 v38; // rdx
  struct DXGMONITOR *v40; // r15
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v42; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v44; // r8d
  UINT v45; // ecx
  UINT v46; // edx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // r15
  void *pPixels; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  const struct tagRECT *v50; // rcx
  void *v51; // rcx
  UINT v52; // eax
  int v53; // r11d
  int v54; // r8d
  __int128 v55; // xmm0
  int v56; // r12d
  int v57; // r9d
  int v58; // r10d
  bool v59; // zf
  signed int v60; // ebx
  signed int v61; // r12d
  INT X; // eax
  int v63; // r9d
  int v64; // eax
  int v65; // r10d
  INT v66; // edx
  INT v67; // r8d
  int v68; // r9d
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  UINT Width; // edx
  UINT Height; // r8d
  UINT YHot; // eax
  int v75; // edx
  signed int v76; // edx
  _QWORD *v77; // rax
  __int64 v78; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v80; // ecx
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v88; // rcx
  void *v89; // rcx
  INT v90; // eax
  __int64 v91; // rax
  UINT v92; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *v93; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v94; // rbx
  struct _DXGKARG_SETPOINTERSHAPE *v95; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v96; // rbx
  void *v97; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v98; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v99; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v100; // [rsp+30h] [rbp-D0h]
  int *v101; // [rsp+38h] [rbp-C8h]
  bool v102; // [rsp+50h] [rbp-B0h]
  int v103; // [rsp+54h] [rbp-ACh] BYREF
  char v104; // [rsp+58h] [rbp-A8h]
  int v105; // [rsp+5Ch] [rbp-A4h]
  int v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch]
  int v108; // [rsp+68h] [rbp-98h]
  INT v109; // [rsp+6Ch] [rbp-94h]
  int v110; // [rsp+70h] [rbp-90h]
  unsigned int v111; // [rsp+74h] [rbp-8Ch]
  __int128 v112; // [rsp+78h] [rbp-88h] BYREF
  struct DXGMONITOR *v113; // [rsp+88h] [rbp-78h] BYREF
  SESSION_VIEW *v114; // [rsp+90h] [rbp-70h]
  const struct _DXGKARG_SETPOINTERPOSITION *v115; // [rsp+98h] [rbp-68h]
  _BYTE v116[16]; // [rsp+A0h] [rbp-60h] BYREF
  void *v117; // [rsp+B0h] [rbp-50h]
  char v118[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v119[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-30h]
  __int64 v121; // [rsp+D8h] [rbp-28h]
  char v122; // [rsp+E0h] [rbp-20h]
  char v123[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h]
  char v126; // [rsp+100h] [rbp+0h]
  _BYTE v127[20]; // [rsp+110h] [rbp+10h] BYREF
  int v128; // [rsp+124h] [rbp+24h]
  struct _DXGKARG_SETPOINTERPOSITION v129; // [rsp+128h] [rbp+28h] BYREF

  v9 = *((_QWORD *)this + 1);
  v129 = *a2;
  v114 = a4;
  v12 = *(_QWORD *)(v9 + 16);
  v115 = a2;
  v117 = a5;
  if ( !v12 )
  {
    v70 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v70 + 24) = 1070LL;
    WdLogEvent5_WdAssertion(v70);
  }
  if ( !*(_QWORD *)(v12 + 2520) )
  {
    v71 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v71 + 24) = 1071LL;
    WdLogEvent5_WdAssertion(v71);
  }
  v121 = v12;
  v122 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
  v125 = v12;
  v120 = -1LL;
  v126 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
  v124 = -1LL;
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v118);
  if ( v15 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v116, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v12 + 2520) + 280LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v116);
    if ( a9 )
    {
      if ( a3->Flags.Value != 2 )
        goto LABEL_95;
      Width = a3->Width;
      XHot = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      if ( Width > *(_DWORD *)(XHot + 1848) )
        goto LABEL_95;
      Height = a3->Height;
      if ( Height > *(_DWORD *)(XHot + 1852) )
        goto LABEL_95;
      if ( a3->Pitch != 4 * Width )
        goto LABEL_95;
      XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2520) + 80LL);
      if ( a3->VidPnSourceId >= (unsigned int)XHot )
        goto LABEL_95;
      if ( !a3->pPixels )
        goto LABEL_95;
      XHot = a3->XHot;
      if ( (unsigned int)XHot >= Width )
        goto LABEL_95;
      YHot = a3->YHot;
      if ( YHot >= Height )
        goto LABEL_95;
      *((_DWORD *)this + 937) = XHot;
      *((_DWORD *)this + 938) = YHot;
      if ( (_DWORD)XHot == -1 && YHot == -1 )
        goto LABEL_95;
      v75 = XHot + a2->X;
      if ( v75 < *((_DWORD *)a4 + 6)
        || v75 >= *((_DWORD *)a4 + 8)
        || (v76 = YHot + a2->Y, v76 < *((_DWORD *)a4 + 7))
        || v76 >= *((_DWORD *)a4 + 9) )
      {
LABEL_95:
        v77 = (_QWORD *)WdLogNewEntry5_WdError(XHot);
        v77[3] = *(int *)(v12 + 280);
        v77[4] = *(unsigned int *)(v12 + 276);
        v77[5] = *((unsigned int *)this + 4);
        WdLogEvent5_WdError(v77);
LABEL_96:
        v15 = -1073741811;
        goto LABEL_39;
      }
    }
    if ( a8 )
    {
      if ( *(_DWORD *)(v12 + 1712) < 0x7000u )
      {
        v78 = WdLogNewEntry5_WdAssertion(XHot);
        *(_QWORD *)(v78 + 24) = 1117LL;
        WdLogEvent5_WdAssertion(v78);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
      a3 = PristineCursor;
      if ( !PristineCursor->pPixels )
        goto LABEL_96;
      v80 = (PristineCursor->Flags.Value & 1) + 1;
      v111 = PristineCursor->Width;
      v110 = PristineCursor->Height * v80;
    }
    else
    {
      v110 = a7;
      v111 = a6;
    }
    if ( (*(_DWORD *)(v12 + 308) & 0x100) == 0 && (**(_DWORD **)(v12 + 4112) & 8) != 0 )
      goto LABEL_102;
    v129.VidPnSourceId = *((_DWORD *)this + 4);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v12 + 2520), v129.VidPnSourceId) )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v15 = -1073741823;
      v69[3] = -1073741823LL;
      v69[4] = *((unsigned int *)this + 4);
      v69[5] = a3->Flags.Value;
      v69[6] = a5;
      WdLogEvent5_WdError(v69);
      goto LABEL_39;
    }
    if ( (*(_DWORD *)(v12 + 308) & 0x20) != 0
      && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v12 + 2520)) )
    {
      goto LABEL_102;
    }
    v18 = *((unsigned int *)this + 267);
    v19 = 1;
    v102 = 1;
    v20 = 1;
    if ( (_DWORD)v18 == -1 )
    {
      v32 = -1073741811;
LABEL_25:
      if ( v32 >= 0 )
      {
LABEL_26:
        if ( v19 && v20 && !*((_BYTE *)this + 668) )
        {
          v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2520), a3);
          if ( v15 < 0 )
            goto LABEL_39;
          goto LABEL_30;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *((_QWORD *)this + 1),
                                             *((_DWORD *)this + 4),
                                             v19 != 0);
        v44 = *(_DWORD *)(v12 + 1848);
        if ( a3->Width > v44
          || (v45 = a3->Height, v46 = *(_DWORD *)(v12 + 1852), v45 > v46)
          || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v45 > 4 * (unsigned __int64)(v44 * v46) )
        {
LABEL_102:
          v15 = -1073741823;
          goto LABEL_39;
        }
        SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 1);
        pPixels = (void *)SavedCursor->pPixels;
        if ( !pPixels
          || (memset(pPixels, 0, 4 * *(unsigned int *)(v12 + 1852) * (unsigned __int64)*(unsigned int *)(v12 + 1848)),
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1),
              !ClippedCursor->pPixels) )
        {
LABEL_132:
          v15 = -1073741801;
          goto LABEL_39;
        }
        v103 = 0;
        if ( *((_BYTE *)this + 668) )
        {
          v112 = 0uLL;
          v50 = (const struct tagRECT *)&v112;
          *((_QWORD *)&v112 + 1) = *((_QWORD *)this + 84);
        }
        else
        {
          v50 = (const struct tagRECT *)((char *)this + 652);
        }
        v15 = ScaleCursorShape(
                v50,
                (const struct tagRECT *)((char *)v114 + 24),
                CurrentOrientation,
                a3,
                ClippedCursor,
                SavedCursor,
                (const struct _DXGK_DRIVERCAPS *)(v12 + 1824),
                &v103);
        if ( v15 < 0 )
          goto LABEL_39;
        if ( v103 )
        {
          if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v102 )
          {
            v88 = ClippedCursor;
LABEL_119:
            RotateCursorShape(v88, SavedCursor, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v12 + 1824));
LABEL_60:
            v53 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
            v54 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
            v55 = *(_OWORD *)((char *)this + 652);
            v56 = *((_DWORD *)this + 168);
            v105 = *((_DWORD *)this + 169);
            LODWORD(v113) = v102;
            v109 = v56;
            v112 = v55;
            v106 = v53;
            v57 = *((_DWORD *)v114 + 8) - *((_DWORD *)v114 + 6);
            v58 = *((_DWORD *)v114 + 9) - *((_DWORD *)v114 + 7);
            v59 = *((_BYTE *)this + 668) == 0;
            v103 = v54;
            if ( v59 )
            {
              v60 = DWORD1(v112);
              v61 = v112;
              v105 = HIDWORD(v112);
              v109 = DWORD2(v112);
            }
            else
            {
              v54 = v105;
              v53 = v56;
              v106 = v56;
              v61 = 0;
              v60 = 0;
              v103 = v105;
            }
            X = v115->X;
            if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
            {
              v63 = v54 * X / v57;
              v64 = v53 * v115->Y;
            }
            else
            {
              v63 = v53 * X / v57;
              v64 = v54 * v115->Y;
            }
            v107 = v63;
            v65 = v64 / v58;
            v108 = v65;
            if ( (_DWORD)v113 )
            {
              v129.X = v63 + v61;
              v90 = v65 + v60;
              goto LABEL_128;
            }
            if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
            {
              v66 = v65 + v61;
              v129.X = v65 + v61;
              v92 = v60 - SavedCursor->Height - v63;
            }
            else
            {
              if ( CurrentOrientation != D3DKMDT_VPPR_ROTATE180 )
              {
                if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE270 )
                {
                  v67 = v63 + v60;
                  v66 = v53 + v61 - SavedCursor->Width - v65;
                }
                else
                {
                  if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
                  {
                    v91 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3));
                    *(_QWORD *)(v91 + 24) = 666LL;
                    WdLogEvent5_WdAssertion(v91);
                    v53 = v106;
                  }
                  v66 = v61 + v107;
                  v67 = v60 + v108;
                }
                v68 = v103;
                v129.X = v66;
                goto LABEL_72;
              }
              v66 = v53 + v61 - SavedCursor->Width - v63;
              v129.X = v66;
              v92 = v60 - SavedCursor->Height - v65;
            }
            v68 = v103;
            v67 = v103 + v92;
LABEL_72:
            v129.Y = v67;
            if ( (signed int)(v66 + SavedCursor->Width) >= v61
              && v66 <= v109
              && (signed int)(v67 + SavedCursor->Height) >= v60
              && v67 <= v105 )
            {
LABEL_76:
              FillClipParams(SavedCursor, this, &v129, (struct CURSOR_CLIP_PARAMS *)v127);
              if ( !v128 )
              {
                SavedCursor->VidPnSourceId = *((_DWORD *)this + 4);
                v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2520), SavedCursor);
                if ( v15 < 0 )
                  goto LABEL_39;
                *((_BYTE *)this + 726) = 0;
                goto LABEL_30;
              }
              v93 = DISPLAY_SOURCE::GetClippedCursor(this, 1);
              v94 = v93;
              if ( v93->pPixels )
              {
                ClipCurrentCursor(SavedCursor, v93, (struct CURSOR_CLIP_PARAMS *)v127);
                v94->VidPnSourceId = *((_DWORD *)this + 4);
                v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2520), v94);
                if ( v15 < 0 )
                  goto LABEL_39;
                *((_BYTE *)this + 726) = 1;
LABEL_30:
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  LODWORD(v101) = v129.Flags.0;
                  LODWORD(v100) = v129.Y;
                  LODWORD(v99) = v129.X;
                  LODWORD(v98) = v129.VidPnSourceId;
                  McTemplateK0pqqqq(v33, &EventSetPointerPosition, v34, v117, v98, v99, v100, v101);
                }
                v15 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v12 + 2520), &v129);
                if ( v15 < 0 )
                  goto LABEL_39;
                PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v114);
                v36 = v115;
                v37 = this == PrimaryDisplaySource;
                ADAPTER_DISPLAY::SavePointerInfo(
                  *(ADAPTER_DISPLAY **)(v12 + 2520),
                  v129.VidPnSourceId,
                  *(_BYTE *)&v129.Flags.0 & 1,
                  v129.X,
                  v129.Y,
                  v115->X,
                  v115->Y);
                if ( a8 || *(_DWORD *)(v12 + 1712) < 0x7000u )
                  goto LABEL_36;
                v95 = DISPLAY_SOURCE::GetPristineCursor(this, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                v96 = v95;
                v97 = (void *)v95->pPixels;
                if ( v97 )
                {
                  v95->Flags.Value = a3->Flags.Value;
                  v95->Width = a3->Width;
                  v95->Height = a3->Height;
                  v95->Pitch = a3->Pitch;
                  memmove(v97, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                  v96->XHot = a3->XHot;
                  v96->YHot = a3->YHot;
                  v36 = v115;
LABEL_36:
                  if ( v37 )
                  {
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
                    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v118);
                    OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
                      v12,
                      v38,
                      v36->VidPnSourceId);
                  }
                  v15 = 0;
                  goto LABEL_39;
                }
                v15 = -1073741801;
LABEL_39:
                if ( v116[8] )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
                goto LABEL_41;
              }
              goto LABEL_132;
            }
            v129.X = v61 + v53 / 2;
            v90 = v60 + v68 / 2;
LABEL_128:
            v129.Y = v90;
            goto LABEL_76;
          }
          v89 = (void *)SavedCursor->pPixels;
          SavedCursor->Flags.Value = ClippedCursor->Flags.Value;
          SavedCursor->Width = ClippedCursor->Width;
          SavedCursor->Height = ClippedCursor->Height;
          SavedCursor->Pitch = ClippedCursor->Pitch;
          memmove(
            v89,
            ClippedCursor->pPixels,
            ClippedCursor->Height * ClippedCursor->Pitch * ((ClippedCursor->Flags.Value & 1) + 1));
          SavedCursor->XHot = ClippedCursor->XHot;
          v52 = ClippedCursor->YHot;
        }
        else
        {
          if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v102 )
          {
            v88 = a3;
            goto LABEL_119;
          }
          v51 = (void *)SavedCursor->pPixels;
          SavedCursor->Flags.Value = a3->Flags.Value;
          SavedCursor->Width = a3->Width;
          SavedCursor->Height = a3->Height;
          SavedCursor->Pitch = a3->Pitch;
          memmove(v51, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
          SavedCursor->XHot = a3->XHot;
          v52 = a3->YHot;
        }
        SavedCursor->YHot = v52;
        goto LABEL_60;
      }
LABEL_104:
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v82[3] = *((unsigned int *)this + 4);
      v82[4] = *(int *)(v12 + 280);
      v82[5] = *(unsigned int *)(v12 + 276);
      v82[6] = v32;
      WdLogEvent5_WdError(v82);
      goto LABEL_26;
    }
    DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v12);
    v22 = *(_QWORD *)(v12 + 2520);
    if ( !v22 )
    {
      v81 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v81 + 24) = 8248LL;
      WdLogEvent5_WdError(v81);
      v32 = -1073741811;
      goto LABEL_104;
    }
    DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v12);
    v24 = *(_QWORD *)(v12 + 2520);
    if ( !v24 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v83);
      v24 = *(_QWORD *)(v12 + 2520);
    }
    v25 = *(struct _FAST_MUTEX **)(v24 + 96);
    if ( !v25 )
    {
      v84 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v84 + 24) = v12;
      WdLogEvent5_WdError(v84);
      v32 = -1073741811;
      goto LABEL_106;
    }
    v113 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v25, v18, 1, &v113);
    if ( MonitorInstance == -1073741275 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v17, v27, v28, v29);
      *(_QWORD *)(v30 + 24) = v18;
      *(_QWORD *)(v30 + 32) = v12;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v40 = v113;
        if ( !v113 || *((_DWORD *)v113 + 108) != 1 )
        {
          v86 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v86);
        }
        if ( !v40 )
        {
          v87 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v87);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v40 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v40);
        v42 = (struct _ERESOURCE *)((char *)v40 + 296);
        v31 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v42);
        KeLeaveCriticalRegion();
        v32 = 0;
        goto LABEL_22;
      }
      v32 = MonitorInstance;
      if ( MonitorInstance != -1073741632 )
      {
        v31 = v104;
LABEL_21:
        if ( v32 >= 0 )
        {
LABEL_22:
          if ( v31 )
          {
            v20 = 1;
            v102 = 1;
          }
          else
          {
            v20 = *(_BYTE *)(v22 + 133) == 0;
            v102 = *(_BYTE *)(v22 + 132) == 0;
          }
          goto LABEL_24;
        }
LABEL_106:
        v85 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v85 + 24) = v32;
        WdLogEvent5_WdAssertion(v85);
LABEL_24:
        v19 = v102;
        goto LABEL_25;
      }
    }
    v31 = 0;
    v32 = 0;
    goto LABEL_21;
  }
LABEL_41:
  COREACCESS::~COREACCESS((COREACCESS *)v123);
  COREACCESS::~COREACCESS((COREACCESS *)v119);
  return (unsigned int)v15;
}
