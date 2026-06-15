/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005DA28 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x180108158 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801088F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180109BAC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010CBA8 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18010E4D4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18010FF20 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180110000 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x1801101B4 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??C?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180050714 (--C-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEBAPEAUSampleDataBlock@CMonitor@@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800BD230 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ??0?$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1?_GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18010DBD0 (--0-$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1-_GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8@@3U__.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18010DF18 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18010E068 (-AddHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?AllocateBytes@?$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18010E0D8 (-AllocateBytes@-$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18010E318 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180111B9C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  CMonitor *v1; // r15
  HRESULT v2; // edi
  CAudioSessionManager *v3; // rcx
  int v4; // r9d
  unsigned int v6; // esi
  __int64 v7; // rdx
  double v8; // xmm3_8
  __int64 v9; // rax
  double v10; // xmm4_8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  double v14; // xmm3_8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  void **v18; // rax
  void **v19; // r13
  void **v20; // rbx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // ecx
  _QWORD *v24; // rdi
  void **v25; // rax
  void **v26; // r13
  void **v27; // rbx
  __int64 v28; // rsi
  unsigned int v29; // eax
  ATL::CAtlException *v30; // rbx
  LPVOID ppv; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-A8h] BYREF
  int v34; // [rsp+48h] [rbp-A0h]
  unsigned int v35; // [rsp+4Ch] [rbp-9Ch]
  void **v36; // [rsp+50h] [rbp-98h] BYREF
  __int64 v37; // [rsp+58h] [rbp-90h]
  unsigned __int64 v38; // [rsp+60h] [rbp-88h]
  unsigned __int64 v39; // [rsp+68h] [rbp-80h]
  CMonitor *v40; // [rsp+70h] [rbp-78h] BYREF
  char v41; // [rsp+78h] [rbp-70h]
  void **v42; // [rsp+80h] [rbp-68h] BYREF
  CMonitor *v43; // [rsp+88h] [rbp-60h] BYREF
  char v44; // [rsp+90h] [rbp-58h]
  __int64 v45; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v46; // [rsp+A0h] [rbp-48h] BYREF
  CMonitor *v47; // [rsp+F0h] [rbp+8h] BYREF
  void **v48; // [rsp+F8h] [rbp+10h] BYREF
  int v49; // [rsp+100h] [rbp+18h] BYREF
  void **v50; // [rsp+108h] [rbp+20h] BYREF

  v47 = this;
  v45 = -2LL;
  v1 = this;
  v40 = (CMonitor *)((char *)this + 16);
  v41 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v40);
  v2 = 0;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids, v1);
    v3 = WPP_GLOBAL_Control;
  }
  v4 = *((_DWORD *)v1 + 14);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x800000) != 0
      && *((_BYTE *)v3 + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)v3 + 2), 0x3Cu, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids, v4);
    }
    goto LABEL_93;
  }
  if ( !*((_BYTE *)v1 + 61)
    || !CMonitor::GetPowerStatus(v1, (unsigned __int8 *)&v48)
    || ((unsigned __int8)v48 & 0xFD) != 0 )
  {
    ppv = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    v49 = 0;
    v2 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v2 >= 0 )
    {
      ATL::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8>::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8>(
        &v48,
        (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))ppv);
      v6 = 1;
      if ( v48 )
        (*((void (__fastcall **)(void **, __int64))*v48 + 11))(v48, 1LL);
      v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 40LL))(
             ppv,
             *((_QWORD *)v1 + 22),
             &v33);
      if ( v48 )
        (*((void (__fastcall **)(void **))*v48 + 2))(v48);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 24LL))(
               v33,
               &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
               1LL,
               0LL,
               &v32);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 120LL))(v32, &v49);
          if ( v2 >= 0 )
          {
            if ( v49 )
            {
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x39u,
                  (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
              }
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              if ( v33 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              if ( ppv )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
              goto LABEL_94;
            }
          }
        }
      }
    }
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    *((_DWORD *)v1 + 116) = GetTickCount();
    v7 = *((_QWORD *)v1 + 55) / 10000LL;
    v8 = (double)(int)v7 * ((double)*(int *)(*((_QWORD *)v1 + 26) + 4LL) / 1000.0);
    v9 = *((unsigned int *)v1 + 32);
    v10 = (double)(int)v7 * ((double)*(int *)(*((_QWORD *)v1 + 13) + 4LL) / 1000.0) / (double)(int)v9;
    v11 = 0LL;
    if ( v10 >= 9.223372036854776e18 )
    {
      v10 = v10 - 9.223372036854776e18;
      if ( v10 < 9.223372036854776e18 )
        v11 = 0x8000000000000000uLL;
    }
    v12 = v11 + (unsigned int)(int)v10;
    v38 = v12;
    v13 = *((_DWORD *)v1 + 62);
    v14 = v8 / (double)(int)v13;
    v15 = 0LL;
    if ( v14 >= 9.223372036854776e18 )
    {
      v14 = v14 - 9.223372036854776e18;
      if ( v14 < 9.223372036854776e18 )
        v15 = 0x8000000000000000uLL;
    }
    v16 = v15 + (unsigned int)(int)v14;
    v39 = v16;
    if ( (unsigned int)v9 <= v13 )
      v9 = v13;
    v37 = v9;
    v35 = v9;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
        v16 + v12 + 1);
    }
    v43 = (CMonitor *)((char *)v1 + 400);
    v44 = 0;
    ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v43);
    LODWORD(v48) = 0;
    v17 = 0LL;
    while ( 1 )
    {
      LODWORD(v50) = v17;
      if ( v17 >= v16 + v38 + 1 )
        break;
      v18 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v18;
      if ( v18 )
        v18[4] = 0LL;
      else
        v19 = 0LL;
      v20 = v19;
      v36 = v19;
      if ( v19 )
      {
        v21 = ATL::CAutoPtr<CMonitor::SampleDataBlock>::operator->((__int64)&v36);
        v22 = (int)v48;
        *(_DWORD *)v21 = (_DWORD)v48;
        LODWORD(v48) = v22 + 1;
        v34 = v22 + 1;
        v23 = v37;
        *(_DWORD *)(v21 + 8) = v37;
        *(_DWORD *)(v21 + 12) = v23;
        *(_DWORD *)(v21 + 4) = 0;
        *(_DWORD *)(v21 + 24) = 0;
        v24 = (_QWORD *)(v21 + 32);
        ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
          (_QWORD *)(v21 + 32),
          v23 * *((_QWORD *)v1 + 56));
        if ( *v24 )
        {
          try
          {
            v2 = 0;
            v20 = 0LL;
            v36 = 0LL;
            v42 = v19;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
              (__int64 *)v1 + 38,
              (__int64)&v42);
          }
          catch ( ATL::CAtlException *v46 )
          {
            v30 = v46;
            if ( *(_DWORD *)v46 == -1073741571 )
              _o__resetstkoflw();
            LODWORD(v48) = *(_DWORD *)v30;
            v1 = v47;
            v2 = (int)v48;
            LODWORD(v48) = v34;
            v20 = v36;
            v37 = v35;
          }
        }
        else
        {
          v2 = -2147024882;
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v19);
        }
      }
      else
      {
        v2 = -2147024882;
      }
      if ( v20 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v20);
      v17 = (unsigned int)((_DWORD)v50 + 1);
      v16 = v39;
    }
    if ( v2 >= 0 )
    {
      v25 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v25;
      if ( v25 )
        v25[4] = 0LL;
      else
        v26 = 0LL;
      v27 = v26;
      v50 = v26;
      if ( v26 )
      {
        v28 = ATL::CAutoPtr<CMonitor::SampleDataBlock>::operator->((__int64)&v50);
        *(_DWORD *)v28 = (_DWORD)v48;
        v29 = v37;
        *(_DWORD *)(v28 + 8) = v37;
        *(_DWORD *)(v28 + 12) = v29;
        *(_DWORD *)(v28 + 24) = 0;
        ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
          (_QWORD *)(v28 + 32),
          v29 * *((_QWORD *)v1 + 56));
        *(_DWORD *)(v28 + 4) = 2;
        *(_QWORD *)(v28 + 16) = 0LL;
        if ( *(_QWORD *)(v28 + 32) )
        {
          v2 = 0;
          v27 = 0LL;
          v50 = 0LL;
          v48 = v26;
          ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
            (__int64 *)v1 + 44,
            (__int64)&v48);
        }
        else
        {
          v2 = -2147024882;
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v26);
        }
      }
      else
      {
        v2 = -2147024882;
      }
      if ( v27 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v27);
    }
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v43);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, CMonitor **))(**((_QWORD **)v1 + 23) + 48LL))(*((_QWORD *)v1 + 23), &v47);
      if ( v2 < 0 )
        goto LABEL_90;
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void ***))(**((_QWORD **)v1 + 24) + 24LL))(
             *((_QWORD *)v1 + 24),
             (unsigned int)(*((_DWORD *)v1 + 62) - (_DWORD)v47),
             &v48);
      if ( v2 < 0 )
        goto LABEL_90;
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 24) + 32LL))(
             *((_QWORD *)v1 + 24),
             (unsigned int)(*((_DWORD *)v1 + 62) - (_DWORD)v47),
             2LL);
      if ( v2 < 0 )
        goto LABEL_90;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
      }
      *((_DWORD *)v1 + 14) = 3;
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 10) + 80LL))(*((_QWORD *)v1 + 10));
      if ( v2 < 0
        || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 23) + 80LL))(*((_QWORD *)v1 + 23)), v2 < 0) )
      {
LABEL_90:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Du,
            (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
            v2);
        }
        CMonitor::Stop(v1);
      }
    }
LABEL_93:
    v6 = v2;
LABEL_94:
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v40);
    return v6;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v40);
  return 1LL;
}
