/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058150
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18000CD50 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18003C3E0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18003C938 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1800669E0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180071760 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180162BD0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1801648A0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180164920 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180164D50 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180167B80 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18016A24C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180058BF0 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008AD14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801608F0 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  volatile signed __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  const struct APP_CHANGE_INFO *v10; // rax
  _DWORD *v11; // rdi
  bool v12; // si
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  LPUNKNOWN v15; // rsi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r14
  __int64 v17; // rcx
  LPUNKNOWN v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r8
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  int *v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // r9
  __int64 v31; // r10
  int *v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // rsi
  char *i; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 (__fastcall *v40)(CImmersiveApp *); // rax
  __int64 v41; // r8
  unsigned __int64 j; // rdx
  __int64 v43; // rbx
  __int64 v44; // r15
  char *v45; // r14
  _QWORD *v46; // rax
  const struct std::nothrow_t *v47; // rdx
  _QWORD *v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rcx
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  _QWORD *v54; // rdi
  _QWORD *v55; // rax
  _QWORD *v56; // rsi
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  volatile int *v59; // rdx
  int v60; // esi
  signed __int64 v61; // rax
  unsigned int v62; // ecx
  signed __int64 v63; // rtt
  volatile signed __int64 *v64; // r10
  signed __int64 v65; // rax
  unsigned int v66; // ecx
  signed __int64 v67; // rtt
  char v68; // r13
  _QWORD *v69; // r12
  _DWORD *v70; // rbx
  _DWORD *v71; // rax
  _DWORD *v72; // rdi
  __int64 v73; // rcx
  int v74; // [rsp+20h] [rbp-99h]
  _DWORD *v75; // [rsp+30h] [rbp-89h]
  __int64 v76; // [rsp+38h] [rbp-81h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-79h] BYREF
  __int64 v78; // [rsp+48h] [rbp-71h] BYREF
  volatile signed __int64 *v79; // [rsp+50h] [rbp-69h] BYREF
  __int64 v80; // [rsp+58h] [rbp-61h] BYREF
  __int64 v81; // [rsp+60h] [rbp-59h] BYREF
  int v82; // [rsp+68h] [rbp-51h] BYREF
  void *v83; // [rsp+70h] [rbp-49h]
  __int64 v84; // [rsp+78h] [rbp-41h]
  signed __int64 v85; // [rsp+80h] [rbp-39h]
  signed __int64 v86; // [rsp+88h] [rbp-31h]
  _QWORD *v87; // [rsp+90h] [rbp-29h]
  _QWORD *v88; // [rsp+98h] [rbp-21h]
  signed __int64 v89; // [rsp+A0h] [rbp-19h]
  signed __int64 v90; // [rsp+A8h] [rbp-11h]
  _QWORD *v91; // [rsp+B0h] [rbp-9h] BYREF
  char v92; // [rsp+B8h] [rbp-1h]
  __int64 v93; // [rsp+C0h] [rbp+7h]
  LPUNKNOWN *p_ppunkMarshal; // [rsp+C8h] [rbp+Fh]
  __int64 *v95; // [rsp+D0h] [rbp+17h]
  __int64 v96; // [rsp+D8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  bool v98; // [rsp+120h] [rbp+67h]
  unsigned int v99; // [rsp+120h] [rbp+67h]
  unsigned int Ptr; // [rsp+120h] [rbp+67h]

  v93 = -2LL;
  v6 = 0LL;
  v78 = 0LL;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL))(
    (char *)this + 48,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v78);
  v7 = v78;
  v84 = v78;
  v8 = v78;
  if ( v78 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
    v7 = v78;
  }
  if ( v7 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( !v8 )
    goto LABEL_142;
  if ( *((_BYTE *)this + 808) )
  {
    if ( (*((_BYTE *)this + 584) & 1) == 0 )
    {
LABEL_14:
      CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
      *((_BYTE *)this + 808) = 0;
      goto LABEL_15;
    }
    if ( *((_QWORD *)this + 59) )
    {
      v9 = 0LL;
      if ( a3 )
      {
        v10 = a2;
        while ( *(_DWORD *)v10 != 8 )
        {
          ++v9;
          v10 = (const struct APP_CHANGE_INFO *)((char *)v10 + 16);
          if ( v9 >= a3 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v11 = (_DWORD *)((char *)this + 128);
    v12 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    v98 = v12;
    v79 = 0LL;
    v13 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      v13[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v13[5] = 0LL;
      ppunkMarshal = 0LL;
      p_ppunkMarshal = &ppunkMarshal;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v15 = ppunkMarshal;
        QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
        v17 = v14[5];
        if ( v17 )
        {
          v14[5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
          v15,
          &GUID_00000003_0000_0000_c000_000000000046,
          v14 + 5);
        v12 = v98;
      }
      v18 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v18->lpVtbl->Release)(v18);
      }
      v14[7] = 1LL;
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
      v14[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v14[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v14 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
      v14[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v14[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_BYTE *)v14 + 64) = v12;
      v6 = v14;
      v79 = v14;
      v11 = (_DWORD *)((char *)this + 128);
    }
    if ( v6 )
    {
      v75 = v11;
      if ( v11 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v52 = *((_QWORD *)v6 + 7);
      v85 = v52;
      while ( v52 >= 0 )
      {
        if ( (_DWORD)v52 != 0x7FFFFFFF )
        {
          v53 = v52;
          v52 = _InterlockedCompareExchange64(v6 + 7, v52 + 1, v52);
          if ( v53 != v52 )
            continue;
        }
        goto LABEL_84;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v52 + 16));
LABEL_84:
      v99 = v11[10];
      v54 = 0LL;
      v87 = 0LL;
      v55 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v56 = v55;
      if ( v55 )
      {
        *((_DWORD *)v55 + 3) = 1;
        *v55 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v56[2] = (char *)this + 128;
        v56[3] = v75;
        if ( v75 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v75 + 8LL))(v75);
        v56[4] = v6;
        v57 = *((_QWORD *)v6 + 7);
        v86 = v57;
        while ( v57 >= 0 )
        {
          if ( (_DWORD)v57 != 0x7FFFFFFF )
          {
            v58 = v57;
            v57 = _InterlockedCompareExchange64(v6 + 7, v57 + 1, v57);
            if ( v58 != v57 )
              continue;
          }
          goto LABEL_95;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v57 + 16));
LABEL_95:
        *v56 = off_18044BBD8;
        v54 = v56;
        v87 = v56;
      }
      v88 = v54;
      v60 = SHTaskPoolQueueTask(3LL, 2LL, v99);
      if ( v54 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
      }
      v61 = *((_QWORD *)v6 + 7);
      v89 = v61;
      while ( v61 >= 0 )
      {
        if ( (_DWORD)v61 == 0x7FFFFFFF )
          goto LABEL_107;
        v62 = v61 - 1;
        v63 = v61;
        v61 = _InterlockedCompareExchange64(v6 + 7, v61 - 1, v61);
        if ( v63 == v61 )
          goto LABEL_104;
      }
      v62 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v61 + 16), v59);
LABEL_104:
      if ( !v62 )
      {
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v6 + 56))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_107:
      if ( v75 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v60 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v60,
          (int)v54);
      if ( v75 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v75 + 16LL))(v75);
      v64 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        v65 = *((_QWORD *)v64 + 7);
        v90 = v65;
        while ( v65 >= 0 )
        {
          if ( (_DWORD)v65 == 0x7FFFFFFF )
            goto LABEL_28;
          v66 = v65 - 1;
          v67 = v65;
          v65 = _InterlockedCompareExchange64(v64 + 7, v65 - 1, v65);
          if ( v67 == v65 )
            goto LABEL_120;
        }
        v66 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v65 + 16), v59);
LABEL_120:
        if ( !v66 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v64 + 56))(v64, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL,
        v74);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v79);
    }
LABEL_28:
    v95 = &v76;
    v76 = 0LL;
    v81 = 0LL;
    v80 = 0LL;
    v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v84)(
            v84,
            &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
            &v80);
    if ( v19 >= 0 )
      v19 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v80 + 24LL))(
              v80,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v81);
    v20 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v19 >= 0 )
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v81 + 24LL))(v81, &v76);
    v21 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( v19 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v76 + 24LL))(v76, &v82) >= 0 && v82 )
    {
      v22 = a3;
      v23 = 0LL;
      if ( a3 >= 4 )
      {
        v24 = 0LL;
        v25 = 0LL;
        v26 = (int *)((char *)a2 + 32);
        do
        {
          *(double *)v27.m128i_i64 = dbl_1805B8170[4 * *(v26 - 8)];
          *(double *)&v27.m128i_i64[1] = dbl_1805B8170[4 * *(v26 - 4)];
          v24 = _mm_add_epi64(v27, v24);
          *(double *)v27.m128i_i64 = dbl_1805B8170[4 * *v26];
          *(double *)&v27.m128i_i64[1] = dbl_1805B8170[4 * v26[4]];
          v28 = _mm_add_epi64(v27, v25);
          v25 = v28;
          v23 += 4LL;
          v26 += 16;
        }
        while ( v23 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
        v29 = _mm_add_epi64(v24, v28);
        v22 = a3 + _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0];
      }
      v30 = 0LL;
      v31 = 0LL;
      if ( v23 < a3 )
      {
        if ( a3 - v23 >= 2 )
        {
          v32 = (int *)((char *)a2 + 16 * v23);
          v33 = ((a3 - v23 - 2) >> 1) + 1;
          v23 += 2 * v33;
          do
          {
            v30 += *((_QWORD *)&unk_1805B8160 + 4 * *v32 + 2);
            v31 += *((_QWORD *)&unk_1805B8160 + 4 * v32[4] + 2);
            v32 += 8;
            --v33;
          }
          while ( v33 );
        }
        if ( v23 < a3 )
          v22 += *((_QWORD *)&unk_1805B8160 + 4 * *((int *)a2 + 4 * v23) + 2);
        v22 += v30 + v31;
      }
      v34 = 16 * v22;
      if ( !is_mul_ok(v22, 0x10uLL) )
        v34 = -1LL;
      v35 = operator new[](v34, (const struct std::nothrow_t *)&std::nothrow);
      v36 = v35;
      v83 = v35;
      if ( v35 )
      {
        for ( i = v35; a3; --a3 )
        {
          *(_OWORD *)i = *(_OWORD *)a2;
          if ( *(_DWORD *)i != 6 && *(_DWORD *)i != 12 && !*((_QWORD *)i + 1) )
          {
            v38 = 0LL;
            if ( *((_QWORD *)this + 59) )
              v38 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 58) + 32LL))(**((_QWORD **)this + 58));
            *((_QWORD *)i + 1) = v38;
          }
          v39 = 32LL * *(int *)a2;
          if ( *(_QWORD *)((char *)&unk_1805B8160 + v39 + 8) )
          {
            v40 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_1805B8160 + v39 + 24);
            if ( !v40 || v40(this) )
            {
              v41 = *((_QWORD *)i + 1);
              for ( j = 0LL; j < *(_QWORD *)((char *)&unk_1805B8160 + v39 + 16); ++j )
              {
                i += 16;
                *(_DWORD *)i = *(_DWORD *)(*(_QWORD *)((char *)&unk_1805B8160 + v39 + 8) + 4 * j);
                *((_QWORD *)i + 1) = v41;
              }
            }
          }
          i += 16;
          a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
        }
        v43 = (i - v36) >> 4;
        v44 = v76;
        v45 = (char *)this + 88;
        if ( this != (CImmersiveApp *)-88LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v45 + 8LL))((char *)this + 88);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
        v46 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v48 = v46;
        if ( v46 )
        {
          v46[3] = 0LL;
          v46[4] = 0LL;
          v46[1] = v83;
          v46[2] = v43;
          v45 = 0LL;
          v49 = v46[3];
          if ( v49 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          v48[3] = (char *)this + 88;
          v50 = v44;
          v44 = 0LL;
          v51 = v48[4];
          if ( v51 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          v48[4] = v50;
          v83 = 0LL;
          *v48 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v48 + 10) = 0;
        }
        else
        {
          v48 = 0LL;
        }
        if ( v48 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v48 + 8LL))(v48);
          v68 = *((_BYTE *)this + 759);
          v69 = v48;
          v91 = v48;
          (*(void (__fastcall **)(_QWORD *))(*v48 + 8LL))(v48);
          v92 = v68;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v70 = 0LL;
          v96 = 0LL;
          v71 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v72 = v71;
          if ( v71 )
          {
            v71[3] = 1;
            *(_QWORD *)v71 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v72 + 2) = 0LL;
            if ( v72 + 4 != (_DWORD *)&v91 )
            {
              *((_QWORD *)v72 + 2) = v48;
              v69 = 0LL;
            }
            *((_BYTE *)v72 + 24) = v68;
            *(_QWORD *)v72 = off_18044BAB0;
            v70 = v72;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr);
          if ( v70 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v70 + 16LL))(v70);
          if ( v69 )
            (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
          (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
        }
        operator delete(v83, v47);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        if ( v45 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    v73 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
    }
  }
LABEL_142:
  if ( v84 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
}
