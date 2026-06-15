/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x1801035AC
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FBCD8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FF428 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1801009D4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801021DC (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801022BC (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180102470 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100460 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180100550 (-AddHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?AllocateBytes@?$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1801005C0 (-AllocateBytes@-$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x180100818 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180103E10 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  CMonitor *v1; // r14
  HRESULT v2; // edi
  CAudioSessionManager *v3; // rcx
  int v4; // r9d
  double v6; // xmm1_8
  double v7; // xmm3_8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  double v10; // xmm1_8
  unsigned __int64 v11; // rax
  char *v12; // r15
  unsigned __int64 v13; // rax
  void **v14; // rax
  void **v15; // r15
  void **v16; // rbx
  int v17; // eax
  void **v18; // rax
  void **v19; // r15
  void **v20; // rbx
  HRESULT *v21; // rbx
  LPVOID ppv; // [rsp+30h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v24; // [rsp+40h] [rbp-88h]
  unsigned __int64 v25; // [rsp+48h] [rbp-80h]
  LPCRITICAL_SECTION v26; // [rsp+50h] [rbp-78h] BYREF
  char v27; // [rsp+58h] [rbp-70h]
  void **v28; // [rsp+60h] [rbp-68h] BYREF
  void **v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h]
  HRESULT *v31; // [rsp+78h] [rbp-50h] BYREF
  CMonitor *v32; // [rsp+D0h] [rbp+8h] BYREF
  void **v33; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+E0h] [rbp+18h]
  __int64 v35; // [rsp+E8h] [rbp+20h] BYREF

  v32 = this;
  v30 = -2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v1);
    v3 = WPP_GLOBAL_Control;
  }
  v4 = *((_DWORD *)v1 + 14);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x800000) != 0
      && *((_BYTE *)v3 + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)v3 + 2), 0x3Au, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v4);
    }
LABEL_91:
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v2;
  }
  if ( *((_BYTE *)v1 + 61)
    && CMonitor::GetPowerStatus(v1, (unsigned __int8 *)&v33)
    && ((unsigned __int8)v33 & 0xFD) == 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids);
    }
  }
  else
  {
    ppv = 0LL;
    v35 = 0LL;
    v34 = 0LL;
    LODWORD(v33) = 0;
    v2 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 40LL))(
                 ppv,
                 *((_QWORD *)v1 + 21),
                 &v35),
          v2 < 0)
      || (v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v35 + 24LL))(
                 v35,
                 &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
                 1LL),
          v2 < 0)
      || (v2 = (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)v34 + 120LL))(v34, &v33), v2 < 0)
      || !(_DWORD)v33 )
    {
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      *((_DWORD *)v1 + 114) = GetTickCount();
      v6 = (double)(int)(*((_QWORD *)v1 + 54) / 10000LL) * ((double)*(int *)(*((_QWORD *)v1 + 12) + 4LL) / 1000.0);
      v7 = v6 / (double)*((int *)v1 + 30);
      v8 = 0LL;
      if ( v7 >= 9.223372036854776e18 )
      {
        v7 = v7 - 9.223372036854776e18;
        if ( v7 < 9.223372036854776e18 )
          v8 = 0x8000000000000000uLL;
      }
      v9 = v8 + (unsigned int)(int)v7;
      v25 = v9;
      v10 = v6 / (double)*((int *)v1 + 60);
      v11 = 0LL;
      if ( v10 >= 9.223372036854776e18 )
      {
        v10 = v10 - 9.223372036854776e18;
        if ( v10 < 9.223372036854776e18 )
          v11 = 0x8000000000000000uLL;
      }
      v12 = (char *)(v11 + (unsigned int)(int)v10);
      ppv = v12;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x38u,
          (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
          &v12[v9 + 1]);
      }
      v26 = (LPCRITICAL_SECTION)((char *)v1 + 392);
      v27 = 0;
      ATL::CCritSecLock::Lock(&v26);
      LODWORD(v33) = 0;
      v13 = 0LL;
      while ( 1 )
      {
        LODWORD(v34) = v13;
        if ( v13 >= (unsigned __int64)&v12[v9 + 1] )
          break;
        v14 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v15 = v14;
        if ( v14 )
          v14[3] = 0LL;
        else
          v15 = 0LL;
        v16 = v15;
        if ( v15 )
        {
          v17 = (int)v33;
          *(_DWORD *)v15 = (_DWORD)v33;
          LODWORD(v33) = v17 + 1;
          LODWORD(v35) = v17 + 1;
          *((_DWORD *)v15 + 2) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v15 + 3) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v15 + 1) = 0;
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
            v15 + 3,
            *((unsigned int *)v1 + 30) * *((_QWORD *)v1 + 55));
          if ( v15[3] )
          {
            try
            {
              v2 = 0;
              v16 = 0LL;
              v29 = 0LL;
              v28 = v15;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
                (__int64 *)v1 + 37,
                (__int64)&v28);
            }
            catch ( ATL::CAtlException *v31 )
            {
              v21 = v31;
              if ( *v31 == -1073741571 )
                o__resetstkoflw_0();
              v1 = v32;
              v2 = *v21;
              LODWORD(v33) = v35;
              v16 = v29;
            }
          }
          else
          {
            v2 = -2147024882;
            CMonitor::SampleDataBlock::`scalar deleting destructor'(v15);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        v12 = (char *)ppv;
        if ( v16 )
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v16);
        v13 = (unsigned int)(v34 + 1);
        v9 = v25;
      }
      if ( v2 >= 0 )
      {
        v18 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19 = v18;
        if ( v18 )
          v18[3] = 0LL;
        else
          v19 = 0LL;
        v20 = v19;
        if ( v19 )
        {
          *(_DWORD *)v19 = (_DWORD)v33;
          *((_DWORD *)v19 + 2) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v19 + 3) = *((_DWORD *)v1 + 30);
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
            v19 + 3,
            *((unsigned int *)v1 + 30) * *((_QWORD *)v1 + 55));
          *((_DWORD *)v19 + 1) = 2;
          v19[2] = 0LL;
          if ( v19[3] )
          {
            v2 = 0;
            v20 = 0LL;
            v34 = 0LL;
            v33 = v19;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
              (__int64 *)v1 + 43,
              (__int64)&v33);
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
      }
      if ( v27 )
        LeaveCriticalSection(v26);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, CMonitor **))(**((_QWORD **)v1 + 22) + 48LL))(
               *((_QWORD *)v1 + 22),
               &v32);
        if ( v2 < 0 )
          goto LABEL_88;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void ***))(**((_QWORD **)v1 + 23) + 24LL))(
               *((_QWORD *)v1 + 23),
               (unsigned int)(*((_DWORD *)v1 + 60) - (_DWORD)v32),
               &v33);
        if ( v2 < 0 )
          goto LABEL_88;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 23) + 32LL))(
               *((_QWORD *)v1 + 23),
               (unsigned int)(*((_DWORD *)v1 + 60) - (_DWORD)v32),
               2LL);
        if ( v2 < 0 )
          goto LABEL_88;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids);
        }
        *((_DWORD *)v1 + 14) = 3;
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 9) + 80LL))(*((_QWORD *)v1 + 9));
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 22) + 80LL))(*((_QWORD *)v1 + 22)), v2 < 0) )
        {
LABEL_88:
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x3Bu,
              (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids,
              v2);
          }
          CMonitor::Stop(v1);
        }
      }
      goto LABEL_91;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids);
    }
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return 1LL;
}
