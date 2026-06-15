/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010CBA8
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18010A144 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18010B178 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18010D1A0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C4024 (WPP_SF_qd.c)
 *     WPP_SF_SS @ 0x1800D5138 (WPP_SF_SS.c)
 *     McTemplateU0qzz @ 0x18010D9DC (McTemplateU0qzz.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010E5A0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180111D58 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  _QWORD *v3; // rax
  const wchar_t *v4; // r9
  char *v5; // rsi
  char *v6; // rdx
  void (*Release)(void); // rax
  struct IMMDevice *v8; // rcx
  char *v9; // r14
  char *v10; // rdx
  unsigned int v11; // r9d
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r8d
  bool *v16; // [rsp+20h] [rbp-20h]
  bool v17; // [rsp+70h] [rbp+30h] BYREF
  struct IMMDevice *v18; // [rsp+78h] [rbp+38h] BYREF
  struct IMMDevice *v19; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 25) + 56LL) == 3 || *((_BYTE *)this + 12) )
    return (unsigned int)v2;
  v19 = 0LL;
  v18 = 0LL;
  SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = (_QWORD *)((char *)this + 160);
    if ( *((_QWORD *)this + 23) >= 8uLL )
      v3 = (_QWORD *)*v3;
    v4 = (const wchar_t *)((char *)this + 128);
    if ( *((_QWORD *)this + 19) >= 8uLL )
      v4 = *(const wchar_t **)v4;
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      v4,
      (__int64)v3);
  }
  v5 = (char *)this + 128;
  v6 = (char *)this + 128;
  if ( *((_QWORD *)this + 19) >= 8uLL )
    v6 = *(char **)v5;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL)
                                                                      + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
         v6,
         &v19);
  if ( v2 < 0 )
  {
    if ( !v18 )
      goto LABEL_17;
    Release = (void (*)(void))v18->lpVtbl->Release;
    goto LABEL_16;
  }
  v9 = (char *)this + 160;
  v10 = (char *)this + 160;
  if ( *((_QWORD *)this + 23) >= 8uLL )
    v10 = *(char **)v9;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL)
                                                                      + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
         v10,
         &v18);
  if ( v2 < 0 )
  {
    if ( v18 )
      ((void (__fastcall *)(struct IMMDevice *))v18->lpVtbl->Release)(v18);
    v8 = v19;
    if ( !v19 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      this);
  }
  v2 = CMonitor::Initialize(*((CMonitor **)this + 25), v19, v18, v11, &v17);
  if ( v2 < 0 )
  {
    v14 = (int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v16) = v2;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Eu,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        this,
        v16);
    }
    v15 = ++*((_DWORD *)this + 6);
    if ( v15 > *(_DWORD *)(*((_QWORD *)this + 24) + 328LL) )
    {
      *((_BYTE *)this + 12) = 1;
      if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
      {
        if ( *((_QWORD *)this + 23) >= 8uLL )
          v9 = *(char **)v9;
        if ( *((_QWORD *)this + 19) >= 8uLL )
          v5 = *(char **)v5;
        McTemplateU0qzz(v14, v13, v15, (_DWORD)v5, (__int64)v9);
      }
    }
    CMonitor::Terminate(*((CMonitor **)this + 25), 1, 0LL);
    v2 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Du,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        this);
    }
    *(_QWORD *)(*((_QWORD *)this + 24) + 304LL) = 0LL;
    *((_DWORD *)this + 6) = 0;
    CMonitor::Start(*((CMonitor **)this + 25));
  }
  if ( v18 )
  {
    Release = (void (*)(void))v18->lpVtbl->Release;
LABEL_16:
    Release();
  }
LABEL_17:
  v8 = v19;
  if ( v19 )
LABEL_25:
    ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->Release)(v8);
LABEL_26:
  if ( v2 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Fu, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, v2);
  }
  return (unsigned int)v2;
}
