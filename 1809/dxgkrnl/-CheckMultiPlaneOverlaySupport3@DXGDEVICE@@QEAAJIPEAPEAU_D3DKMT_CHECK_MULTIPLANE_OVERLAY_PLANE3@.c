/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC924
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC77C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C01FD6A8 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0201390 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0122DE0 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C012E988 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C01C0C80 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C36A4 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01C502C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C01C5134 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C01FB450 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC17C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01FEC84 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C01FFFF0 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
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
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
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
  unsigned __int8 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // al
  unsigned int v45; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v46; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v47; // rbx
  unsigned int Rotation; // eax
  __int64 v49; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v56; // r15
  unsigned int hResource; // ebx
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  ULONG_PTR i; // rbx
  __int64 v68; // r14
  __int64 v69; // r13
  void **v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  ADAPTER_RENDER *v73; // rbx
  __int64 v74; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  const GUID *v76; // r8
  int v77; // eax
  __int64 right; // rcx
  __int64 v79; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // r13d
  __int64 v83; // rbx
  _QWORD *v84; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v85; // r8
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
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  void **v98; // rdx
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v102; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v103; // r14
  __int64 v104; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  DISPLAY_SOURCE *v108; // rsi
  __int64 v109; // r13
  const struct DXGALLOCATION **v110; // r12
  char *v111; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v112; // rsi
  __int64 v113; // rcx
  __int64 v114; // rdx
  DISPLAY_SOURCE *v115; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v116; // r9
  int *v117; // rbx
  int v118; // eax
  char v119; // r11
  unsigned int v120; // r9d
  __int128 *v121; // r10
  char v122; // [rsp+60h] [rbp-A0h]
  unsigned int v123; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v124; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v125; // [rsp+70h] [rbp-90h]
  unsigned int v126; // [rsp+78h] [rbp-88h]
  unsigned int v127; // [rsp+7Ch] [rbp-84h]
  int v128; // [rsp+80h] [rbp-80h]
  void **v129; // [rsp+88h] [rbp-78h]
  int *v130; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v131; // [rsp+98h] [rbp-68h]
  const struct DXGALLOCATION **v132; // [rsp+A0h] [rbp-60h]
  _BYTE v133[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v134; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  char v136; // [rsp+C8h] [rbp-38h] BYREF
  int v137; // [rsp+E0h] [rbp-20h]
  PVOID v138; // [rsp+E8h] [rbp-18h] BYREF
  char v139; // [rsp+F0h] [rbp-10h] BYREF
  int v140; // [rsp+108h] [rbp+8h]
  struct _DXGKARG_DESCRIBEALLOCATION v141; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v142[512]; // [rsp+140h] [rbp+40h]
  __int128 v143; // [rsp+340h] [rbp+240h] BYREF

  v131 = a5;
  v10 = a3;
  v11 = a2;
  LODWORD(v12) = 0;
  v134 = a8;
  v126 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v125 = a3;
  v127 = a2;
  v130 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
  v138 = 0LL;
  v140 = 0;
  v132 = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                          &v138,
                                          v11);
  if ( v132 )
  {
    P = 0LL;
    v137 = 0;
    v129 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&P, v11);
    if ( !v129 )
    {
      v22 = -1073741801;
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v29[3] = v11;
      v29[4] = -1073741801LL;
      v29[5] = PsGetCurrentProcess(v31, v30);
      WdLogEvent5_WdWarning(v29);
LABEL_169:
      if ( P != &v136 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v137 = 0;
      goto LABEL_173;
    }
    v32 = *((_DWORD *)this + 434);
    v33 = 1;
    v122 = 1;
    if ( v32 > 0x10 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v34 + 24) = 10089LL;
      WdLogEvent5_WdAssertion(v34);
      v32 = *((_DWORD *)this + 434);
    }
    v35 = 0LL;
    v36 = 0;
    if ( v32 )
    {
      while ( v36 < 0x10 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(*((_QWORD *)this + 216) + 2520LL), v36);
        v35 = 0LL;
        if ( !DisplayModeInfo )
        {
          v42 = WdLogNewEntry5_WdError(v38);
          *(_QWORD *)(v42 + 32) = v36;
          *(_QWORD *)(v42 + 24) = this;
          WdLogEvent5_WdError(v42);
          v33 = 0;
          v122 = 0;
          break;
        }
        v39 = *(_DWORD *)DisplayModeInfo;
        HIDWORD(v143) = *((_DWORD *)DisplayModeInfo + 1);
        v40 = v36++;
        v40 *= 2LL;
        *(_QWORD *)&v143 = 0LL;
        DWORD2(v143) = v39;
        v41 = v143;
        *(_OWORD *)&v142[8 * v40 + 256] = v143;
        *(_OWORD *)&v142[8 * v40] = v41;
        if ( v36 >= *((_DWORD *)this + 434) )
          break;
      }
    }
    v128 = -1;
    if ( a4 )
    {
      v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v43 + 904) || (v44 = 1, !*(_BYTE *)(v43 + 2466)) )
        v44 = 0;
      v33 &= v44;
      v45 = 0;
      v46 = v131;
      v122 = v33;
      while ( 1 )
      {
        if ( (int)v12 < 0 )
          goto LABEL_41;
        v47 = *v46;
        if ( (*v46)->PostComposition.SrcRect.left >= (*v46)->PostComposition.SrcRect.right
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
            v49 = WdLogNewEntry5_WdWarning(v43, v35, v28);
            LODWORD(v12) = -1073741811;
            *(_QWORD *)(v49 + 24) = v47->PostComposition.Rotation;
            *(_QWORD *)(v49 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v49);
          }
          else
          {
            v33 = 0;
            v122 = 0;
          }
        }
        if ( v47->PostComposition.Flags.Value )
          goto LABEL_38;
        VidPnSourceId = v47->VidPnSourceId;
        if ( v47->VidPnSourceId >= *((_DWORD *)this + 434) )
        {
          v52 = WdLogNewEntry5_WdWarning(0LL, v35, v28);
          *(_QWORD *)(v52 + 24) = v47->VidPnSourceId;
          *(_QWORD *)(v52 + 32) = 0LL;
          WdLogEvent5_WdWarning(v52);
          goto LABEL_38;
        }
        v43 = 2LL * VidPnSourceId;
        if ( *(_DWORD *)&v142[16 * VidPnSourceId + 256] > v47->PostComposition.DstRect.left
          || *(_DWORD *)&v142[16 * VidPnSourceId + 264] < v47->PostComposition.DstRect.right
          || *(_DWORD *)&v142[16 * VidPnSourceId + 260] > v47->PostComposition.DstRect.top
          || *(_DWORD *)&v142[16 * VidPnSourceId + 268] < v47->PostComposition.DstRect.bottom )
        {
          v51 = WdLogNewEntry5_WdWarning(v43, v35, v28);
          *(_QWORD *)(v51 + 24) = this;
          *(_QWORD *)(v51 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v51);
LABEL_38:
          v33 = 0;
          v122 = 0;
          goto LABEL_41;
        }
        ++v45;
        ++v46;
        *(RECT *)&v142[16 * VidPnSourceId] = v47->PostComposition.SrcRect;
        if ( v45 >= v126 )
          goto LABEL_41;
      }
      v53 = WdLogNewEntry5_WdWarning(v43, v35, v28);
      *(_QWORD *)(v53 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v53);
      LODWORD(v12) = -1073741811;
LABEL_41:
      v10 = v125;
    }
    v123 = 0;
    if ( (_DWORD)v11 )
    {
      v54 = 0LL;
      *(_QWORD *)&v143 = 0LL;
LABEL_44:
      if ( (int)v12 >= 0 )
      {
        v55 = *((_QWORD *)this + 5);
        v56 = v10[v54];
        hResource = v56->hResource;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 208));
        v58 = (hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v58 < *(_DWORD *)(v55 + 248) )
        {
          v59 = *(_QWORD *)(v55 + 232);
          v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
          if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60)
            && (v60 & 0x2000) == 0
            && (v60 & 0x1F) != 0 )
          {
            v61 = v60 & 0x1F;
            if ( (_BYTE)v61 == 4 )
            {
              v63 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
LABEL_52:
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v124, v63);
              ExReleasePushLockSharedEx(v55 + 208, 0LL);
              KeLeaveCriticalRegion();
              if ( v124 )
              {
                for ( i = v124[3].Count; ; i = *(_QWORD *)(i + 64) )
                {
                  if ( !i )
                    goto LABEL_136;
                  if ( *(DXGDEVICE **)(i + 8) != this )
                    break;
                  v68 = *(_QWORD *)(i + 48);
                  if ( (*(_DWORD *)(v68 + 4) & 0x200B) != 0 )
                  {
                    v69 = v143;
                    v132[(_QWORD)v143] = (const struct DXGALLOCATION *)i;
                    if ( !v68 )
                      goto LABEL_136;
                    v70 = v129;
                    v129[v69] = *(void **)(v68 + 16);
                    v71 = v56->VidPnSourceId;
                    if ( (unsigned int)v71 >= *((_DWORD *)this + 434) )
                    {
                      v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v66);
                      v93[3] = v56->VidPnSourceId;
                      v93[4] = 0LL;
                    }
                    else
                    {
                      if ( (_DWORD)v71 == ((*(_DWORD *)(v68 + 4) >> 6) & 0xF)
                        || (v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), *(_QWORD *)(v72 + 904))
                        && *(_BYTE *)(v72 + 2466) )
                      {
                        v73 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
                        v74 = *(unsigned int *)(*((_QWORD *)v73 + 2) + 2368LL);
                        if ( v56->LayerIndex < (unsigned int)v74 )
                        {
                          if ( !a6 || *((_DWORD *)this + 435) )
                          {
                            pPlaneAttributes = v56->pPlaneAttributes;
                            if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
                              || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
                              || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
                              || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
                              || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
                              || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
                            {
                              v99 = WdLogNewEntry5_WdWarning(v74, pPlaneAttributes, v66);
                              *(_QWORD *)(v99 + 24) = -1073741811LL;
                              WdLogEvent5_WdWarning(v99);
                              goto LABEL_128;
                            }
                            memset(&v141, 0, sizeof(v141));
                            v141.hAllocation = v129[v69];
                            v77 = ADAPTER_RENDER::DdiDescribeAllocation(v73, &v141, v76);
                            v12 = v77;
                            if ( v77 < 0 )
                            {
                              v97 = (_QWORD *)WdLogNewEntry5_WdError(right);
                              v98 = v129;
                              v97[3] = v12;
                              v97[4] = this;
                              v97[5] = v98[v123];
                              v97[6] = v68;
                            }
                            else
                            {
                              v80 = v56->pPlaneAttributes;
                              if ( v80->SrcRect.left >= 0 )
                              {
                                right = (unsigned int)v80->SrcRect.right;
                                if ( (int)v141.Width >= (int)right
                                  && v80->SrcRect.top >= 0
                                  && (int)v141.Height >= v80->SrcRect.bottom )
                                {
                                  v81 = 2LL * v56->VidPnSourceId;
                                  if ( *(_DWORD *)&v142[16 * v56->VidPnSourceId] > v80->ClipRect.left
                                    || *(_DWORD *)&v142[16 * v56->VidPnSourceId + 8] < v80->ClipRect.right
                                    || *(_DWORD *)&v142[16 * v56->VidPnSourceId + 4] > v80->ClipRect.top
                                    || *(_DWORD *)&v142[16 * v56->VidPnSourceId + 12] < v80->ClipRect.bottom )
                                  {
                                    v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v80, v79);
                                    v82 = v123;
                                    v84[3] = 0LL;
                                    v83 = v123;
                                    v84[5] = v123;
                                    v84[4] = this;
                                    WdLogEvent5_WdWarning(v84);
                                    v80 = v56->pPlaneAttributes;
                                    v81 = 0LL;
                                    v33 = 0;
                                    v122 = 0;
                                  }
                                  else
                                  {
                                    v82 = v123;
                                    v83 = v123;
                                  }
                                  v85 = v80;
                                  if ( v80->DstRect.left <= v80->ClipRect.left
                                    && v80->DstRect.right >= v80->ClipRect.right
                                    && v80->DstRect.top <= v80->ClipRect.top
                                    && v80->DstRect.bottom >= v80->ClipRect.bottom )
                                  {
                                    v86 = v80->Rotation;
                                    if ( v86 > 1 )
                                    {
                                      if ( v86 > 4 )
                                      {
                                        v87 = WdLogNewEntry5_WdWarning(v81, v80, v80);
                                        *(_QWORD *)(v87 + 24) = v56->pPlaneAttributes->Rotation;
                                        *(_QWORD *)(v87 + 32) = -1073741811LL;
                                        WdLogEvent5_WdWarning(v87);
                                        v80 = v56->pPlaneAttributes;
                                        LODWORD(v12) = -1073741811;
                                        v85 = v80;
                                      }
                                      else
                                      {
                                        v81 = 0LL;
                                        if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4112LL) & 0x20) == 0 )
                                          v81 = v33;
                                        v33 = v81;
                                        v122 = v81;
                                      }
                                    }
                                    StretchQuality = v80->StretchQuality;
                                    if ( StretchQuality <= 0 || StretchQuality > 2 )
                                    {
                                      v89 = WdLogNewEntry5_WdWarning(v81, v80, v85);
                                      *(_QWORD *)(v89 + 24) = -1073741811LL;
                                      WdLogEvent5_WdWarning(v89);
                                      v80 = v56->pPlaneAttributes;
                                      LODWORD(v12) = -1073741811;
                                      v85 = v80;
                                    }
                                    v90 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                                    if ( !*(_QWORD *)(v90 + 872) && (!*(_QWORD *)(v90 + 904) || !*(_BYTE *)(v90 + 2466)) )
                                    {
                                      ColorSpace = v85->ColorSpace;
                                      if ( ColorSpace == -1
                                        || (v80 = v85, ColorSpace > 0)
                                        && (ColorSpace <= 3 || ColorSpace == 5 || ColorSpace > 9 && ColorSpace <= 19) )
                                      {
                                        v33 = 0;
                                        v80 = v85;
                                        v122 = 0;
                                      }
                                    }
                                    SDRWhiteLevel = v80->SDRWhiteLevel;
                                    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v90 + 308) & 0x200) == 0 )
                                    {
                                      if ( *(int *)(v90 + 2160) < 8960 )
                                        v33 = 0;
                                      v122 = v33;
                                    }
                                    if ( !*(_QWORD *)(v90 + 904) || !*(_BYTE *)(v90 + 2466) )
                                    {
                                      if ( v128 == -1 )
                                      {
                                        v128 = v56->VidPnSourceId;
                                      }
                                      else
                                      {
                                        if ( v128 != v56->VidPnSourceId )
                                          v33 = 0;
                                        v122 = v33;
                                      }
                                    }
                                    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v124);
                                    v54 = v143 + 1;
                                    v123 = v82 + 1;
                                    *(_QWORD *)&v143 = v143 + 1;
                                    if ( v82 + 1 < v127 )
                                    {
                                      v10 = v125;
                                      goto LABEL_44;
                                    }
                                    goto LABEL_138;
                                  }
                                  v96 = (_QWORD *)WdLogNewEntry5_WdError(v81);
                                  v96[3] = -1073741811LL;
                                  v96[4] = this;
                                  v96[5] = v83;
                                  WdLogEvent5_WdError(v96);
LABEL_128:
                                  LODWORD(v12) = -1073741811;
LABEL_137:
                                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v124);
                                  goto LABEL_138;
                                }
                              }
                              v97 = (_QWORD *)WdLogNewEntry5_WdError(right);
                              LODWORD(v12) = -1073741811;
                              v97[3] = -1073741811LL;
                              v97[4] = this;
                              v97[5] = v123;
                            }
                            WdLogEvent5_WdError(v97);
                            goto LABEL_137;
                          }
                          v95 = WdLogNewEntry5_WdWarning(v74, v70, v66);
                          LODWORD(v12) = -1073741790;
                          *(_QWORD *)(v95 + 24) = -1073741790LL;
                          WdLogEvent5_WdWarning(v95);
                          goto LABEL_137;
                        }
                        v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v70, v66);
                        v93[3] = v56->LayerIndex;
                        v94 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2368LL);
                      }
                      else
                      {
                        v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v70, v66);
                        v93[3] = v56->VidPnSourceId;
                        v94 = (*(_DWORD *)(v68 + 4) >> 6) & 0xF;
                      }
                      v93[4] = v94;
                      v93[5] = 0LL;
                    }
                    WdLogEvent5_WdWarning(v93);
                    v33 = 0;
                    v122 = 0;
                    goto LABEL_137;
                  }
                }
                v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
                v100[3] = v56->hResource;
                v100[4] = *(_QWORD *)(i + 8);
                v100[5] = this;
                v100[6] = -1073741811LL;
                WdLogEvent5_WdWarning(v100);
              }
LABEL_136:
              v101 = WdLogNewEntry5_WdWarning(v65, v64, v66);
              *(_QWORD *)(v101 + 24) = v56->hResource;
              *(_QWORD *)(v101 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v101);
              LODWORD(v12) = -1073741811;
              goto LABEL_137;
            }
            v62 = WdLogNewEntry5_WdError(v61);
            *(_QWORD *)(v62 + 24) = 316LL;
            WdLogEvent5_WdError(v62);
          }
        }
        v63 = 0LL;
        goto LABEL_52;
      }
    }
LABEL_138:
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v133,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 216) + 2520LL) + 400LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v133);
    if ( (int)v12 < 0 )
    {
      v117 = v130;
    }
    else
    {
      if ( v33 )
      {
        v102 = 0;
        v143 = 0uLL;
        if ( v126 )
        {
          v103 = v131;
          v104 = v126;
          do
          {
            v105 = *v103;
            v106 = (*v103)->VidPnSourceId;
            v107 = *(_QWORD *)(*((_QWORD *)this + 216) + 2520LL);
            v108 = (DISPLAY_SOURCE *)(*(_QWORD *)(v107 + 112) + 3760 * v106);
            if ( !*((_BYTE *)&v143 + v106) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v107 + 112) + 3760 * v106));
              v102 = v105->VidPnSourceId;
              *((_BYTE *)&v143 + v105->VidPnSourceId) = 1;
            }
            DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
              v108,
              &v105->PostComposition.SrcRect,
              &v105->PostComposition.DstRect);
            ++v103;
            --v104;
          }
          while ( v104 );
          v33 = v122;
        }
        if ( v127 )
        {
          v109 = v127;
          v110 = v132;
          v111 = (char *)((char *)v125 - (char *)v132);
          do
          {
            v112 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v110 + (_QWORD)v111);
            v113 = *(_QWORD *)(*((_QWORD *)this + 216) + 2520LL);
            v114 = v112->VidPnSourceId;
            v115 = (DISPLAY_SOURCE *)(*(_QWORD *)(v113 + 112) + 3760 * v114);
            if ( !*((_BYTE *)&v143 + v114) )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v113 + 112) + 3760 * v114));
              v102 = v112->VidPnSourceId;
              *((_BYTE *)&v143 + v102) = 1;
            }
            if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v115, v112) )
            {
              DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v115, v112->LayerIndex);
            }
            else
            {
              v116 = v112->pPlaneAttributes;
              DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
                v115,
                v112->LayerIndex,
                *v110,
                v116->Flags,
                &v116->SrcRect,
                &v116->DstRect,
                &v116->ClipRect,
                v116->Rotation,
                v116->Blend,
                v116->ColorSpace,
                v116->SDRWhiteLevel);
            }
            ++v110;
            --v109;
          }
          while ( v109 );
          v33 = v122;
        }
        v117 = v130;
        v118 = CheckMultiPlaneOverlayInternal3(
                 v102,
                 *((struct ADAPTER_RENDER **)this + 2),
                 *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 216) + 2520LL),
                 v130,
                 v134);
        v119 = 0;
        LODWORD(v12) = v118;
        if ( !*v117 )
        {
          v120 = 0;
          v121 = &v143;
          do
          {
            if ( *(_BYTE *)v121 != v119 )
              DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 216)
                                                                                                + 2520LL)
                                                                                    + 112LL)
                                                                        + 3760LL * v120));
            ++v120;
            v121 = (__int128 *)((char *)v121 + 1);
          }
          while ( v120 < 0x10 );
        }
      }
      else
      {
        v117 = v130;
      }
      if ( (int)v12 >= 0 && v33 )
        goto LABEL_167;
    }
    LogCheckMutiplaneOverlaySupport(v12, *v117, v127, v125, v129, v126, v131, *((struct ADAPTER_RENDER **)this + 2));
LABEL_167:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v133);
    v22 = v12;
    if ( v133[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v133);
    goto LABEL_169;
  }
  v22 = -1073741801;
  v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
  v23[3] = v11;
  v23[4] = -1073741801LL;
  v23[5] = PsGetCurrentProcess(v25, v24);
  WdLogEvent5_WdWarning(v23);
LABEL_173:
  if ( v138 != &v139 )
  {
    if ( v138 )
      ExFreePoolWithTag(v138, 0);
  }
  return v22;
}
