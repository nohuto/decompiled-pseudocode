/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022D250
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022D0A8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C022DFBC (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0232280 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C01426EC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C014327C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C01F0874 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01F2F88 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01F45A0 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C01F46A8 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C022BD90 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022CAA8 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C022F9D0 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0230E80 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v9; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v10; // r12
  __int64 v11; // r13
  __int64 v12; // r15
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int8 v33; // r14
  __int64 v34; // rax
  unsigned int v35; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rsi
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // al
  unsigned int v46; // r12d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v47; // rbx
  unsigned int Rotation; // eax
  __int64 v49; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v54; // r13
  __int64 v55; // rsi
  unsigned int hResource; // ebx
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rsi
  struct _EX_RUNDOWN_REF *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  const struct DXGALLOCATION *Count; // rbx
  __int64 v69; // r12
  void **v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  ADAPTER_RENDER *v73; // rbx
  __int64 v74; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  const GUID *v76; // r8
  int v77; // eax
  __int64 v78; // rdx
  __int64 right; // rcx
  __int64 v80; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v81; // rdx
  __int64 v82; // rcx
  unsigned int v83; // r12d
  __int64 v84; // rbx
  _QWORD *v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rax
  int StretchQuality; // eax
  __int64 v89; // rax
  __int64 v90; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // eax
  _QWORD *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // r12d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v98; // r15
  __int64 v99; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  DISPLAY_SOURCE *v103; // rsi
  __int64 v104; // r13
  const struct DXGALLOCATION **v105; // r14
  char *v106; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rdx
  DISPLAY_SOURCE *v110; // rbx
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rax
  void **v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  _QWORD *v118; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v119; // r9
  int *v120; // rbx
  unsigned int v121; // r9d
  __int128 *v122; // r10
  char v123; // [rsp+60h] [rbp-A0h]
  unsigned int v124; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v125; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v126; // [rsp+70h] [rbp-90h]
  unsigned int v127; // [rsp+78h] [rbp-88h]
  unsigned int v128; // [rsp+7Ch] [rbp-84h]
  int v129; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v130; // [rsp+88h] [rbp-78h]
  void **v131; // [rsp+90h] [rbp-70h]
  int *v132; // [rsp+98h] [rbp-68h]
  const struct DXGALLOCATION **v133; // [rsp+A0h] [rbp-60h]
  _BYTE v134[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v135; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  char v137; // [rsp+C8h] [rbp-38h] BYREF
  int v138; // [rsp+E0h] [rbp-20h]
  PVOID v139; // [rsp+E8h] [rbp-18h] BYREF
  char v140; // [rsp+F0h] [rbp-10h] BYREF
  int v141; // [rsp+108h] [rbp+8h]
  struct _DXGKARG_DESCRIBEALLOCATION v142; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v143[512]; // [rsp+140h] [rbp+40h]
  __int128 v144; // [rsp+340h] [rbp+240h] BYREF

  v9 = a5;
  v10 = a3;
  v11 = a2;
  LODWORD(v12) = 0;
  *a7 = 0;
  a8->Value = 0;
  v135 = a8;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v127 = a4;
  v126 = a3;
  v128 = a2;
  v130 = a5;
  v132 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
  v139 = 0LL;
  v141 = 0;
  v133 = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                          &v139,
                                          v11);
  if ( !v133 )
  {
    v22 = -1073741801;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = v11;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdWarning(v23);
    goto LABEL_179;
  }
  P = 0LL;
  v138 = 0;
  v131 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&P, v11);
  if ( !v131 )
  {
    v22 = -1073741801;
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v29[3] = v11;
    v29[4] = -1073741801LL;
    v29[5] = PsGetCurrentProcess(v31, v30);
    WdLogEvent5_WdWarning(v29);
    goto LABEL_175;
  }
  v32 = *((_DWORD *)this + 434);
  v33 = 1;
  v123 = 1;
  if ( v32 > 0x10 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v34 + 24) = 10171LL;
    WdLogEvent5_WdAssertion(v34);
    v32 = *((_DWORD *)this + 434);
  }
  v35 = 0;
  if ( v32 )
  {
    while ( v35 < 0x10 )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*((_QWORD *)this + 216) + 2552LL), v35);
      if ( !DisplayModeInfo )
      {
        v42 = WdLogNewEntry5_WdError(v38, v37, 0LL);
        *(_QWORD *)(v42 + 24) = this;
        *(_QWORD *)(v42 + 32) = v35;
        WdLogEvent5_WdError(v42);
        v33 = 0;
        v123 = 0;
        break;
      }
      v39 = *(_DWORD *)DisplayModeInfo;
      v40 = 2LL * v35++;
      HIDWORD(v144) = *((_DWORD *)DisplayModeInfo + 1);
      *(_QWORD *)&v144 = 0LL;
      DWORD2(v144) = v39;
      v41 = v144;
      *(_OWORD *)&v143[8 * v40 + 256] = v144;
      *(_OWORD *)&v143[8 * v40] = v41;
      if ( v35 >= *((_DWORD *)this + 434) )
        break;
    }
    v9 = v130;
  }
  v43 = v127;
  v129 = -1;
  if ( v127 )
  {
    v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v44 + 888) || (v45 = 1, !*(_BYTE *)(v44 + 2498)) )
      v45 = 0;
    v33 &= v45;
    v46 = 0;
    v123 = v33;
    while ( 1 )
    {
      if ( (int)v12 < 0 )
        goto LABEL_44;
      v47 = *v9;
      if ( (*v9)->PostComposition.SrcRect.left >= (*v9)->PostComposition.SrcRect.right
        || v47->PostComposition.SrcRect.top >= v47->PostComposition.SrcRect.bottom
        || v47->PostComposition.DstRect.left >= v47->PostComposition.DstRect.right
        || v47->PostComposition.DstRect.top >= v47->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v47->PostComposition.Rotation;
      if ( Rotation > 2 )
      {
        if ( Rotation > 4 )
        {
          v49 = WdLogNewEntry5_WdWarning(v44, v43, 0LL);
          LODWORD(v12) = -1073741811;
          *(_QWORD *)(v49 + 24) = v47->PostComposition.Rotation;
          *(_QWORD *)(v49 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v49);
          v43 = v127;
        }
        else
        {
          v33 = 0;
          v123 = 0;
        }
      }
      if ( v47->PostComposition.Flags.Value )
        goto LABEL_41;
      VidPnSourceId = v47->VidPnSourceId;
      if ( v47->VidPnSourceId >= *((_DWORD *)this + 434) )
      {
        v51 = WdLogNewEntry5_WdWarning(v44, v43, 0LL);
        *(_QWORD *)(v51 + 24) = v47->VidPnSourceId;
        *(_QWORD *)(v51 + 32) = 0LL;
        goto LABEL_40;
      }
      v44 = 2LL * VidPnSourceId;
      if ( *(_DWORD *)&v143[16 * VidPnSourceId + 256] > v47->PostComposition.DstRect.left
        || *(_DWORD *)&v143[16 * VidPnSourceId + 264] < v47->PostComposition.DstRect.right
        || *(_DWORD *)&v143[16 * VidPnSourceId + 260] > v47->PostComposition.DstRect.top
        || *(_DWORD *)&v143[16 * VidPnSourceId + 268] < v47->PostComposition.DstRect.bottom )
      {
        v51 = WdLogNewEntry5_WdWarning(v44, v43, 0LL);
        *(_QWORD *)(v51 + 24) = this;
        *(_QWORD *)(v51 + 32) = -1073741811LL;
LABEL_40:
        WdLogEvent5_WdWarning(v51);
LABEL_41:
        v33 = 0;
        v123 = 0;
        goto LABEL_44;
      }
      ++v46;
      ++v9;
      *(RECT *)&v143[16 * VidPnSourceId] = v47->PostComposition.SrcRect;
      if ( v46 >= (unsigned int)v43 )
        goto LABEL_44;
    }
    v52 = WdLogNewEntry5_WdWarning(v44, v43, 0LL);
    *(_QWORD *)(v52 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    LODWORD(v12) = -1073741811;
LABEL_44:
    v10 = v126;
  }
  v124 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_131;
  v53 = 0LL;
  *(_QWORD *)&v144 = 0LL;
  while ( 2 )
  {
    if ( (int)v12 < 0 )
    {
LABEL_131:
      LODWORD(v63) = 0;
      break;
    }
    v54 = v10[v53];
    v55 = *((_QWORD *)this + 5);
    hResource = v54->hResource;
    v57 = v55 + 184;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 184));
    v58 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v58 >= *(_DWORD *)(v55 + 224) )
      goto LABEL_54;
    v59 = *(_QWORD *)(v55 + 208);
    v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
    if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60)
      || (v60 & 0x2000) != 0
      || (v60 & 0x1F) == 0 )
    {
      goto LABEL_54;
    }
    v61 = v60 & 0x1F;
    if ( (_BYTE)v61 != 4 )
    {
      v62 = WdLogNewEntry5_WdError(v61, 2LL * (unsigned int)v58, v59);
      *(_QWORD *)(v62 + 24) = 267LL;
      WdLogEvent5_WdError(v62);
LABEL_54:
      LODWORD(v63) = 0;
      v64 = 0LL;
      goto LABEL_55;
    }
    v64 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
    LODWORD(v63) = 0;
LABEL_55:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v125, v64);
    ExReleasePushLockSharedEx(v57, 0LL);
    KeLeaveCriticalRegion();
    if ( !v125 )
    {
LABEL_157:
      v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67);
      v117 = v54->hResource;
      v93[4] = -1073741811LL;
LABEL_153:
      v93[3] = v117;
LABEL_154:
      WdLogEvent5_WdWarning(v93);
      v33 = v63;
      v123 = v63;
      goto LABEL_155;
    }
    Count = (const struct DXGALLOCATION *)v125[3].Count;
    while ( 1 )
    {
      if ( !Count )
        goto LABEL_157;
      if ( *((DXGDEVICE **)Count + 1) != this )
      {
        v118 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67);
        v118[3] = v54->hResource;
        v118[4] = *((_QWORD *)Count + 1);
        v118[5] = this;
        v118[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v118);
        goto LABEL_157;
      }
      v63 = *((_QWORD *)Count + 6);
      if ( (*(_DWORD *)(v63 + 4) & 0x200B) != 0 )
        break;
      Count = (const struct DXGALLOCATION *)*((_QWORD *)Count + 8);
      LODWORD(v63) = 0;
    }
    v69 = v144;
    v67 = 0LL;
    v133[(_QWORD)v144] = Count;
    if ( !v63 )
      goto LABEL_157;
    v70 = v131;
    v131[v69] = *(void **)(v63 + 16);
    v71 = v54->VidPnSourceId;
    if ( (unsigned int)v71 >= *((_DWORD *)this + 434) )
    {
      v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, 0LL);
      v117 = v54->VidPnSourceId;
      LODWORD(v63) = 0;
      v93[4] = 0LL;
      goto LABEL_153;
    }
    if ( (_DWORD)v71 != ((*(_DWORD *)(v63 + 4) >> 6) & 0xF) )
    {
      v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v72 + 888) || !*(_BYTE *)(v72 + 2498) )
      {
        v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v70, 0LL);
        v93[3] = v54->VidPnSourceId;
        v94 = (*(_DWORD *)(v63 + 4) >> 6) & 0xF;
LABEL_128:
        LODWORD(v63) = 0;
        v93[4] = v94;
        v93[5] = 0LL;
        goto LABEL_154;
      }
    }
    v73 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v74 = *(unsigned int *)(*((_QWORD *)v73 + 2) + 2392LL);
    if ( v54->LayerIndex >= (unsigned int)v74 )
    {
      v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v70, 0LL);
      v93[3] = v54->LayerIndex;
      v94 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2392LL);
      goto LABEL_128;
    }
    if ( a6 && !*((_DWORD *)this + 435) )
    {
      v95 = WdLogNewEntry5_WdWarning(v74, v70, 0LL);
      LODWORD(v12) = -1073741790;
      *(_QWORD *)(v95 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v95);
LABEL_130:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, v96);
      goto LABEL_131;
    }
    pPlaneAttributes = v54->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v116 = WdLogNewEntry5_WdWarning(v74, pPlaneAttributes, 0LL);
      *(_QWORD *)(v116 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v116);
      goto LABEL_147;
    }
    memset(&v142, 0, sizeof(v142));
    v142.hAllocation = v131[v69];
    v77 = ADAPTER_RENDER::DdiDescribeAllocation(v73, &v142, v76);
    v12 = v77;
    if ( v77 < 0 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(right, v78, v80);
      v115 = v131;
      v114[3] = v12;
      v114[4] = this;
      v114[5] = v115[v124];
      v114[6] = v63;
      WdLogEvent5_WdError(v114);
      goto LABEL_130;
    }
    v81 = v54->pPlaneAttributes;
    LODWORD(v63) = 0;
    if ( v81->SrcRect.left < 0
      || (right = (unsigned int)v81->SrcRect.right, (int)v142.Width < (int)right)
      || v81->SrcRect.top < 0
      || (int)v142.Height < v81->SrcRect.bottom )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(right, v81, v80);
      v112[5] = v124;
      v112[3] = -1073741811LL;
      v112[4] = this;
      WdLogEvent5_WdError(v112);
      LODWORD(v12) = -1073741811;
LABEL_155:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, v113);
      break;
    }
    v82 = 2LL * v54->VidPnSourceId;
    if ( *(_DWORD *)&v143[16 * v54->VidPnSourceId] > v81->ClipRect.left
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 8] < v81->ClipRect.right
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 4] > v81->ClipRect.top
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 12] < v81->ClipRect.bottom )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v81, v80);
      v83 = v124;
      v84 = v124;
      v85[3] = 0LL;
      v85[4] = this;
      v85[5] = v124;
      WdLogEvent5_WdWarning(v85);
      v81 = v54->pPlaneAttributes;
      v33 = 0;
      v123 = 0;
    }
    else
    {
      v83 = v124;
      v84 = v124;
    }
    if ( v81->DstRect.left > v81->ClipRect.left
      || v81->DstRect.right < v81->ClipRect.right
      || v81->DstRect.top > v81->ClipRect.top
      || v81->DstRect.bottom < v81->ClipRect.bottom )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81, v80);
      v111[3] = -1073741811LL;
      v111[4] = this;
      v111[5] = v84;
      WdLogEvent5_WdError(v111);
LABEL_147:
      LODWORD(v12) = -1073741811;
      goto LABEL_130;
    }
    v86 = v81->Rotation;
    if ( v86 > 1 )
    {
      if ( v86 <= 4 )
      {
        LODWORD(v63) = 0;
        v82 = 0LL;
        if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2456LL) & 0x20) == 0 )
          v82 = v33;
        v33 = v82;
        v123 = v82;
        goto LABEL_99;
      }
      v87 = WdLogNewEntry5_WdWarning(v82, v81, v80);
      *(_QWORD *)(v87 + 24) = v54->pPlaneAttributes->Rotation;
      *(_QWORD *)(v87 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v87);
      v81 = v54->pPlaneAttributes;
      LODWORD(v12) = -1073741811;
    }
    LODWORD(v63) = 0;
LABEL_99:
    StretchQuality = v81->StretchQuality;
    if ( StretchQuality <= 0 || StretchQuality > 2 )
    {
      v89 = WdLogNewEntry5_WdWarning(v82, v81, v80);
      *(_QWORD *)(v89 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v89);
      v81 = v54->pPlaneAttributes;
      LODWORD(v12) = -1073741811;
    }
    v90 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v90 + 856) && (!*(_QWORD *)(v90 + 888) || !*(_BYTE *)(v90 + 2498)) )
    {
      ColorSpace = v81->ColorSpace;
      if ( ColorSpace == -1
        || ColorSpace > 0 && (ColorSpace <= 3 || ColorSpace == 5 || ColorSpace > 9 && ColorSpace <= 19) )
      {
        v33 = 0;
        v123 = 0;
      }
    }
    SDRWhiteLevel = v81->SDRWhiteLevel;
    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v90 + 308) & 0x200) == 0 )
    {
      if ( *(int *)(v90 + 2184) < 8960 )
        v33 = 0;
      v123 = v33;
    }
    if ( !*(_QWORD *)(v90 + 888) || !*(_BYTE *)(v90 + 2498) )
    {
      if ( v129 == -1 )
      {
        v129 = v54->VidPnSourceId;
      }
      else
      {
        if ( v129 != v54->VidPnSourceId )
          v33 = 0;
        v123 = v33;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, (__int64)v81);
    v53 = v144 + 1;
    v124 = v83 + 1;
    *(_QWORD *)&v144 = v144 + 1;
    if ( v83 + 1 < v128 )
    {
      v10 = v126;
      continue;
    }
    break;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v134,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 216) + 2552LL) + 504LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
  if ( (int)v12 < 0 )
  {
    v120 = v132;
    goto LABEL_172;
  }
  if ( v33 )
  {
    v97 = v63;
    v144 = 0uLL;
    if ( v127 )
    {
      v98 = v130;
      v99 = v127;
      do
      {
        v100 = *v98;
        v101 = (*v98)->VidPnSourceId;
        v102 = *(_QWORD *)(*((_QWORD *)this + 216) + 2552LL);
        v103 = (DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3968 * v101);
        if ( !*((_BYTE *)&v144 + v101) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3968 * v101));
          v97 = v100->VidPnSourceId;
          *((_BYTE *)&v144 + v100->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v103,
          &v100->PostComposition.SrcRect,
          &v100->PostComposition.DstRect);
        ++v98;
        --v99;
      }
      while ( v99 );
      v33 = v123;
      LODWORD(v63) = 0;
    }
    if ( v128 )
    {
      v104 = v128;
      v105 = v133;
      v106 = (char *)((char *)v126 - (char *)v133);
      do
      {
        v107 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v105 + (_QWORD)v106);
        v108 = *(_QWORD *)(*((_QWORD *)this + 216) + 2552LL);
        v109 = v107->VidPnSourceId;
        v110 = (DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3968 * v109);
        if ( !*((_BYTE *)&v144 + v109) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3968 * v109));
          v97 = v107->VidPnSourceId;
          *((_BYTE *)&v144 + v97) = 1;
        }
        if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v110, v107) )
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v110, v107->LayerIndex);
        }
        else
        {
          v119 = v107->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v110,
            v107->LayerIndex,
            *v105,
            v119->Flags,
            &v119->SrcRect,
            &v119->DstRect,
            &v119->ClipRect,
            v119->Rotation,
            v119->Blend,
            v119->ColorSpace,
            v119->SDRWhiteLevel);
        }
        ++v105;
        --v104;
      }
      while ( v104 );
      v33 = v123;
      LODWORD(v63) = 0;
    }
    v120 = v132;
    LODWORD(v12) = CheckMultiPlaneOverlayInternal3(
                     v97,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 216) + 2552LL),
                     v132,
                     v135);
    if ( *v120 == (_DWORD)v63 )
    {
      v121 = v63;
      v122 = &v144;
      do
      {
        if ( *(_BYTE *)v122 != (_BYTE)v63 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 216)
                                                                                            + 2552LL)
                                                                                + 112LL)
                                                                    + 3968LL * v121));
        ++v121;
        v122 = (__int128 *)((char *)v122 + 1);
      }
      while ( v121 < 0x10 );
    }
  }
  else
  {
    v120 = v132;
  }
  if ( (int)v12 < 0 || !v33 )
LABEL_172:
    LogCheckMutiplaneOverlaySupport(v12, *v120, v128, v126, v131, v127, v130, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134);
  v22 = v12;
  if ( v134[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134);
LABEL_175:
  if ( P != &v137 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v138 = 0;
LABEL_179:
  if ( v139 != &v140 )
  {
    if ( v139 )
      ExFreePoolWithTag(v139, 0);
  }
  return v22;
}
