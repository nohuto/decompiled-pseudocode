/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180085B40 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801384F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800134F4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180025EC0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18002AB90 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18002CC10 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055C68 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180056690 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1800597A0 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180060610 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006E8A0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18007F080 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18007F634 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18007F6FC (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180080590 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800836B8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x18008F004 (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180136B3C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180137504 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x18013C234 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18013C430 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18013C76C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x18013CBD8 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013D258 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CApplicationManager *v6; // r15
  char *v7; // rdi
  int v8; // esi
  int v9; // eax
  int ApartmentId; // esi
  HWND v11; // rbx
  bool v12; // r13
  __int64 *v13; // rcx
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  unsigned __int64 v20; // r15
  unsigned __int64 i; // r12
  volatile signed __int32 *v22; // rdx
  struct IImmersiveApplication *v23; // rcx
  __int64 v25; // rcx
  unsigned __int8 (__fastcall *v26)(__int64, HWND); // rax
  HWND v27; // rbx
  struct IImmersiveMonitor *v28; // rdx
  struct IImmersiveMonitor *v29; // rcx
  __int64 v30; // rbx
  int v31; // r13d
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  int v35; // eax
  int (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v37; // rcx
  unsigned int v38; // edx
  HWND ForegroundWindow; // rax
  struct CDelayIAMOperations::COperation *v40; // r13
  char v41; // bl
  int v42; // eax
  __int64 v43; // rdx
  void *v44; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v46; // rax
  int cchValue; // [rsp+20h] [rbp-E0h]
  struct IImmersiveMonitor *v48; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  bool v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  HWND v54; // [rsp+58h] [rbp-A8h]
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  char v56; // [rsp+64h] [rbp-9Ch]
  char v57; // [rsp+65h] [rbp-9Bh]
  unsigned int v58; // [rsp+68h] [rbp-98h]
  char v59; // [rsp+6Ch] [rbp-94h]
  HWND hWnd[2]; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveMonitor *v62; // [rsp+88h] [rbp-78h] BYREF
  struct IImmersiveApplication *v63; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v64; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp-60h] BYREF
  WINBOOL fPending; // [rsp+A4h] [rbp-5Ch] BYREF
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp-40h]
  _DWORD *v71; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  HWND v75; // [rsp+E8h] [rbp-18h] BYREF
  int v76; // [rsp+F0h] [rbp-10h]
  _QWORD v77[7]; // [rsp+F8h] [rbp-8h] BYREF
  int v78; // [rsp+130h] [rbp+30h]
  void **v79; // [rsp+140h] [rbp+40h] BYREF
  char v80[24]; // [rsp+148h] [rbp+48h] BYREF
  int v81; // [rsp+160h] [rbp+60h]
  _DWORD *v82; // [rsp+170h] [rbp+70h]
  int v83; // [rsp+178h] [rbp+78h]
  char v84[48]; // [rsp+180h] [rbp+80h] BYREF
  LPVOID v85; // [rsp+1B0h] [rbp+B0h]
  char v86; // [rsp+1B8h] [rbp+B8h]
  LPVOID lpMem; // [rsp+258h] [rbp+158h]
  __int64 v88; // [rsp+260h] [rbp+160h]
  void *v89; // [rsp+270h] [rbp+170h] BYREF
  WCHAR Filename[264]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  v77[2] = -2LL;
  v6 = (CApplicationManager *)((char *)this - 160);
  if ( this == (CApplicationManager *)160 )
    v7 = 0LL;
  else
    v7 = (char *)this + 232;
  v77[6] = v7;
  v8 = *((_DWORD *)v7 + 11);
  if ( v8 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_104;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v8 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v9 != 1 )
          goto LABEL_6;
        goto LABEL_98;
      }
LABEL_104:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_98:
  if ( *((_DWORD *)v7 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v65);
    if ( ApartmentId >= 0 && v65 != *((_DWORD *)v7 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v7) )
    ApartmentId = 0;
LABEL_8:
  v78 = ApartmentId;
  v53 = a2;
  v54 = a3;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  *(_OWORD *)hWnd = 0LL;
  if ( a2 <= 0x22 && ((unsigned int)a2 < 0x15 || (unsigned int)a2 >= 0x1A) )
  {
    if ( (_DWORD)a2 != 20 )
    {
      switch ( (int)a2 )
      {
        case 17:
        case 18:
        case 19:
        case 26:
        case 29:
        case 32:
        case 34:
          break;
        default:
          goto LABEL_53;
      }
    }
    v56 = 0;
  }
  else
  {
LABEL_53:
    v56 = 1;
  }
  v63 = 0LL;
  IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>((IamTraceLogging::OnShellHookMessage *)&v79);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v53) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v53 <= 0x22 )
    {
      switch ( (_DWORD)v53 )
      {
        case 0x14:
          CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v53);
          break;
        case 0x11:
          if ( v55 == 1 )
          {
            v48 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
            CApplicationManager::_MonitorFromWindow(v6, v54, &v48);
            (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64, struct IImmersiveMonitor *))(**((_QWORD **)v6 + 67)
                                                                                              + 24LL))(
              *((_QWORD *)v6 + 67),
              v54,
              v58,
              1LL,
              v48);
            ForegroundWindow = GetForegroundWindow();
            if ( ForegroundWindow == v54 )
            {
              v77[0] = v6;
              v77[1] = ForegroundWindow;
              CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(*((_QWORD *)v6 + 100), v77);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
          }
          else if ( v55 != 2 )
          {
            (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v6 + 74) + 24LL))(*((_QWORD *)v6 + 74), v54);
          }
          break;
        case 0x12:
          v25 = *((_QWORD *)this + 47);
          v26 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v25 + 72LL);
LABEL_59:
          v27 = v54;
          if ( !v26(v25, v54) )
            (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54), v27);
          break;
        default:
          switch ( (int)v53 )
          {
            case 19:
            case 23:
              v61 = 0LL;
              if ( v55 != 2 )
                goto LABEL_76;
              Context = v54;
              v61 = 0LL;
              v77[3] = 0LL;
              v28 = 0LL;
              v62 = 0LL;
              v29 = 0LL;
              v48 = 0LL;
              if ( !*((_QWORD *)v6 + 80) )
                goto LABEL_105;
              v77[4] = 0LL;
              break;
            case 21:
              if ( v55 - 2 > 1 )
                goto LABEL_19;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v53,
                a3);
              goto LABEL_31;
            case 22:
              v25 = *((_QWORD *)this + 47);
              v26 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v25 + 64LL);
              goto LABEL_59;
            case 24:
LABEL_19:
              Context = v54;
              v11 = v54;
              if ( hWnd[1] )
                v11 = hWnd[1];
              v12 = v53 == 21;
              v51 = v58;
              v52 = 0LL;
              if ( GetShellWindow() != v11
                && !(unsigned int)GetPropW(v11, L"MultimonitorActivationException")
                && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v11 )
              {
                (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)v6 + 70) + 88LL))(
                  *((_QWORD *)v6 + 70),
                  v11,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &v52);
              }
              v13 = (__int64 *)*((_QWORD *)v6 + 67);
              v14 = *v13;
              if ( v12 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, _QWORD, __int64))(v14 + 24))(
                        v13,
                        Context,
                        v51,
                        0LL,
                        v52);
                v17 = 3LL;
              }
              else
              {
                v15 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, __int64))(v14 + 32))(v13, Context, v52);
                v17 = 2LL;
              }
              v18 = v52;
              if ( v15 && v52 )
              {
                CApplicationManager::_TryPresentDesktopExperience(v6, Context, v17, v52);
                v18 = v52;
              }
              if ( v18 )
              {
                v52 = 0LL;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v16, v17);
              }
              goto LABEL_31;
            case 25:
            case 28:
              CApplicationManager::_HandleWindowBecameOwned(
                v6,
                a3,
                (const struct CApplicationManager::HSHELL_DATA *const)&v53);
              goto LABEL_31;
            case 26:
            case 29:
              CApplicationManager::_HandleWindowBecameUnowned(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v53);
              goto LABEL_31;
            case 27:
            case 30:
              CApplicationManager::_HandleWindowChangedOwner(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v53,
                a3);
              goto LABEL_31;
            case 32:
              v62 = 0LL;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
              v75 = v54;
              v76 = 2;
              if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v75, &v62, 0LL) >= 0 )
              {
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v63);
                (**(void (__fastcall ***)(struct IImmersiveMonitor *, GUID *, struct IImmersiveApplication **))v62)(
                  v62,
                  &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                  &v63);
              }
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
              goto LABEL_31;
            case 34:
              if ( v55 == 2 )
                CApplicationManager::_HandleApplicationRequestActivation(
                  v6,
                  (const struct CApplicationManager::HSHELL_DATA *const)&v53);
              goto LABEL_31;
            default:
              goto LABEL_31;
          }
          do
          {
            v30 = *(_QWORD *)(*((_QWORD *)v6 + 79) + 8LL * (_QWORD)v29);
            v77[5] = v30;
            if ( v30 )
              (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v30 + 8LL))(v30, v28);
            v31 = -1;
            v64 = 0LL;
            if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v30)(
                   v30,
                   &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                   &v64) >= 0 )
            {
              v32 = *v64;
              v68 = Context;
              v69 = 0LL;
              v70 = 0;
              v31 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, LPVOID *, __int64))(v32 + 296))(v64, &v68, 2LL) != 0)
                  - 1;
              v33 = v69;
              if ( v69 )
              {
                v69 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              }
            }
            v34 = v64;
            if ( v64 )
            {
              v64 = 0LL;
              (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            if ( !v31 )
            {
              v28 = v48;
              v35 = 0;
              goto LABEL_73;
            }
            v29 = (struct IImmersiveMonitor *)((char *)v48 + 1);
            v48 = v29;
          }
          while ( (unsigned __int64)v29 < *((_QWORD *)v6 + 80) );
          v28 = v62;
LABEL_105:
          v35 = -2147319765;
LABEL_73:
          if ( v35 >= 0 )
          {
            v36 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v6 + 79) + 8LL * (_QWORD)v28);
            if ( (**v36)(v36, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v61) >= 0 )
              CApplicationManager::_UpdatePerApplicationDataIfNeeded(v6, v61, v54, 0LL);
          }
LABEL_76:
          (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)v6 + 68) + 24LL))(
            *((_QWORD *)v6 + 68),
            v54,
            v55,
            v61);
          CApplicationManager::_HandleActivation2((__int64)v6, (__int64)&v53, 1);
          v37 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          }
          break;
      }
    }
LABEL_31:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v53 >= 0x20 )
  {
    if ( v53 != 32 )
    {
      if ( v53 == 65534 )
      {
        v38 = 1026;
      }
      else
      {
        if ( v53 != 0xFFFF )
          goto LABEL_33;
        v38 = 1025;
      }
      CApplicationManager::OnMessage((CApplicationManager *)((char *)this + 40), v38, 0LL, (__int64)a3, &v50);
      goto LABEL_33;
    }
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v53, v63);
  }
LABEL_33:
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v19 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v20 = *((_QWORD *)this + 102);
  if ( v20 )
  {
    v19 = (_DWORD *)*((_QWORD *)this + 101);
    v71 = v19;
    v73 = *((_QWORD *)this + 103);
    v72 = v20;
    v74 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v20; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v40 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), v19[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v40 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v40 + 8LL))(v40);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v40)(v40, 1LL);
    }
  }
  if ( v19 )
    CoTaskMemFree(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v79, 0LL);
  v79 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v22 = (volatile signed __int32 *)v89;
  if ( !v89 )
    goto LABEL_39;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v79,
    &SRWLock);
  v22 = (volatile signed __int32 *)v89;
  if ( v89 && *(_DWORD *)v89 == 1 )
  {
    v41 = 1;
  }
  else
  {
    v41 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v89);
    v22 = (volatile signed __int32 *)v89;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v22 = (volatile signed __int32 *)v89;
  }
  if ( v41 )
  {
LABEL_39:
    if ( *v82 == 1 )
    {
      v42 = v82[21];
      v51 = v42;
      v43 = 2147942974LL;
      if ( v42 < 0 )
        v43 = (unsigned int)v42;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v82,
        v43,
        &v51);
      ((void (__fastcall *)(void ***))v79[1])(&v79);
      v22 = (volatile signed __int32 *)v89;
    }
  }
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22, 0xFFFFFFFF) == 1 )
    {
      v44 = v89;
      if ( v89 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v89 + 8);
        operator delete(v44, (const struct std::nothrow_t *)0x100);
      }
    }
    v89 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v88 = 0LL;
  }
  if ( v86 )
  {
    v46 = GetProcessHeap();
    HeapFree(v46, 0, v85);
    v86 = 0;
  }
  v85 = 0LL;
  if ( v83 == 1 )
  {
    v83 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v84);
  }
  v83 = 3;
  if ( v81 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v80);
  v23 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  CoTaskMemFree(hWnd[0]);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
