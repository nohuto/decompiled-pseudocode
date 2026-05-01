/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0
 * Callers:
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002B1F4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x1800436D0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18004AD90 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1800600E0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x18006AA30 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-___ptr64_--Invoke.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18011B610 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18011CB90 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18011CC10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011D010 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18011F490 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121914 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180053430 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801193B4 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  const struct APP_CHANGE_INFO *v9; // rax
  char *v10; // r14
  _QWORD *v11; // rbx
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rcx
  LPUNKNOWN v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  int *v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // r9
  __int64 v27; // r10
  int *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _BYTE *v31; // rax
  _BYTE *v32; // rsi
  char *i; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int8 (__fastcall *v36)(CImmersiveApp *); // rax
  __int64 v37; // r8
  unsigned __int64 j; // rdx
  __int64 v39; // rbx
  __int64 v40; // r15
  char *v41; // r14
  _QWORD *v42; // rax
  const struct std::nothrow_t *v43; // rdx
  _QWORD *v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  _QWORD *v50; // rbx
  _QWORD *v51; // rax
  _QWORD *v52; // rdi
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  volatile int *v55; // rdx
  int v56; // edi
  signed __int64 v57; // rax
  unsigned int v58; // ecx
  signed __int64 v59; // rtt
  volatile int *v60; // rdx
  volatile signed __int64 *v61; // r10
  signed __int64 v62; // rax
  unsigned int v63; // ecx
  signed __int64 v64; // rtt
  char v65; // r13
  _QWORD *v66; // r12
  _DWORD *v67; // rbx
  _DWORD *v68; // rax
  _DWORD *v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // [rsp+30h] [rbp-69h] BYREF
  __int64 v72; // [rsp+38h] [rbp-61h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int64 *v74; // [rsp+48h] [rbp-51h] BYREF
  __int64 v75; // [rsp+50h] [rbp-49h] BYREF
  __int64 v76; // [rsp+58h] [rbp-41h] BYREF
  int v77; // [rsp+60h] [rbp-39h] BYREF
  void *v78; // [rsp+68h] [rbp-31h]
  __int64 v79; // [rsp+70h] [rbp-29h]
  signed __int64 v80; // [rsp+78h] [rbp-21h]
  signed __int64 v81; // [rsp+80h] [rbp-19h]
  _QWORD *v82; // [rsp+88h] [rbp-11h]
  signed __int64 v83; // [rsp+90h] [rbp-9h]
  signed __int64 v84; // [rsp+98h] [rbp-1h]
  _QWORD *v85; // [rsp+A0h] [rbp+7h] BYREF
  char v86; // [rsp+A8h] [rbp+Fh]
  __int64 v87; // [rsp+B0h] [rbp+17h]
  __int64 v88; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  bool v90; // [rsp+100h] [rbp+67h]
  unsigned int v91; // [rsp+100h] [rbp+67h]
  unsigned int Ptr; // [rsp+100h] [rbp+67h]

  v87 = -2LL;
  v72 = 0LL;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL))(
    (char *)this + 48,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v72);
  v6 = v72;
  v79 = v72;
  v7 = v72;
  if ( v72 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 8LL))(v72);
    v6 = v72;
  }
  if ( v6 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v7 )
    goto LABEL_136;
  if ( *((_BYTE *)this + 776) )
  {
    if ( (*((_BYTE *)this + 552) & 1) == 0 )
    {
LABEL_14:
      CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
      *((_BYTE *)this + 776) = 0;
      goto LABEL_15;
    }
    if ( *((_QWORD *)this + 55) )
    {
      v8 = 0LL;
      if ( a3 )
      {
        v9 = a2;
        while ( *(_DWORD *)v9 != 8 )
        {
          ++v8;
          v9 = (const struct APP_CHANGE_INFO *)((char *)v9 + 16);
          if ( v8 >= a3 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v90 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    v10 = (char *)this + 128;
    v74 = 0LL;
    v11 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = 0LL;
    if ( v11 )
    {
      v11[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v11[5] = 0LL;
      ppunkMarshal = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v13 = v11[5];
        if ( v13 )
        {
          v11[5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &GUID_00000003_0000_0000_c000_000000000046,
          v11 + 5);
      }
      v14 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v14->lpVtbl->Release)(v14);
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
      *((_BYTE *)v11 + 64) = v90;
      v12 = v11;
      v74 = v11;
    }
    if ( v12 )
    {
      if ( this != (CImmersiveApp *)-128LL )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))((char *)this + 128);
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))((char *)this + 128);
      }
      v48 = *((_QWORD *)v12 + 7);
      v80 = v48;
      while ( v48 >= 0 )
      {
        if ( (_DWORD)v48 != 0x7FFFFFFF )
        {
          v49 = v48;
          v48 = _InterlockedCompareExchange64(v12 + 7, v48 + 1, v48);
          if ( v49 != v48 )
            continue;
        }
        goto LABEL_84;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v48 + 16));
LABEL_84:
      v91 = *((_DWORD *)this + 42);
      v50 = 0LL;
      v82 = 0LL;
      v51 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v52 = v51;
      if ( v51 )
      {
        *((_DWORD *)v51 + 3) = 1;
        *v51 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v52[2] = v10;
        v52[3] = v10;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))((char *)this + 128);
        v52[4] = v12;
        v53 = *((_QWORD *)v12 + 7);
        v81 = v53;
        while ( v53 >= 0 )
        {
          if ( (_DWORD)v53 != 0x7FFFFFFF )
          {
            v54 = v53;
            v53 = _InterlockedCompareExchange64(v12 + 7, v53 + 1, v53);
            if ( v54 != v53 )
              continue;
          }
          goto LABEL_93;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v53 + 16));
LABEL_93:
        *v52 = off_1803C96E0;
        v50 = v52;
        v82 = v52;
      }
      v56 = SHTaskPoolQueueTask(3LL, 2LL, v91, 0LL, v50, 0LL);
      if ( v50 )
        (*(void (__fastcall **)(_QWORD *))(*v50 + 16LL))(v50);
      v57 = *((_QWORD *)v12 + 7);
      v83 = v57;
      while ( v57 >= 0 )
      {
        if ( (_DWORD)v57 == 0x7FFFFFFF )
          goto LABEL_105;
        v58 = v57 - 1;
        v59 = v57;
        v57 = _InterlockedCompareExchange64(v12 + 7, v57 - 1, v57);
        if ( v59 == v57 )
          goto LABEL_102;
      }
      v58 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v57 + 16), v55);
LABEL_102:
      if ( !v58 )
      {
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v12 + 56))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_105:
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this + 128);
      if ( v56 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v56);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this + 128);
      v61 = v74;
      if ( v74 )
      {
        v74 = 0LL;
        v62 = *((_QWORD *)v61 + 7);
        v84 = v62;
        while ( v62 >= 0 )
        {
          if ( (_DWORD)v62 == 0x7FFFFFFF )
            goto LABEL_28;
          v63 = v62 - 1;
          v64 = v62;
          v62 = _InterlockedCompareExchange64(v61 + 7, v62 - 1, v62);
          if ( v64 == v62 )
            goto LABEL_114;
        }
        v63 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v62 + 16), v60);
LABEL_114:
        if ( !v63 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v61 + 56))(v61, 1LL);
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
        (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v74);
    }
LABEL_28:
    v71 = 0LL;
    v76 = 0LL;
    v75 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v79)(
            v79,
            &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
            &v75);
    if ( v15 >= 0 )
      v15 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v75 + 24LL))(
              v75,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v76);
    v16 = v75;
    if ( v75 )
    {
      v75 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v15 >= 0 )
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v76 + 24LL))(v76, &v71);
    v17 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v15 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v71 + 24LL))(v71, &v77) >= 0 && v77 )
    {
      v18 = a3;
      v19 = 0LL;
      if ( a3 >= 4 )
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = (int *)((char *)a2 + 32);
        do
        {
          *(double *)v23.m128i_i64 = dbl_180505F70[4 * *(v22 - 8)];
          *(double *)&v23.m128i_i64[1] = dbl_180505F70[4 * *(v22 - 4)];
          v20 = _mm_add_epi64(v23, v20);
          *(double *)v23.m128i_i64 = dbl_180505F70[4 * *v22];
          *(double *)&v23.m128i_i64[1] = dbl_180505F70[4 * v22[4]];
          v24 = _mm_add_epi64(v23, v21);
          v21 = v24;
          v19 += 4LL;
          v22 += 16;
        }
        while ( v19 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
        v25 = _mm_add_epi64(v20, v24);
        v18 = a3 + _mm_add_epi64(v25, _mm_srli_si128(v25, 8)).m128i_u64[0];
      }
      v26 = 0LL;
      v27 = 0LL;
      if ( v19 < a3 )
      {
        if ( a3 - v19 >= 2 )
        {
          v28 = (int *)((char *)a2 + 16 * v19);
          v29 = ((a3 - v19 - 2) >> 1) + 1;
          v19 += 2 * v29;
          do
          {
            v26 += *((_QWORD *)&unk_180505F60 + 4 * *v28 + 2);
            v27 += *((_QWORD *)&unk_180505F60 + 4 * v28[4] + 2);
            v28 += 8;
            --v29;
          }
          while ( v29 );
        }
        if ( v19 < a3 )
          v18 += *((_QWORD *)&unk_180505F60 + 4 * *((int *)a2 + 4 * v19) + 2);
        v18 += v26 + v27;
      }
      v30 = 16 * v18;
      if ( !is_mul_ok(v18, 0x10uLL) )
        v30 = -1LL;
      v31 = operator new[](v30, (const struct std::nothrow_t *)&std::nothrow);
      v32 = v31;
      v78 = v31;
      if ( v31 )
      {
        for ( i = v31; a3; --a3 )
        {
          *(_OWORD *)i = *(_OWORD *)a2;
          if ( *(_DWORD *)i != 6 && *(_DWORD *)i != 12 && !*((_QWORD *)i + 1) )
          {
            v34 = 0LL;
            if ( *((_QWORD *)this + 55) )
              v34 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 54) + 32LL))(**((_QWORD **)this + 54));
            *((_QWORD *)i + 1) = v34;
          }
          v35 = 32LL * *(int *)a2;
          if ( *(_QWORD *)((char *)&unk_180505F60 + v35 + 8) )
          {
            v36 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_180505F60 + v35 + 24);
            if ( !v36 || v36(this) )
            {
              v37 = *((_QWORD *)i + 1);
              for ( j = 0LL; j < *(_QWORD *)((char *)&unk_180505F60 + v35 + 16); ++j )
              {
                i += 16;
                *(_DWORD *)i = *(_DWORD *)(*(_QWORD *)((char *)&unk_180505F60 + v35 + 8) + 4 * j);
                *((_QWORD *)i + 1) = v37;
              }
            }
          }
          i += 16;
          a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
        }
        v39 = (i - v32) >> 4;
        v40 = v71;
        v41 = (char *)this + 88;
        if ( this != (CImmersiveApp *)-88LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v41 + 8LL))((char *)this + 88);
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
        v42 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v44 = v42;
        if ( v42 )
        {
          v42[3] = 0LL;
          v42[4] = 0LL;
          v42[1] = v78;
          v42[2] = v39;
          v41 = 0LL;
          v45 = v42[3];
          if ( v45 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          v44[3] = (char *)this + 88;
          v46 = v40;
          v40 = 0LL;
          v47 = v44[4];
          if ( v47 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
          v44[4] = v46;
          v78 = 0LL;
          *v44 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v44 + 10) = 0;
        }
        else
        {
          v44 = 0LL;
        }
        if ( v44 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v44 + 8LL))(v44);
          v65 = *((_BYTE *)this + 727);
          v66 = v44;
          v85 = v44;
          (*(void (__fastcall **)(_QWORD *))(*v44 + 8LL))(v44);
          v86 = v65;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v67 = 0LL;
          v88 = 0LL;
          v68 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v69 = v68;
          if ( v68 )
          {
            v68[3] = 1;
            *(_QWORD *)v68 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v69 + 2) = 0LL;
            if ( v69 + 4 != (_DWORD *)&v85 )
            {
              *((_QWORD *)v69 + 2) = v44;
              v66 = 0LL;
            }
            *((_BYTE *)v69 + 24) = v65;
            *(_QWORD *)v69 = off_1803C9450;
            v67 = v69;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v67, 0LL);
          if ( v67 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v67 + 16LL))(v67);
          if ( v66 )
            (*(void (__fastcall **)(_QWORD *))(*v66 + 16LL))(v66);
          (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
        }
        operator delete(v78, v43);
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        if ( v41 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    v70 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
  }
LABEL_136:
  if ( v79 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
}
