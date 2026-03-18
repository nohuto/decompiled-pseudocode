/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00CCC90 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001E20 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0006964 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00087D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000D860 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001B7E4 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00C9E34 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00CA06C (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00CA174 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00CAA44 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB95C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkQueryDmmInterface @ 0x1C01269D4 (DxgkQueryDmmInterface.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129DD0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0237D34 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C0278734 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rdi
  unsigned int v24; // ebx
  int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // rbx
  bool v28; // zf
  enum _D3DDDIFORMAT Format; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // r12d
  DXGADAPTER **v35; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v36; // rbx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  unsigned int updated; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 Denominator; // rbx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned int *v56; // rcx
  __int64 v57; // rax
  int v58; // edx
  int DmmInterface; // eax
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // r12
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  struct DXGGLOBAL *Global; // rax
  int v79; // r8d
  __int64 v80; // rcx
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  _BYTE v84[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v85; // [rsp+54h] [rbp-ACh]
  __int128 v86; // [rsp+58h] [rbp-A8h] BYREF
  _D3DDDI_RATIONAL v87[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v88[24]; // [rsp+78h] [rbp-88h]
  __int64 v89; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_DESCRIBEALLOCATION v90; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v91[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v93)(__int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E8h] [rbp-18h]
  enum _D3DDDI_ROTATION v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v99; // [rsp+108h] [rbp+8h]
  __int64 v100; // [rsp+110h] [rbp+10h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v101; // [rsp+118h] [rbp+18h]
  _QWORD v102[2]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v103[64]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]
  char v105; // [rsp+2B0h] [rbp+1B0h]

  v99 = a6;
  v101 = a7;
  v98 = retaddr;
  v96 = a4;
  v85 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v98, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v50 + 24) = 6639LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v11 = *((_QWORD *)this + 216);
  v12 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v11 || !*(_QWORD *)(v11 + 2552) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v51 + 24) = 6647LL;
    WdLogEvent5_WdAssertion(v51);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v11 + 2552), v12);
  v14 = *((_OWORD *)DisplayModeInfo + 1);
  v86 = *(_OWORD *)DisplayModeInfo;
  v15 = *((_OWORD *)DisplayModeInfo + 2);
  *(_OWORD *)&v87[0].Numerator = v14;
  *(_QWORD *)&v14 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v88 = v15;
  *(_QWORD *)&v88[16] = v14;
  memset(&v90, 0, sizeof(v90));
  v90.Rotation = -1;
  v16 = *((_QWORD *)a2 + 6);
  v90.Flags.Value = 1;
  v17 = *(void **)(v16 + 16);
  v18 = *((_QWORD *)this + 2);
  v90.hAllocation = v17;
  v19 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2560LL), &v90);
  FunctionalVidPnWithEnabledVidPnSource = v19;
  if ( v19 < 0 )
    goto LABEL_40;
  FunctionalVidPnWithEnabledVidPnSource = (unsigned int)v86;
  v24 = DWORD1(v86);
  if ( *(_QWORD *)&v90.Width != (_QWORD)v86 )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v82[3] = a2;
    v82[4] = v90.Width;
    v82[5] = v90.Height;
    v82[7] = v24;
    v82[6] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v82);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_29;
  }
  if ( v90.Rotation != -1 )
  {
    Denominator = (int)v87[1].Denominator;
    if ( v90.Rotation != v87[1].Denominator )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v54[3] = a2;
      v54[4] = v90.Rotation;
      v54[5] = Denominator;
LABEL_44:
      WdLogEvent5_WdWarning(v54);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_31;
    }
  }
  v25 = *(_DWORD *)&v88[8];
  v26 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v26) = (*(_DWORD *)&v88[8] >> 4) ^ v26;
  if ( (v26 & 1) == 0 )
  {
    v27 = *(unsigned int *)&v88[20];
    if ( v90.PrivateDriverFormatAttribute != *(_DWORD *)&v88[20] )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v20);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      v55[3] = a2;
      v55[4] = v90.PrivateDriverFormatAttribute;
      v56 = v99;
      v55[5] = v27;
      *v56 = v90.PrivateDriverFormatAttribute;
      goto LABEL_31;
    }
  }
  v28 = *(_QWORD *)(v11 + 2560) == 0LL;
  Format = v90.Format;
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v88[12] = v90.MultisampleMethod;
  DWORD2(v86) = v90.Format;
  if ( v28 )
  {
    if ( v90.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v86) = Format;
  }
  if ( !v90.RefreshRate.Denominator )
  {
    v57 = WdLogNewEntry5_WdError(v26, v20, v22);
    *(_QWORD *)(v57 + 24) = v90.RefreshRate.Numerator;
    WdLogEvent5_WdError(v57);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_31;
  }
  if ( v90.RefreshRate.Numerator == 64
    && v90.RefreshRate.Denominator == 1
    && v87[0].Numerator == -2
    && v87[0].Denominator == -2 )
  {
    v90.RefreshRate.Numerator = -2;
    v90.RefreshRate.Denominator = -2;
  }
  v105 = *(_BYTE *)&a5 & 1;
  if ( v105 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v87, &v90.RefreshRate, 0) )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
    v54[3] = a2;
    v54[4] = v90.RefreshRate.Numerator;
    v54[5] = v90.RefreshRate.Denominator;
    v54[6] = v87[0].Numerator;
    v54[7] = v87[0].Denominator;
    goto LABEL_44;
  }
  v87[0] = v90.RefreshRate;
  HIDWORD(v86) = DmmMapVSyncFromRationalToInteger(&v90.RefreshRate, v85, 0LL);
  v33 = *((_QWORD *)a2 + 6);
  v87[1].Numerator = v85;
  v34 = ((unsigned __int8)v25 ^ (unsigned __int8)BYTE1(*(_DWORD *)(v33 + 4))) & 0x10 ^ v25;
  v35 = *(DXGADAPTER ***)(v11 + 2552);
  *(_DWORD *)&v88[8] = v34;
  v36 = ADAPTER_DISPLAY::GetDisplayModeInfo(v35, v12);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v11 + 2552),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v105
      || *((_DWORD *)v36 + 4) == v87[0].Numerator
      && *((_DWORD *)v36 + 5) == v87[0].Denominator
      && *((_DWORD *)v36 + 6) == v85
      && *((_DWORD *)v36 + 7) == v87[1].Denominator
      && *((_DWORD *)v36 + 8) == *(_DWORD *)v88
      && (v58 = *((_DWORD *)v36 + 9), (((unsigned __int8)v58 ^ v88[4]) & 1) == 0)
      && (((unsigned __int8)v58 ^ v88[4]) & 2) == 0
      && (((unsigned __int8)v34 ^ *((_BYTE *)v36 + 40)) & 0xF) == 0 )
    {
      if ( *(_QWORD *)v36 == (_QWORD)v86 )
      {
        if ( (v37 = *((_DWORD *)v36 + 2), v37 == Format)
          || v37 == 21 && Format == D3DDDIFMT_X8R8G8B8
          || v37 == 22 && Format == D3DDDIFMT_A8R8G8B8 )
        {
          if ( (((unsigned __int8)v34 ^ *((_BYTE *)v36 + 40)) & 0x10) == 0
            && (((unsigned __int8)v34 ^ (unsigned __int8)*((_DWORD *)v36 + 10)) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((DXGADAPTER *)v11, (unsigned int)v12, Format)
            && (v105 || *(_QWORD *)((char *)v36 + 44) == *(_QWORD *)&v88[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v12, a2, 0, 1u);
            v38 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v11, (unsigned int)v12, 0LL);
            v42 = v38;
            if ( v38 < 0 )
            {
              v66 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
              v66[3] = *(_QWORD *)(v11 + 2552);
              v66[4] = (unsigned int)v12;
              v66[5] = v42;
              WdLogEvent5_WdError(v66);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(PERESOURCE ***)(v11 + 2552),
                        (PERESOURCE **)this,
                        v12,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v89 = 0LL;
            LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
            DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v11 + 276), v12, 0LL);
LABEL_27:
            if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
              goto LABEL_31;
            *((_DWORD *)this + v12 + 272) |= 0x200u;
            goto LABEL_29;
          }
        }
      }
    }
  }
  v89 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v11);
  FunctionalVidPnWithEnabledVidPnSource = DmmInterface;
  if ( DmmInterface < 0 )
  {
LABEL_40:
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v52[3] = FunctionalVidPnWithEnabledVidPnSource;
    v52[4] = this;
    v52[5] = *((unsigned int *)a2 + 4);
    v52[6] = a2;
    v52[7] = (unsigned int)v12;
    WdLogEvent5_WdError(v52);
    goto LABEL_29;
  }
  v60 = v89;
  v100 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0;
  v91[0] = 0;
  v97 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v89, v11, (unsigned int)v12);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v91,
    v97,
    *(_QWORD *)(v60 + 64),
    v11);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v65 = (unsigned int)v12;
    v64[3] = -1071774925LL;
LABEL_70:
    v64[4] = v65;
    v64[5] = (unsigned int)v86;
    v64[6] = DWORD1(v86);
    v64[7] = SDWORD2(v86);
    v67 = v64;
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v64[3] = (unsigned int)v12;
    v65 = *(_QWORD *)(v11 + 2552);
    goto LABEL_70;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v12, a2, 0, 1u);
      memset(v103, 0, 0xFCuLL);
      v70 = v92;
      v84[0] = 0;
      v103[8] = 1 << v12;
      v71 = DmmSetTimingsOnAdapter(v11, v92, 0LL, 2LL, v103, v84, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v71;
      if ( v71 < 0 )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72, v74);
        v81[3] = FunctionalVidPnWithEnabledVidPnSource;
        v81[4] = *(_QWORD *)(v11 + 2552);
        v81[5] = (unsigned int)v12;
        v81[6] = a2;
        v81[7] = this;
        WdLogEvent5_WdError(v81);
      }
      else
      {
        DmmHandleSetTimingsResult((DXGADAPTER *)v11, (struct _DMM_SET_TIMING_RESULT *)v84, v101);
        if ( ((1 << v12) & v103[20]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v103[v12 + 21];
        Current = DXGPROCESS::GetCurrent();
        if ( !Current || !*((_BYTE *)Current + 298) )
        {
          Global = DXGGLOBAL::GetGlobal(v77, v76);
          do
            v79 = _InterlockedIncrement((volatile signed __int32 *)Global + 252);
          while ( !v79 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v11 + 2552),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v79);
          LOBYTE(v80) = 1;
          DxgkNotifyDisplayChange(v80);
          v70 = v92;
        }
      }
      if ( v91[0] )
        v93(v94, v70);
      goto LABEL_27;
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61, v63);
    v69[4] = (unsigned int)v12;
    v69[5] = (unsigned int)v86;
    v69[6] = DWORD1(v86);
    v69[7] = SDWORD2(v86);
    v69[3] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdError(v69);
    if ( v91[0] )
      v93(v94, v92);
LABEL_29:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v102[1] = 0LL;
      v102[0] = 1LL;
      DxgkStatusChangeNotify(v102);
    }
    goto LABEL_31;
  }
  v68 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v68[3] = (unsigned int)v86;
  v68[4] = DWORD1(v86);
  v68[5] = SDWORD2(v86);
  v68[6] = v87[0].Numerator / v87[0].Denominator;
  v68[7] = (unsigned int)v12;
  v67 = v68;
LABEL_72:
  WdLogEvent5_WdDmmEvent(v67);
  if ( v91[0] )
    v93(v94, v92);
LABEL_31:
  *(_QWORD *)&v86 = *(_QWORD *)&v90.Width;
  DWORD2(v86) = v90.Format;
  if ( v90.RefreshRate.Denominator )
    HIDWORD(v86) = DmmMapVSyncFromRationalToInteger(&v90.RefreshRate, v85, 0LL);
  else
    HIDWORD(v86) = 0;
  v87[0] = v90.RefreshRate;
  v87[1].Numerator = v85;
  v87[1].Denominator = v96;
  v44 = DmmCacheDisplayModeChangeRequest(v11, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, &v86);
  v48 = v44;
  if ( v44 < 0 )
  {
    v83 = WdLogNewEntry5_WdError(v46, v45, v47);
    *(_QWORD *)(v83 + 24) = v48;
    WdLogEvent5_WdError(v83);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v98, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
