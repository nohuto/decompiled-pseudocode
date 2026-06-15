/*
 * XREFs of ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB784
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FBCD8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z @ 0x1800FB078 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800FD320 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CreateMonitor(
        CMonitorManager *this,
        struct IMMDeviceEnumerator *a2,
        struct IMMDevice *a3,
        unsigned __int16 *a4,
        bool a5,
        struct CMonitorManager::CaptureMonitor **a6)
{
  struct IMMDevice *v7; // rsi
  CMonitorManager::CaptureMonitor *v9; // rbx
  CMonitorManager::CaptureMonitor *v10; // r15
  struct CMonitorManager::CaptureMonitor **v11; // r14
  int v12; // eax
  int v13; // edi
  CAudioSessionManager *v14; // rcx
  CMonitorManager::CaptureMonitor *v15; // rax
  ATL::CAtlException *v17; // rbx
  LPVOID pv; // [rsp+30h] [rbp-58h] BYREF
  CMonitorManager::CaptureMonitor *v19; // [rsp+38h] [rbp-50h]
  struct IMMDevice *v20; // [rsp+40h] [rbp-48h] BYREF
  CMonitorManager::CaptureMonitor *v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  ATL::CAtlException *v23; // [rsp+58h] [rbp-30h] BYREF
  int v24; // [rsp+98h] [rbp+10h]

  v22 = -2LL;
  v7 = a3;
  v20 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v11 = a6;
  *a6 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int16 *, struct IMMDevice **))a2->lpVtbl->GetDevice)(
          a2,
          a4,
          &v20);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x50u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v12);
LABEL_24:
      v14 = WPP_GLOBAL_Control;
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v7->lpVtbl->GetId)(v7, &pv);
  if ( v13 < 0 )
    goto LABEL_27;
  try
  {
    v15 = (CMonitorManager::CaptureMonitor *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v15 )
      v9 = CMonitorManager::CaptureMonitor::CaptureMonitor(v15, this, (unsigned __int16 *)pv, a4, a5);
    else
      v9 = 0LL;
    v19 = v9;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v17 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      o__resetstkoflw_0();
    v24 = *(_DWORD *)v17;
    v13 = *(_DWORD *)v17;
    v9 = v19;
    if ( v24 < 0 )
      goto LABEL_27;
    v11 = a6;
    v7 = a3;
    v10 = v21;
  }
  if ( v9 )
  {
    v13 = CMonitorManager::CaptureMonitor::Initialize(v9, v7, v20);
    if ( v13 >= 0 )
    {
      *v11 = v9;
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x52u,
          (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
          v9);
        goto LABEL_24;
      }
LABEL_25:
      v9 = v10;
      if ( v13 >= 0 )
        goto LABEL_32;
      goto LABEL_28;
    }
  }
  else
  {
    v13 = -2147024882;
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
      goto LABEL_32;
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
      goto LABEL_28;
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x51u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
  }
LABEL_27:
  v14 = WPP_GLOBAL_Control;
LABEL_28:
  if ( v14 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v14 + 7) & 0x800000) != 0
    && *((_BYTE *)v14 + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)v14 + 2), 0x53u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v13);
  }
LABEL_32:
  if ( v9 )
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v20 )
    ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->Release)(v20);
  return (unsigned int)v13;
}
