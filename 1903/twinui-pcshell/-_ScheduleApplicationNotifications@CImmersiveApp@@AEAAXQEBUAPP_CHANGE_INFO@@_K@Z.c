/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180021240
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180012D70 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180032780 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180032CD8 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180064770 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x18006F250 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180143830 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1801454E0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180145560 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180145990 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180148910 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18014AFDC (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180079CEC (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800881A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801412E0 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *a2,
        unsigned __int64 a3)
{
  const struct APP_CHANGE_INFO *v4; // r13
  __int64 v6; // rcx
  __int64 v7; // rsi
  char *v8; // r15
  bool v9; // di
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  LPUNKNOWN v12; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r13
  __int64 v14; // rcx
  LPUNKNOWN v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  unsigned int v18; // esi
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  char *v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // edi
  signed __int64 v26; // rax
  signed __int32 v27; // ecx
  signed __int64 v28; // rtt
  char *v29; // rbx
  volatile signed __int64 *v30; // rcx
  signed __int64 v31; // rax
  signed __int32 v32; // edx
  signed __int64 v33; // rtt
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  int *v41; // rdx
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  const struct APP_CHANGE_INFO *v45; // r15
  int *v46; // rcx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // r13
  char *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbx
  char *v55; // r12
  __int64 v56; // r15
  _QWORD *v57; // rax
  const struct std::nothrow_t *v58; // rdx
  _QWORD *v59; // r14
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rcx
  _DWORD *v63; // rbx
  _DWORD *v64; // rax
  _DWORD *v65; // rdi
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  const struct APP_CHANGE_INFO *v68; // rax
  unsigned __int8 (__fastcall *v69)(CImmersiveApp *); // rax
  __int64 v70; // r9
  unsigned __int64 i; // rdx
  int v72; // [rsp+28h] [rbp-A9h]
  int v73; // [rsp+28h] [rbp-A9h]
  __int64 v74; // [rsp+38h] [rbp-99h] BYREF
  __int64 v75; // [rsp+40h] [rbp-91h]
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-89h] BYREF
  __int64 v77; // [rsp+50h] [rbp-81h] BYREF
  volatile signed __int64 *v78; // [rsp+58h] [rbp-79h] BYREF
  __int64 v79; // [rsp+60h] [rbp-71h] BYREF
  __int64 v80; // [rsp+68h] [rbp-69h] BYREF
  int v81; // [rsp+70h] [rbp-61h] BYREF
  char *v82; // [rsp+78h] [rbp-59h]
  __int64 v83; // [rsp+80h] [rbp-51h]
  _QWORD *v84; // [rsp+88h] [rbp-49h]
  signed __int64 v85; // [rsp+90h] [rbp-41h]
  signed __int64 v86; // [rsp+98h] [rbp-39h]
  _QWORD *v87; // [rsp+A0h] [rbp-31h]
  _QWORD *v88; // [rsp+A8h] [rbp-29h]
  signed __int64 v89; // [rsp+B0h] [rbp-21h]
  signed __int64 v90; // [rsp+B8h] [rbp-19h]
  _QWORD *v91; // [rsp+C0h] [rbp-11h] BYREF
  char v92; // [rsp+C8h] [rbp-9h]
  __int64 v93; // [rsp+D0h] [rbp-1h]
  LPUNKNOWN *p_ppunkMarshal; // [rsp+D8h] [rbp+7h]
  __int64 *v95; // [rsp+E0h] [rbp+Fh]
  __int64 v96; // [rsp+E8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  char v99; // [rsp+138h] [rbp+67h]
  bool v101; // [rsp+150h] [rbp+7Fh]
  _BYTE *v102; // [rsp+150h] [rbp+7Fh]
  unsigned int Ptr; // [rsp+150h] [rbp+7Fh]

  v93 = -2LL;
  v4 = a2;
  v77 = 0LL;
  LODWORD(v75) = 2;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL))(
    (char *)this + 48,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v77);
  LODWORD(v75) = 1;
  v6 = v77;
  v7 = v77;
  v83 = v77;
  if ( v77 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
    v6 = v77;
  }
  if ( v6 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v7 )
    goto LABEL_110;
  if ( *((_BYTE *)this + 808) )
  {
    if ( (*((_BYTE *)this + 584) & 1) != 0 )
    {
      if ( !*((_QWORD *)this + 59) )
        goto LABEL_7;
      v67 = 0LL;
      if ( !a3 )
        goto LABEL_7;
      v68 = v4;
      while ( *(_DWORD *)v68 != 8 )
      {
        ++v67;
        v68 = (const struct APP_CHANGE_INFO *)((char *)v68 + 16);
        if ( v67 >= a3 )
          goto LABEL_7;
      }
    }
    CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
    *((_BYTE *)this + 808) = 0;
  }
LABEL_7:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v8 = (char *)this + 128;
    v9 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    v101 = v9;
    v78 = 0LL;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( !v10 )
      goto LABEL_134;
    v10[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v10[5] = 0LL;
    ppunkMarshal = 0LL;
    p_ppunkMarshal = &ppunkMarshal;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v14 = v11[5];
      if ( v14 )
      {
        v11[5] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v12,
        &GUID_00000003_0000_0000_c000_000000000046,
        v11 + 5);
      v9 = v101;
      v4 = a2;
    }
    v15 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v15->lpVtbl->Release)(v15);
    }
    v11[7] = 1LL;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v11[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v11[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_BYTE *)v11 + 64) = v9;
    v78 = v11;
    if ( v11 )
    {
      v82 = (char *)this + 128;
      if ( this != (CImmersiveApp *)-128LL )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))((char *)this + 128);
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))((char *)this + 128);
      }
      v16 = v11[7];
      v85 = v16;
      while ( v16 >= 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64(v11 + 7, v16 + 1, v16);
        if ( v17 == v16 )
          goto LABEL_23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_23:
      v18 = *((_DWORD *)this + 42);
      v19 = 0LL;
      v87 = 0LL;
      v20 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v21 = v20;
      if ( v20 )
      {
        *((_DWORD *)v20 + 3) = 1;
        *v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v21[2] = v8;
        v22 = v82;
        v21[3] = v82;
        if ( v22 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 8LL))(v22);
        v21[4] = v11;
        v23 = v11[7];
        v86 = v23;
        while ( v23 >= 0 )
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange64(v11 + 7, v23 + 1, v23);
          if ( v24 == v23 )
            goto LABEL_31;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v23 + 16));
LABEL_31:
        *v21 = off_1804265C0;
        v19 = v21;
        v87 = v21;
      }
      v88 = v19;
      v25 = SHTaskPoolQueueTask(3LL, 2LL, v18, 0LL, v19, 0LL);
      if ( v19 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      }
      v89 = v11[7];
      v26 = v89;
      while ( v26 >= 0 )
      {
        v27 = v26 - 1;
        v28 = v26;
        v26 = _InterlockedCompareExchange64(v11 + 7, v26 - 1, v26);
        if ( v28 == v26 )
          goto LABEL_37;
      }
      v27 = _InterlockedDecrement((volatile signed __int32 *)(2 * v26 + 16));
LABEL_37:
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 56LL))(v11, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v29 = v82;
      if ( v82 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v82 + 16LL))(v82);
      if ( v25 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v25,
          v73);
      if ( v29 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        v31 = *((_QWORD *)v30 + 7);
        v90 = v31;
        while ( v31 >= 0 )
        {
          v32 = v31 - 1;
          v33 = v31;
          v31 = _InterlockedCompareExchange64(v30 + 7, v31 - 1, v31);
          if ( v33 == v31 )
            goto LABEL_48;
        }
        v32 = _InterlockedDecrement((volatile signed __int32 *)(2 * v31 + 16));
LABEL_48:
        if ( !v32 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v30 + 56))(v30, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v7 = v83;
    }
    else
    {
LABEL_134:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL,
        v72);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v78);
    }
    v95 = &v74;
    v74 = 0LL;
    v80 = 0LL;
    v79 = 0LL;
    v34 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
            v7,
            &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
            &v79);
    if ( v34 >= 0 )
      v34 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v79 + 24LL))(
              v79,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v80);
    v35 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    if ( v34 >= 0 )
      v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v80 + 24LL))(v80, &v74);
    v36 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    if ( v34 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v74 + 24LL))(v74, &v81) >= 0 && v81 )
    {
      v37 = a3;
      v38 = 0LL;
      if ( a3 )
      {
        if ( a3 >= 4 )
        {
          v39 = 0LL;
          v40 = 0LL;
          v41 = (int *)((char *)v4 + 32);
          do
          {
            *(double *)v42.m128i_i64 = dbl_18058FFD0[4 * *(v41 - 8)];
            *(double *)&v42.m128i_i64[1] = dbl_18058FFD0[4 * *(v41 - 4)];
            v39 = _mm_add_epi64(v42, v39);
            *(double *)v42.m128i_i64 = dbl_18058FFD0[4 * *v41];
            *(double *)&v42.m128i_i64[1] = dbl_18058FFD0[4 * v41[4]];
            v43 = _mm_add_epi64(v42, v40);
            v40 = v43;
            v38 += 4LL;
            v41 += 16;
          }
          while ( v38 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
          v44 = _mm_add_epi64(v39, v43);
          v37 = a3 + _mm_add_epi64(v44, _mm_srli_si128(v44, 8)).m128i_u64[0];
        }
        v45 = a2;
        if ( v38 < a3 )
        {
          v46 = (int *)((char *)a2 + 16 * v38);
          v47 = a3 - v38;
          do
          {
            v37 += *((_QWORD *)&unk_18058FFC0 + 4 * *v46 + 2);
            v46 += 4;
            --v47;
          }
          while ( v47 );
        }
      }
      else
      {
        v45 = a2;
      }
      v48 = 16 * v37;
      if ( !is_mul_ok(v37, 0x10uLL) )
        v48 = -1LL;
      v49 = operator new[](v48, (const struct std::nothrow_t *)&std::nothrow);
      v50 = v49;
      v102 = v49;
      if ( v49 )
      {
        v51 = v49;
        if ( a3 )
        {
          do
          {
            *(_OWORD *)v51 = *(_OWORD *)v45;
            if ( *(_DWORD *)v51 != 6 && *(_DWORD *)v51 != 12 && !*((_QWORD *)v51 + 1) )
            {
              v52 = 0LL;
              if ( *((_QWORD *)this + 59) )
                v52 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 58) + 32LL))(**((_QWORD **)this + 58));
              *((_QWORD *)v51 + 1) = v52;
            }
            v53 = 32LL * *(int *)v45;
            if ( *(_QWORD *)((char *)&unk_18058FFC0 + v53 + 8) )
            {
              v69 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_18058FFC0 + v53 + 24);
              if ( !v69 || v69(this) )
              {
                v70 = *((_QWORD *)v51 + 1);
                for ( i = 0LL; i < *(_QWORD *)((char *)&unk_18058FFC0 + v53 + 16); ++i )
                {
                  v51 += 16;
                  *(_DWORD *)v51 = *(_DWORD *)(*(_QWORD *)((char *)&unk_18058FFC0 + v53 + 8) + 4 * i);
                  *((_QWORD *)v51 + 1) = v70;
                }
              }
            }
            v51 += 16;
            v45 = (const struct APP_CHANGE_INFO *)((char *)v45 + 16);
            --a3;
          }
          while ( a3 );
          v50 = v102;
        }
        v54 = (v51 - v50) >> 4;
        v55 = (char *)this + 88;
        v56 = v74;
        if ( this != (CImmersiveApp *)-88LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 8LL))((char *)this + 88);
        if ( v56 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
        v57 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v59 = v57;
        if ( v57 )
        {
          v58 = 0LL;
          v57[3] = 0LL;
          v57[4] = 0LL;
          v57[1] = v50;
          v57[2] = v54;
          v55 = 0LL;
          v60 = v57[3];
          if ( v60 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            v58 = 0LL;
          }
          v59[3] = (char *)this + 88;
          v61 = v56;
          v56 = 0LL;
          v62 = v59[4];
          if ( v62 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            v58 = 0LL;
          }
          v59[4] = v61;
          v50 = 0LL;
          *v59 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v59 + 10) = 0;
        }
        else
        {
          v59 = 0LL;
        }
        if ( v59 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v59 + 8LL))(v59);
          v99 = *((_BYTE *)this + 759);
          v84 = v59;
          v91 = v59;
          (*(void (__fastcall **)(_QWORD *))(*v59 + 8LL))(v59);
          v92 = v99;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v63 = 0LL;
          v96 = 0LL;
          v64 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v65 = v64;
          if ( v64 )
          {
            v64[3] = 1;
            *(_QWORD *)v64 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v65 + 2) = 0LL;
            if ( v65 + 4 != (_DWORD *)&v91 )
            {
              *((_QWORD *)v65 + 2) = v59;
              v84 = 0LL;
            }
            *((_BYTE *)v65 + 24) = v99;
            *(_QWORD *)v65 = off_180426600;
            v63 = v65;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v63, 0LL);
          if ( v63 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v63 + 16LL))(v63);
          if ( v84 )
            (*(void (__fastcall **)(_QWORD *))(*v84 + 16LL))(v84);
          (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
        }
        operator delete(v50, v58);
        if ( v56 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        if ( v55 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v66 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
  }
LABEL_110:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
