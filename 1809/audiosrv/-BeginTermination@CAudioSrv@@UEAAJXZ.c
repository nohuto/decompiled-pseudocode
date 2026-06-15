/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800B02B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180013B64 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800B2CBC (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800FF934 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  __int64 v2; // rdx
  CMonitorManager *v3; // rcx
  int v4; // edi
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rsi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]

  if ( *((_DWORD *)this + 27) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      (char *)this + 72);
    *((_DWORD *)this + 27) = 0;
  }
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 208));
  if ( ThreadPool )
  {
    v2 = *((_QWORD *)this + 25);
    if ( v2 )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
        ThreadPool,
        v2,
        0LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
        ThreadPool,
        *((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 112);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 1;
  while ( *((_QWORD *)this + 21) )
  {
    v5 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 152);
    v6 = (void (__fastcall ***)(_QWORD, __int64))v5;
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids,
        *(_QWORD *)(v5 + 8));
    }
    if ( v6 )
      (**v6)(v6, 1LL);
  }
  if ( v16 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v16 = 0;
  }
  if ( *((_DWORD *)this + 26) && _MonitorManager )
  {
    CMonitorManager::Shutdown(v3);
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)_MonitorManager + 16LL))(_MonitorManager);
    _MonitorManager = 0LL;
  }
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_18014C830, 0LL, 1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v7);
      }
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    *((_DWORD *)this + 16) = v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = RpcServerUnregisterIfEx(&unk_18014C8F0, 0LL, 1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v9);
      }
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    *((_DWORD *)this + 14) = v10;
  }
  if ( *((_DWORD *)this + 15) )
  {
    v11 = RpcServerUnregisterIfEx(&unk_18014C890, 0LL, 1);
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v11);
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)this + 15) = v12;
  }
  if ( *((_DWORD *)this + 17) )
  {
    v13 = RpcServerUnregisterIfEx(&unk_18014C7D0, 0LL, 1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v13);
      }
    }
    else
    {
      v4 = 0;
    }
    *((_DWORD *)this + 17) = v4;
  }
  return 0LL;
}
