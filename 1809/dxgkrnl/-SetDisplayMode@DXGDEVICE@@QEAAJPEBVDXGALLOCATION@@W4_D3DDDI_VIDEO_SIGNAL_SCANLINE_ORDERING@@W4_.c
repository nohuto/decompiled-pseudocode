/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0004C98 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0005FEC (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0013024 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A670 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkQueryDmmInterface @ 0x1C00CF110 (DxgkQueryDmmInterface.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CFAB4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFBFC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C0134064 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0136398 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C01397A4 (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0205D30 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C0242B84 (DxgkNotifyDisplayChange.c)
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
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
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
  __int64 v37; // rdx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned int updated; // eax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 Denominator; // rbx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  unsigned int *v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r12
  int v69; // eax
  __int64 v70; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v72; // rcx
  struct DXGGLOBAL *Global; // rax
  int v74; // r8d
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  _BYTE v79[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v80; // [rsp+54h] [rbp-ACh]
  __int128 v81; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DDDI_RATIONAL v82[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v83[24]; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v85; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v86[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v87; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v88)(__int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h]
  int v90; // [rsp+E8h] [rbp-18h]
  enum _D3DDDI_ROTATION v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  __int64 v93; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v94; // [rsp+108h] [rbp+8h]
  __int64 v95; // [rsp+110h] [rbp+10h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v96; // [rsp+118h] [rbp+18h]
  int v97; // [rsp+120h] [rbp+20h] BYREF
  __int64 v98; // [rsp+128h] [rbp+28h]
  _DWORD v99[64]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]
  char v101; // [rsp+2B0h] [rbp+1B0h]

  v94 = a6;
  v96 = a7;
  v93 = retaddr;
  v91 = a4;
  v80 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v93, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v48 + 24) = 6149LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v10 = *((_QWORD *)this + 216);
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v10 || !*(_QWORD *)(v10 + 2520) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v49 + 24) = 6157LL;
    WdLogEvent5_WdAssertion(v49);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v10 + 2520), v11);
  v13 = *((_OWORD *)DisplayModeInfo + 1);
  v81 = *(_OWORD *)DisplayModeInfo;
  v14 = *((_OWORD *)DisplayModeInfo + 2);
  *(_OWORD *)&v82[0].Numerator = v13;
  *(_QWORD *)&v13 = *((_QWORD *)DisplayModeInfo + 6);
  *(_OWORD *)v83 = v14;
  *(_QWORD *)&v83[16] = v13;
  memset(&v85, 0, sizeof(v85));
  v85.Rotation = -1;
  v15 = *((_QWORD *)a2 + 6);
  v85.Flags.Value = 1;
  v16 = *(void **)(v15 + 16);
  v17 = *((_QWORD *)this + 2);
  v85.hAllocation = v16;
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v17 + 16) + 2528LL), &v85);
  FunctionalVidPnWithEnabledVidPnSource = v18;
  if ( v18 < 0 )
    goto LABEL_37;
  FunctionalVidPnWithEnabledVidPnSource = (unsigned int)v81;
  v24 = DWORD1(v81);
  if ( *(_QWORD *)&v85.Width != (_QWORD)v81 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v77[3] = a2;
    v77[4] = v85.Width;
    v77[5] = v85.Height;
    v77[7] = v24;
    v77[6] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdWarning(v77);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_29;
  }
  if ( v85.Rotation != -1 )
  {
    Denominator = (int)v82[1].Denominator;
    if ( v85.Rotation != v82[1].Denominator )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v52[3] = a2;
      v52[4] = v85.Rotation;
      v52[5] = Denominator;
LABEL_41:
      WdLogEvent5_WdWarning(v52);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
      goto LABEL_31;
    }
  }
  v25 = *(_DWORD *)&v83[8];
  v26 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v26) = (*(_DWORD *)&v83[8] >> 4) ^ v26;
  if ( (v26 & 1) == 0 )
  {
    v27 = *(unsigned int *)&v83[20];
    if ( v85.PrivateDriverFormatAttribute != *(_DWORD *)&v83[20] )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v19, v21, v22);
      LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
      v53[3] = a2;
      v53[4] = v85.PrivateDriverFormatAttribute;
      v54 = v94;
      v53[5] = v27;
      *v54 = v85.PrivateDriverFormatAttribute;
      goto LABEL_31;
    }
  }
  v28 = *(_QWORD *)(v10 + 2528) == 0LL;
  Format = v85.Format;
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v83[12] = v85.MultisampleMethod;
  DWORD2(v81) = v85.Format;
  if ( v28 )
  {
    if ( v85.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v81) = Format;
  }
  if ( !v85.RefreshRate.Denominator )
  {
    v55 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v55 + 24) = v85.RefreshRate.Numerator;
    WdLogEvent5_WdError(v55);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_31;
  }
  if ( v85.RefreshRate.Numerator == 64
    && v85.RefreshRate.Denominator == 1
    && v82[0].Numerator == -2
    && v82[0].Denominator == -2 )
  {
    v85.RefreshRate.Numerator = -2;
    v85.RefreshRate.Denominator = -2;
  }
  v101 = *(_BYTE *)&a5 & 1;
  if ( v101 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v82, &v85.RefreshRate, 0) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
    v52[3] = a2;
    v52[4] = v85.RefreshRate.Numerator;
    v52[5] = v85.RefreshRate.Denominator;
    v52[6] = v82[0].Numerator;
    v52[7] = v82[0].Denominator;
    goto LABEL_41;
  }
  v82[0] = v85.RefreshRate;
  HIDWORD(v81) = DmmMapVSyncFromRationalToInteger(&v85.RefreshRate, v80, 0LL);
  v33 = *((_QWORD *)a2 + 6);
  v82[1].Numerator = v80;
  v34 = ((unsigned __int8)v25 ^ (unsigned __int8)BYTE1(*(_DWORD *)(v33 + 4))) & 0x10 ^ v25;
  v35 = *(DXGADAPTER ***)(v10 + 2520);
  *(_DWORD *)&v83[8] = v34;
  v36 = ADAPTER_DISPLAY::GetDisplayModeInfo(v35, v11);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v10 + 2520),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v101
      || *((_DWORD *)v36 + 4) == v82[0].Numerator
      && *((_DWORD *)v36 + 5) == v82[0].Denominator
      && *((_DWORD *)v36 + 6) == v80
      && *((_DWORD *)v36 + 7) == v82[1].Denominator
      && *((_DWORD *)v36 + 8) == *(_DWORD *)v83
      && (v37 = *((unsigned int *)v36 + 9), (((unsigned __int8)v37 ^ v83[4]) & 1) == 0)
      && (((unsigned __int8)v37 ^ v83[4]) & 2) == 0
      && (((unsigned __int8)v34 ^ *((_BYTE *)v36 + 40)) & 0xF) == 0 )
    {
      if ( *(_QWORD *)v36 == (_QWORD)v81 )
      {
        if ( (v38 = *((_DWORD *)v36 + 2), v38 == Format)
          || v38 == 21 && Format == D3DDDIFMT_X8R8G8B8
          || v38 == 22 && Format == D3DDDIFMT_A8R8G8B8 )
        {
          v39 = *((_DWORD *)v36 + 10);
          if ( (((unsigned __int8)v39 ^ (unsigned __int8)v34) & 0x10) == 0
            && (((unsigned __int8)v39 ^ (unsigned __int8)v34) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((DXGADAPTER *)v10, v11, Format)
            && (v101 || *(_QWORD *)((char *)v36 + 44) == *(_QWORD *)&v83[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
            v40 = DmmPowerOnTargetsFromSourceIfNecessary((void *const)v10, v11);
            v42 = v40;
            if ( v40 < 0 )
            {
              v64 = (_QWORD *)WdLogNewEntry5_WdError(v41);
              v64[3] = *(_QWORD *)(v10 + 2520);
              v64[4] = (unsigned int)v11;
              v64[5] = v42;
              WdLogEvent5_WdError(v64);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(PERESOURCE ***)(v10 + 2520),
                        (PERESOURCE **)this,
                        v11,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v84 = 0LL;
            LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
            DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v10 + 276), v11, 0LL);
LABEL_27:
            if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
              goto LABEL_31;
            *((_DWORD *)this + v11 + 272) |= 0x200u;
            goto LABEL_29;
          }
        }
      }
    }
  }
  v84 = 0LL;
  v56 = DxgkQueryDmmInterface((DXGADAPTER *)v10, v37, &v84);
  FunctionalVidPnWithEnabledVidPnSource = v56;
  if ( v56 < 0 )
  {
LABEL_37:
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v50[3] = FunctionalVidPnWithEnabledVidPnSource;
    v50[4] = this;
    v50[5] = *((unsigned int *)a2 + 4);
    v50[6] = a2;
    v50[7] = (unsigned int)v11;
    WdLogEvent5_WdError(v50);
    goto LABEL_29;
  }
  v57 = v84;
  v95 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v86[0] = 0;
  v92 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(v84, v10, (unsigned int)v11);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v86,
    v92,
    *(_QWORD *)(v57 + 64),
    v10);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58, v60, v61);
    v63 = (unsigned int)v11;
    v62[3] = -1071774925LL;
LABEL_70:
    v62[4] = v63;
    v62[5] = (unsigned int)v81;
    v62[6] = DWORD1(v81);
    v62[7] = SDWORD2(v81);
    v65 = v62;
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58, v60, v61);
    v62[3] = (unsigned int)v11;
    v63 = *(_QWORD *)(v10 + 2520);
    goto LABEL_70;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v11, a2, 0, 1u);
      memset(v99, 0, 0xF8uLL);
      v68 = v87;
      v79[0] = 0;
      v99[8] = 1 << v11;
      v69 = DmmSetTimingsOnAdapter(v10, v87, 0, 2u, v99, (__int64)v79, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v69;
      if ( v69 < 0 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v70);
        v76[3] = FunctionalVidPnWithEnabledVidPnSource;
        v76[4] = *(_QWORD *)(v10 + 2520);
        v76[5] = (unsigned int)v11;
        v76[6] = a2;
        v76[7] = this;
        WdLogEvent5_WdError(v76);
      }
      else
      {
        DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v10, (struct _DMM_SET_TIMING_RESULT *)v79, v96);
        if ( ((1 << v11) & v99[19]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v99[v11 + 20];
        Current = DXGPROCESS::GetCurrent();
        if ( !Current || !*((_BYTE *)Current + 322) )
        {
          Global = DXGGLOBAL::GetGlobal(v72);
          do
            v74 = _InterlockedIncrement((volatile signed __int32 *)Global + 260);
          while ( !v74 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v10 + 2520),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v74);
          LOBYTE(v75) = 1;
          DxgkNotifyDisplayChange(v75);
          v68 = v87;
        }
      }
      if ( v86[0] )
        v88(v89, v68);
      goto LABEL_27;
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v59);
    v67[4] = (unsigned int)v11;
    v67[5] = (unsigned int)v81;
    v67[6] = DWORD1(v81);
    v67[7] = SDWORD2(v81);
    v67[3] = FunctionalVidPnWithEnabledVidPnSource;
    WdLogEvent5_WdError(v67);
    if ( v86[0] )
      v88(v89, v87);
LABEL_29:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v98 = 0LL;
      v97 = 1;
      DxgkStatusChangeNotify(&v97);
    }
    goto LABEL_31;
  }
  v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58, v60, v61);
  v66[3] = (unsigned int)v81;
  v66[4] = DWORD1(v81);
  v66[5] = SDWORD2(v81);
  v66[6] = v82[0].Numerator / v82[0].Denominator;
  v66[7] = (unsigned int)v11;
  v65 = v66;
LABEL_72:
  WdLogEvent5_WdDmmEvent(v65);
  if ( v86[0] )
    v88(v89, v87);
LABEL_31:
  *(_QWORD *)&v81 = *(_QWORD *)&v85.Width;
  DWORD2(v81) = v85.Format;
  if ( v85.RefreshRate.Denominator )
    HIDWORD(v81) = DmmMapVSyncFromRationalToInteger(&v85.RefreshRate, v80, 0LL);
  else
    HIDWORD(v81) = 0;
  v82[0] = v85.RefreshRate;
  v82[1].Numerator = v80;
  v82[1].Denominator = v91;
  v44 = DmmCacheDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, &v81);
  v46 = v44;
  if ( v44 < 0 )
  {
    v78 = WdLogNewEntry5_WdError(v45);
    *(_QWORD *)(v78 + 24) = v46;
    WdLogEvent5_WdError(v78);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v93, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
