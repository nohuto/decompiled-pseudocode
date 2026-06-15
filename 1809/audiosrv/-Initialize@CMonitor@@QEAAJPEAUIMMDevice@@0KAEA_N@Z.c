/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180100AA0
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800FD320 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FF428 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 *     WPP_SF_dg @ 0x1800BA0C4 (WPP_SF_dg.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800FB750 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180100118 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1801005E8 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180101BD0 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180103438 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // rsi
  int v8; // r13d
  int v9; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v12; // r13
  int v13; // eax
  LPVOID v14; // rcx
  _QWORD *v15; // rax
  CAudioSessionManager *v16; // rcx
  LPVOID v17; // rcx
  _QWORD *v18; // rax
  struct _SECURITY_ATTRIBUTES *v19; // rdx
  struct _SECURITY_ATTRIBUTES *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  HANDLE Thread; // rax
  signed int v25; // eax
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-B8h]
  LPVOID v30; // [rsp+40h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-90h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  void *v34; // [rsp+60h] [rbp-78h] BYREF
  int v35; // [rsp+68h] [rbp-70h] BYREF
  __int64 v36; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v37; // [rsp+78h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-58h] BYREF
  char v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]
  ATL::CAtlException *v41; // [rsp+98h] [rbp-40h] BYREF
  ATL::CAtlException *v42; // [rsp+A8h] [rbp-30h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+20h]
  int v46; // [rsp+F8h] [rbp+20h]
  int v47; // [rsp+F8h] [rbp+20h]

  v40 = -2LL;
  v7 = this;
  v36 = 0LL;
  v8 = 0x40000;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v39 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids);
    }
    v9 = -2147467259;
    goto LABEL_114;
  }
  *a5 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 54) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 61) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v9);
    }
    goto LABEL_113;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v36);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 24LL))(v36, &v35);
  if ( v9 < 0 )
    goto LABEL_114;
  if ( !v35 )
    v8 = 393216;
  v45 = v8;
  v12 = (_QWORD *)((char *)v7 + 72);
  ppv = (LPVOID *)((char *)v7 + 72);
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(a2, &IID_IAudioClient, 1LL);
  if ( v9 < 0 )
    goto LABEL_114;
  ppv = (LPVOID *)((char *)v7 + 176);
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
  if ( v9 < 0 )
    goto LABEL_114;
  *a5 = 0;
  v13 = CMonitor::MuteInputLineControls(a2, a3);
  if ( v13 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v13);
  }
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)v7 + 64);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)v7 + 168);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 64LL))(*v12, (__int64)v7 + 96);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 64LL))(
         *((_QWORD *)v7 + 22),
         (__int64)v7 + 200);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL))(
         *v12,
         0LL,
         v45,
         *((_QWORD *)v7 + 54) / 2LL,
         0LL,
         *((_QWORD *)v7 + 12),
         0LL);
  if ( v9 == -2004287485 )
    *a5 = 1;
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
         (__int64)v7 + 80);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 88);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 32LL))(*v12, (__int64)v7 + 120);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 11) + 24LL))(
         *((_QWORD *)v7 + 11),
         (__int64)v7 + 128);
  if ( v9 < 0 )
    goto LABEL_114;
  v30 = 0LL;
  v9 = CoCreateInstance(
         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
         0LL,
         0x17u,
         &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
         &v30);
  if ( v9 < 0 )
    goto LABEL_46;
  v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, void **, _QWORD **))(*(_QWORD *)v30 + 56LL))(
         v30,
         *((_QWORD *)v7 + 8),
         0LL,
         &v34,
         &v37);
  if ( v9 < 0 )
    goto LABEL_46;
  *((double *)v7 + 17) = (double)(int)v34 / 10000.0;
  if ( v30 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 104);
  if ( v9 < 0 )
    goto LABEL_114;
  v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v37 = v15;
  if ( v15 )
  {
    *v15 = &CMonitor::CMonitorNotification::`vftable';
    v15[1] = v7;
    *((_DWORD *)v15 + 4) = 1;
    *((_DWORD *)v15 + 5) = 1;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 20,
    (CMonitor::CMonitorNotification *)v15);
  if ( !*((_QWORD *)v7 + 20) )
    goto LABEL_56;
  v30 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, LPVOID *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v30);
  if ( v9 < 0 )
    goto LABEL_46;
  pvar = 0LL;
  lpsz = 0LL;
  v33 = 0LL;
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(
         v30,
         &PKEY_MonitorPauseOnBattery,
         &pvar);
  if ( v9 < 0 )
    goto LABEL_46;
  if ( (_WORD)pvar == 11 )
    *((_BYTE *)v7 + 61) = (_WORD)lpsz == 0xFFFF;
  PropVariantClear(&pvar);
  pvar = 0LL;
  lpsz = 0LL;
  v33 = 0LL;
  v9 = (*(__int64 (__fastcall **)(LPVOID, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(
         v30,
         &PKEY_AudioEndpoint_GUID,
         &pvar);
  if ( v9 < 0 || (_WORD)pvar == 31 && (v9 = CLSIDFromString(lpsz, (LPCLSID)v7 + 9), v9 < 0) )
  {
LABEL_46:
    v14 = v30;
LABEL_47:
    if ( v14 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_113;
  }
  PropVariantClear(&pvar);
  if ( v30 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 22)
                                                                                            + 24LL))(
         *((_QWORD *)v7 + 22),
         0LL,
         3624140800LL,
         *((_QWORD *)v7 + 54) / 2LL,
         0LL,
         *((_QWORD *)v7 + 12),
         (__int64)v7 + 144);
  if ( v9 == -2004287485 )
    *a5 = 1;
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
         *((_QWORD *)v7 + 22),
         &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
         (__int64)v7 + 184);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
         *((_QWORD *)v7 + 22),
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 192);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 32LL))(
         *((_QWORD *)v7 + 22),
         (__int64)v7 + 240);
  if ( v9 < 0 )
    goto LABEL_114;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 24LL))(
         *((_QWORD *)v7 + 24),
         (__int64)v7 + 248);
  if ( v9 < 0 )
    goto LABEL_114;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 16);
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
        *((_DWORD *)v7 + 30));
      v16 = WPP_GLOBAL_Control;
    }
    if ( v16 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x800000) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 31);
      WPP_SF_dg(
        *((_QWORD *)v16 + 2),
        0x10u,
        (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
        *((_DWORD *)v7 + 60));
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
         *((_QWORD *)v7 + 22),
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 216);
  if ( v9 < 0 )
    goto LABEL_114;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>(
    &v34,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 27));
  v30 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v33 = 0LL;
  v9 = (*(__int64 (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v34 + 168LL))(v34, &v30);
  if ( v9 < 0
    || (LOWORD(pvar) = 11,
        LOWORD(lpsz) = -1,
        v9 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v30 + 48LL))(
               v30,
               &PKEY_AudioSession_IsCaptureMonitorSession,
               &pvar),
        v9 < 0) )
  {
    v17 = v30;
LABEL_84:
    if ( v17 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
    v14 = v34;
    goto LABEL_47;
  }
  pvar = (PROPVARIANT)31;
  v33 = 0LL;
  lpsz = (LPCOLESTR)*((_QWORD *)v7 + 8);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, PROPVARIANT *))(*(_QWORD *)v30 + 48LL))(
         v30,
         &PKEY_AudioSession_CaptureMonitorEndpointId,
         &pvar);
  v17 = v30;
  if ( v9 < 0 )
    goto LABEL_84;
  if ( v30 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v34 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
  v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v37 = v18;
  if ( v18 )
  {
    *v18 = &CMonitor::CMonitorNotification::`vftable';
    v18[1] = v7;
    *((_DWORD *)v18 + 4) = 0;
    *((_DWORD *)v18 + 5) = 1;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 28,
    (CMonitor::CMonitorNotification *)v18);
  if ( !*((_QWORD *)v7 + 28) )
  {
LABEL_56:
    v9 = -2147024882;
    goto LABEL_114;
  }
  v9 = CMonitor::SetSessionTitleAndIcon(v7, a2);
  if ( v9 >= 0 )
  {
    try
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 112), v19);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v27 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        o__resetstkoflw_0();
      v46 = *(_DWORD *)v27;
      v9 = *(_DWORD *)v27;
      v7 = this;
      if ( v46 < 0 )
        goto LABEL_114;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 9) + 104LL))(
           *((_QWORD *)v7 + 9),
           *((_QWORD *)v7 + 14));
    if ( v9 >= 0 )
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 232), v20);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 22) + 104LL))(
             *((_QWORD *)v7 + 22),
             *((_QWORD *)v7 + 29));
      if ( v9 >= 0 )
      {
        v21 = *((_QWORD *)v7 + 12);
        v22 = *(unsigned __int16 *)(v21 + 2) * (*(unsigned __int16 *)(v21 + 14) >> 3);
        *((_QWORD *)v7 + 55) = v22;
        v23 = *((_QWORD *)v7 + 54) * *(unsigned int *)(v21 + 4) / 10000LL;
        *((_QWORD *)v7 + 56) = v23 * v22;
        try
        {
          ATL::CEvent::Create((CMonitor *)((char *)v7 + 288), (struct _SECURITY_ATTRIBUTES *)v23);
        }
        catch ( ATL::CAtlException *v42 )
        {
          v28 = v42;
          if ( *(_DWORD *)v42 == -1073741571 )
            o__resetstkoflw_0();
          v47 = *(_DWORD *)v28;
          v9 = *(_DWORD *)v28;
          v7 = this;
          if ( v47 < 0 )
            goto LABEL_114;
        }
        Thread = CreateThread(
                   0LL,
                   0LL,
                   (LPTHREAD_START_ROUTINE)CMonitor::CaptureMonitorThreadWrapper,
                   v7,
                   0,
                   (LPDWORD)v7 + 70);
        *((_QWORD *)v7 + 34) = Thread;
        if ( Thread )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 13) + 80LL))(
                 *((_QWORD *)v7 + 13),
                 *((_QWORD *)v7 + 20));
          if ( v9 < 0 )
            goto LABEL_114;
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 27) + 80LL))(
                 *((_QWORD *)v7 + 27),
                 *((_QWORD *)v7 + 28));
          if ( v9 < 0 )
            goto LABEL_114;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x11u,
              (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v25 = GetLastError();
          v9 = v25;
          if ( v25 > 0 )
            v9 = (unsigned __int16)v25 | 0x80070000;
        }
LABEL_113:
        if ( v9 >= 0 )
          goto LABEL_120;
      }
    }
  }
LABEL_114:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = v9;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  if ( *a5 )
    *((_DWORD *)v7 + 14) = 7;
LABEL_120:
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  return (unsigned int)v9;
}
