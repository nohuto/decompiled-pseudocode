/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18002B490
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18002B12C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002C1C0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002CE1C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180043060 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180043B64 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4E0 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800514EC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18008AE50 (--$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180101A50 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180118C34 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18011D1AC (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D554 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x18011F890 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180121C2C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180122060 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     WPP_SF_SdL @ 0x180122A00 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x180122BD0 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rdi
  char v13; // r13
  int v14; // eax
  bool v15; // cl
  bool v16; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // r13
  char v20; // r15
  bool v21; // r12
  __int16 v22; // ax
  __int16 v23; // r14
  unsigned int v24; // r15d
  char v25; // al
  char v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rsi
  int v29; // eax
  const RECT *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  int v33; // edx
  int v34; // r8d
  struct IUnknown *v35; // rcx
  unsigned int v36; // edi
  volatile signed __int32 *v37; // rdx
  void *v39; // rax
  struct IUnknown *v40; // r8
  PSRWLOCK v41; // r13
  PVOID Ptr; // rcx
  struct IUnknown **v43; // r12
  RTL_SRWLOCK *v44; // r8
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // r13d
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  bool v51; // dl
  __int64 *v52; // rax
  struct IApplicationPresentationLayer *v53; // rdx
  struct IImmersiveApplicationInternal *v54; // rdx
  struct IUnknown **v55; // rdi
  bool v56; // si
  bool v57; // zf
  PSRWLOCK v58; // rsi
  char *v59; // rdx
  _DWORD *v60; // rdx
  struct IImmersiveApplicationInternal *v61; // rdx
  int v62; // eax
  __int64 v63; // r8
  __int64 v64; // rsi
  char v65; // al
  int v66; // r8d
  char *v67; // rax
  char v68; // bl
  int v69; // eax
  __int64 v70; // rdx
  void *v71; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v73; // rax
  int v74; // [rsp+20h] [rbp-E0h]
  char v75; // [rsp+30h] [rbp-D0h]
  char v76; // [rsp+31h] [rbp-CFh]
  unsigned int v77; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v81; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown **v82; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v85; // [rsp+70h] [rbp-90h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  char v88[8]; // [rsp+88h] [rbp-78h] BYREF
  HWND hWnd; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h]
  PSRWLOCK v91; // [rsp+A0h] [rbp-60h]
  PVOID v92; // [rsp+A8h] [rbp-58h]
  _DWORD v93[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-48h]
  __int128 v95; // [rsp+C0h] [rbp-40h]
  char v96; // [rsp+D0h] [rbp-30h]
  char v97; // [rsp+D1h] [rbp-2Fh]
  __int64 v98; // [rsp+D8h] [rbp-28h]
  __int128 v99; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v100; // [rsp+F0h] [rbp-10h]
  __int128 v101; // [rsp+100h] [rbp+0h]
  _QWORD v102[2]; // [rsp+110h] [rbp+10h] BYREF
  void **v103; // [rsp+120h] [rbp+20h] BYREF
  char v104[24]; // [rsp+128h] [rbp+28h] BYREF
  int v105; // [rsp+140h] [rbp+40h]
  _DWORD *v106; // [rsp+150h] [rbp+50h]
  int v107; // [rsp+158h] [rbp+58h]
  char v108[48]; // [rsp+160h] [rbp+60h] BYREF
  LPVOID v109; // [rsp+190h] [rbp+90h]
  char v110; // [rsp+198h] [rbp+98h]
  LPVOID lpMem; // [rsp+238h] [rbp+138h]
  __int64 v112; // [rsp+240h] [rbp+140h]
  void *v113; // [rsp+250h] [rbp+150h] BYREF
  _OWORD v114[2]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v115; // [rsp+280h] [rbp+180h]
  int v116; // [rsp+288h] [rbp+188h]
  char v117[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v118; // [rsp+2C8h] [rbp+1C8h]
  int v119; // [rsp+2E4h] [rbp+1E4h]
  int v120; // [rsp+2E8h] [rbp+1E8h]
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  v98 = -2LL;
  v79 = a2;
  v12 = a1;
  v90 = a1;
  CImmersiveAppTelemetry::SetViewPosition::Start<unsigned short * &>((CImmersiveAppTelemetry::SetViewPosition *)&v103);
  v13 = 0;
  *(_QWORD *)fPending = 0LL;
  memset_0(&v99, 0, 0x30uLL);
  if ( a3 )
  {
    v99 = *a3;
    v100 = a3[1];
    v101 = a3[2];
    *(_QWORD *)fPending = &v99;
  }
  if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v12 + 344LL))(v12, v114) >= 0 )
  {
    if ( a3 )
    {
      DWORD2(v99) = DWORD2(v114[0]);
      DWORD1(v101) = HIDWORD(v115);
    }
    else
    {
      v99 = v114[0];
      v100 = v114[1];
      *(_QWORD *)&v101 = v115;
      *(_QWORD *)fPending = &v99;
    }
    DWORD2(v101) = v116;
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v36 = -2147024809;
    goto LABEL_107;
  }
  v14 = *(_DWORD *)(v12 + 440);
  v15 = (v14 & 8) != 0;
  v16 = (v14 & 1) != 0;
  if ( (*(_BYTE *)(v12 + 592) || !v16 && !v15) && (a5 & 3) != 0 )
    v13 = 1;
  v86 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v52 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(v88);
    a4 = *v52;
    *v52 = 0LL;
    v87 = 0LL;
    v86 = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v87);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v88);
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v13 )
  {
    if ( (a5 & 1) != 0 )
    {
      v17 = *(_QWORD *)(v12 + 304);
      *(_DWORD *)(v12 + 488) &= ~a9;
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        v84 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 136LL))(v17, &v84) >= 0
          && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v84 + 24LL))(v84, &hWnd) >= 0 )
        {
          SetPropW(hWnd, *(LPCWSTR *)(v12 + 496), (HANDLE)*(unsigned int *)(v12 + 488));
        }
        v18 = v84;
        if ( v84 )
        {
          v84 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    else if ( (a5 & 2) != 0 )
    {
      v53 = *(struct IApplicationPresentationLayer **)(v12 + 304);
      *(_DWORD *)(v12 + 488) |= a9;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(v12 + 488), v53);
    }
    if ( !v13 )
    {
      v77 = 0;
      if ( !*(_BYTE *)(v12 + 352) || *(_BYTE *)(v12 + 353) )
      {
        v19 = 0;
        if ( (a5 & 2) != 0 )
        {
          v76 = 1;
          if ( a9 )
            goto LABEL_32;
        }
      }
      else
      {
        v19 = 1;
      }
      v76 = 0;
LABEL_32:
      if ( a6 != 1 )
        goto LABEL_33;
      v54 = (struct IImmersiveApplicationInternal *)v12;
      if ( v12 == 112 )
        v54 = 0LL;
      if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
             v54) )
      {
LABEL_33:
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      v75 = v20;
      v21 = *(_DWORD *)(v12 + 708) != *(_DWORD *)(v12 + 692)
         || *(_DWORD *)(v12 + 712) != *(_DWORD *)(v12 + 696)
         || *(_DWORD *)(v12 + 716) != *(_DWORD *)(v12 + 700)
         || *(_DWORD *)(v12 + 720) != *(_DWORD *)(v12 + 704)
         || *(_DWORD *)(v12 + 740) != *(_DWORD *)(v12 + 724)
         || *(_DWORD *)(v12 + 744) != *(_DWORD *)(v12 + 728)
         || *(_DWORD *)(v12 + 748) != *(_DWORD *)(v12 + 732)
         || *(_DWORD *)(v12 + 752) != *(_DWORD *)(v12 + 736);
      *(_QWORD *)(v12 + 708) = *(_QWORD *)(v12 + 692);
      *(_QWORD *)(v12 + 716) = *(_QWORD *)(v12 + 700);
      *(_QWORD *)(v12 + 740) = *(_QWORD *)(v12 + 724);
      *(_QWORD *)(v12 + 748) = *(_QWORD *)(v12 + 732);
      if ( v21 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v12 + 304) + 272LL))(
          *(_QWORD *)(v12 + 304),
          *(_QWORD *)(v12 + 692),
          *(_QWORD *)(v12 + 700));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v12 + 304) + 280LL))(
          *(_QWORD *)(v12 + 304),
          *(_QWORD *)(v12 + 724),
          *(_QWORD *)(v12 + 732));
      }
      if ( v19 )
        v22 = -2;
      else
        v22 = -3;
      v23 = a5 & v22;
      if ( ((unsigned __int8)a5 & (unsigned __int8)v22 & 1) != 0 && *(_DWORD *)(v12 + 488) )
        v23 &= ~1u;
      if ( v19 )
      {
        if ( (v23 & 2) != 0 )
        {
LABEL_52:
          if ( v20 )
            v23 &= ~4u;
          v24 = 0;
          if ( (v23 & 0x40) != 0 )
          {
            v24 = 8;
          }
          else if ( v21 )
          {
            v24 = 17;
          }
          else if ( v79 || *(_QWORD *)fPending )
          {
            if ( v75
              || (v23 & 1) == 0
              && (!v19 || (v23 & 2) == 0 || !*(_QWORD *)fPending || (*(_BYTE *)(*(_QWORD *)fPending + 44LL) & 2) == 0
                ? (v25 = 0)
                : (v25 = 1),
                  (v23 & 8) != 0 || v25 || !v19) )
            {
              v24 = 2;
            }
            else
            {
              v24 = 1;
            }
          }
          else if ( v75 )
          {
            v24 = 4;
          }
          v85 = 0LL;
          (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v12 + 464LL))(v12, &v85);
          if ( (v24 & 1) == 0 )
            goto LABEL_67;
          v39 = (void *)(v12 - 112);
          if ( v12 != 112 )
            v39 = (void *)v12;
          Context = v39;
          v40 = v85;
          SRWLock = (PSRWLOCK)v85;
          v41 = CApplicationManagerUtility::g_pIAMGlobals;
          v91 = CApplicationManagerUtility::g_pIAMGlobals;
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
          v92 = Ptr;
          if ( v39 )
          {
            v43 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
            v82 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
            if ( v43 != v82 )
            {
              v102[0] = &v81;
              v55 = v82;
              do
              {
                v81 = *v43;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v81);
                v56 = (unsigned int)SHIsSameObject((struct IUnknown *)Context, v81) != 0;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
                if ( v56 )
                  break;
                ++v43;
              }
              while ( v43 != v55 );
              v12 = v90;
              v41 = v91;
              Ptr = v92;
              v40 = (struct IUnknown *)SRWLock;
            }
            if ( v43 != v41[8].Ptr )
              goto LABEL_67;
          }
          if ( Ptr )
          {
            v57 = *((_DWORD *)v41[1].Ptr + (_QWORD)Ptr - 1) == 1;
          }
          else
          {
            if ( !LODWORD(v41[5].Ptr) || !(unsigned int)SHIsSameObject(v40, (struct IUnknown *)v41[6].Ptr) )
            {
              if ( HIDWORD(v41[5].Ptr) != 1 )
              {
LABEL_186:
                v26 = 1;
                v58 = CApplicationManagerUtility::g_pIAMGlobals;
                v59 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
                if ( v59 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
                  || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                            &CApplicationManagerUtility::g_pIAMGlobals[1],
                            v59 + 1) >= 0 )
                {
                  v60 = (char *)v58[1].Ptr + 4 * (__int64)v58[2].Ptr++;
                  if ( v60 )
                    *v60 = 1;
                }
                goto LABEL_68;
              }
LABEL_67:
              v26 = 0;
LABEL_68:
              if ( *(_QWORD *)(v12 + 328) && (v23 & 1) != 0 )
              {
                v47 = 0;
                if ( a6 == 1 )
                {
                  v61 = (struct IImmersiveApplicationInternal *)v12;
                  if ( v12 == 112 )
                    v61 = 0LL;
                  if ( !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                          (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                          v61) )
                    v47 = 2;
                }
                v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 304) + 56LL))(*(_QWORD *)(v12 + 304));
                v49 = v12 + 152;
                if ( v48 )
                  CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v49, v47);
                else
                  CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v49, 0LL, v47);
              }
              if ( a8 )
              {
                v44 = *(RTL_SRWLOCK **)(v12 + 304);
                SRWLock = v44;
                v93[0] = *(_DWORD *)a8;
                v93[1] = *(_DWORD *)(a8 + 4);
                v45 = *(_QWORD *)(a8 + 8);
                v94 = v45;
                if ( v45 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
                  v44 = SRWLock;
                }
                v95 = *(_OWORD *)(a8 + 16);
                v96 = *(_BYTE *)(a8 + 32);
                v97 = *(_BYTE *)(a8 + 33);
                (*((void (__fastcall **)(RTL_SRWLOCK *, _DWORD *))v44->Ptr + 18))(v44, v93);
                v27 = *(_QWORD *)fPending;
                if ( *(_QWORD *)fPending )
                {
                  v46 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
                          (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                          (struct APPLICATION_VIEW_DATA_UPDATE *)v117);
                  if ( v46 < 0 )
                  {
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x157B,
                      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                      (const char *)(unsigned int)v46,
                      v74);
                  }
                  else
                  {
                    *(_DWORD *)(*(_QWORD *)fPending + 8LL) = v118;
                    *(_DWORD *)(v27 + 36) = v119;
                    *(_DWORD *)(v27 + 40) = v120;
                  }
                }
              }
              else
              {
                v27 = *(_QWORD *)fPending;
              }
              if ( a4 )
                (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 304) + 152LL))(*(_QWORD *)(v12 + 304), a4);
              if ( (v23 & 3) != 0 )
              {
                if ( (v23 & 1) != 0 )
                {
                  v50 = v27;
                  v28 = v79;
                  CImmersiveApp::_SetPos_ShowApplication(v12 - 112, v79, v50, v24, v26);
                }
                else
                {
                  v62 = 0;
                  if ( (v23 & 4) != 0 )
                  {
                    LOBYTE(v62) = v26 != 0;
                    ++v62;
                  }
                  v63 = v27;
                  v28 = v79;
                  CImmersiveApp::_SetPos_HideApplication(v12 - 112, v79, v63, v24, v62);
                }
                LOBYTE(v24) = 0;
              }
              else
              {
                v28 = v79;
              }
              if ( v76 && *(_BYTE *)(v12 + 352) )
              {
                *(_BYTE *)(v12 + 352) = 0;
                CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152));
              }
              if ( (v23 & 0x800) != 0 )
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 600LL))(v12, 0LL);
              if ( (v24 & 3) != 0 )
              {
                if ( v28 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 304) + 112LL))(
                    *(_QWORD *)(v12 + 304),
                    v28);
                }
                else if ( (v24 & 0x10) != 0 )
                {
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 304) + 296LL))(*(_QWORD *)(v12 + 304));
                }
                v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v12 + 304) + 128LL))(
                        *(_QWORD *)(v12 + 304),
                        v102);
                v30 = (const RECT *)v102;
                if ( v29 < 0 )
                  v30 = 0LL;
                if ( v30 )
                  CopyRect((LPRECT)(v12 + 168), v30);
                v31 = *(_QWORD *)fPending;
                if ( *(_QWORD *)fPending )
                {
                  *(_OWORD *)(v12 + 228) = **(_OWORD **)fPending;
                  *(_OWORD *)(v12 + 244) = *(_OWORD *)(v31 + 16);
                  *(_OWORD *)(v12 + 260) = *(_OWORD *)(v31 + 32);
                }
                v32 = 2;
                if ( *(_QWORD *)(v12 + 328) && (v24 & 1) != 0 )
                  v32 = CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v12 + 152) == 1;
                if ( v26 && v32 == 1 )
                {
                  v82 = 0LL;
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v82);
                  (*(void (__fastcall **)(__int64, struct IUnknown ***))(*(_QWORD *)v12 + 464LL))(v12, &v82);
                  CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                    (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                    9LL);
                  CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                    (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                    10LL);
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v82);
                }
              }
              if ( (v24 & 8) != 0 )
                (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 304) + 112LL))(
                  *(_QWORD *)(v12 + 304),
                  v79);
              if ( a10 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 304) + 232LL))(*(_QWORD *)(v12 + 304));
              if ( (*(_BYTE *)(v12 + 440) & 1) != 0
                && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 304) + 56LL))(*(_QWORD *)(v12 + 304)) )
              {
                if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_SdL(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    v33,
                    v34,
                    *(_QWORD *)(*(_QWORD *)(v12 + 312) + 560LL),
                    *(_DWORD *)(*(_QWORD *)(v12 + 312) + 568LL),
                    *(_DWORD *)(v12 + 364));
                  if ( *(_QWORD *)(v12 + 328) )
                  {
                    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 320) + 240LL))(**(_QWORD **)(v12 + 320))
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      v64 = *(_QWORD *)(v12 + 312);
                      v65 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 320) + 32LL))(**(_QWORD **)(v12 + 320));
                      WPP_SF_Sdq(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        29,
                        v66,
                        *(_QWORD *)(v64 + 560),
                        *(_DWORD *)(v64 + 568),
                        v65);
                    }
                  }
                }
                if ( !*(_DWORD *)(v12 + 364)
                  && *(_QWORD *)(v12 + 328)
                  && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 320) + 240LL))(**(_QWORD **)(v12 + 320))
                  && *(_DWORD *)(*(_QWORD *)(v12 + 400) + 152LL) != 1 )
                {
                  CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                    (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                    v51);
                }
              }
              if ( v26 )
              {
                v79 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v79);
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL))(v12, &v79);
                v67 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
                if ( v67 )
                  CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v67 - 1;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v79);
              }
              v35 = v85;
              if ( v85 )
              {
                v85 = 0LL;
                ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
              }
              v36 = v77;
              goto LABEL_105;
            }
            v57 = LODWORD(v41[5].Ptr) == 1;
          }
          if ( !v57 )
            goto LABEL_186;
          goto LABEL_67;
        }
      }
      else if ( (v23 & 1) == 0 )
      {
        goto LABEL_52;
      }
      v23 &= 0xFFF3u;
      goto LABEL_52;
    }
  }
  v36 = -2147019873;
LABEL_105:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_107:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v103, v36);
  v103 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  v37 = (volatile signed __int32 *)v113;
  if ( !v113 )
    goto LABEL_108;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v103,
    &SRWLock);
  v37 = (volatile signed __int32 *)v113;
  if ( v113 && *(_DWORD *)v113 == 1 )
  {
    v68 = 1;
  }
  else
  {
    v68 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v113);
    v37 = (volatile signed __int32 *)v113;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v37 = (volatile signed __int32 *)v113;
  }
  if ( v68 )
  {
LABEL_108:
    if ( *v106 == 1 )
    {
      v69 = v106[21];
      v77 = v69;
      v70 = 2147942974LL;
      if ( v69 < 0 )
        v70 = (unsigned int)v69;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v106,
        v70,
        &v77);
      ((void (__fastcall *)(void ***))v103[1])(&v103);
      v37 = (volatile signed __int32 *)v113;
    }
  }
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37, 0xFFFFFFFF) == 1 )
    {
      v71 = v113;
      if ( v113 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v113 + 8);
        operator delete(v71, (const struct std::nothrow_t *)0x100);
      }
    }
    v113 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v112 = 0LL;
  }
  if ( v110 )
  {
    v73 = GetProcessHeap();
    HeapFree(v73, 0, v109);
    v110 = 0;
  }
  v109 = 0LL;
  if ( v107 == 1 )
  {
    v107 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v108);
  }
  v107 = 3;
  if ( v105 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v104);
  return v36;
}
