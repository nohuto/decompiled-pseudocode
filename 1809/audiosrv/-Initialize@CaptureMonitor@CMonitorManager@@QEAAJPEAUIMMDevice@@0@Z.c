/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x1800FD320
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB784 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800BA07C (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1800C3CA0 (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800FAD98 (--0CMonitor@@QEAA@XZ.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800FB750 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180100AA0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(char *pv, struct IMMDevice *a2, struct IMMDevice *a3)
{
  struct IMMDevice *v3; // r15
  struct IMMDevice *v4; // r12
  char *v5; // rbx
  CMonitor *v7; // rax
  CMonitor *v8; // rsi
  __int64 v9; // rcx
  int v10; // esi
  CAudioSessionManager *v11; // rcx
  struct _SECURITY_ATTRIBUTES *v12; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  unsigned int v14; // r9d
  int v15; // eax
  char v16; // r15
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // [rsp+38h] [rbp-30h] BYREF
  char *v19; // [rsp+70h] [rbp+8h] BYREF
  struct IMMDevice *v20; // [rsp+78h] [rbp+10h]
  struct IMMDevice *v21; // [rsp+80h] [rbp+18h]
  CMonitor *v22; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v19 = pv;
  v3 = a3;
  v4 = a2;
  v5 = pv;
  if ( *((_QWORD *)pv + 8) )
    return 2147943647LL;
  v7 = (CMonitor *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v7;
  if ( v7 )
    v8 = CMonitor::CMonitor(v7);
  else
    v8 = 0LL;
  v9 = *((_QWORD *)v5 + 8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)v5 + 8) = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
LABEL_25:
      if ( v5[48] )
      {
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + 5) + 32LL))(*((_QWORD *)v5 + 5), v5);
        v5[48] = 0;
      }
      return (unsigned int)v10;
    }
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_21:
      if ( v11 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v11 + 7) & 0x800000) != 0
        && *((_BYTE *)v11 + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)v11 + 2), 0x58u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v10);
      }
      goto LABEL_25;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x54u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
LABEL_20:
    v11 = WPP_GLOBAL_Control;
    goto LABEL_21;
  }
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v3->lpVtbl->Activate)(
          v3,
          &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
          1LL);
  if ( v10 < 0 )
    goto LABEL_20;
  v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + 5) + 24LL))(*((_QWORD *)v5 + 5), v5);
  if ( v10 < 0 )
    goto LABEL_20;
  v5[48] = 1;
  try
  {
    ATL::CEvent::Create((ATL::CEvent *)(v5 + 32), v12);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      o__resetstkoflw_0();
    LODWORD(v22) = *(_DWORD *)v17;
    v10 = (int)v22;
    v5 = v19;
    if ( (int)v22 < 0 )
      goto LABEL_20;
    v3 = v21;
    v4 = v20;
  }
  ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v5, 0LL);
  *((_QWORD *)v5 + 2) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v10 = -2147024882;
    goto LABEL_20;
  }
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v5 + 4), 0LL);
  *(_QWORD *)(*((_QWORD *)v5 + 8) + 264LL) = *((_QWORD *)v5 + 4);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x55u,
      (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
      v5,
      *((_QWORD *)v5 + 8));
  }
  v15 = CMonitor::Initialize(*((CMonitor **)v5 + 8), v4, v3, v14, (bool *)&v19);
  v10 = v15;
  if ( v15 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x57u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v5,
        v5,
        *((_QWORD *)v5 + 8),
        -2LL);
    }
    *(_QWORD *)(*((_QWORD *)v5 + 7) + 304LL) = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v11 = WPP_GLOBAL_Control;
  }
  else
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v16 = (char)v19;
    }
    else
    {
      v16 = (char)v19;
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x56u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v15);
      v11 = WPP_GLOBAL_Control;
    }
    if ( !v16 )
      return 1;
  }
  if ( v10 < 0 )
    goto LABEL_21;
  return (unsigned int)v10;
}
