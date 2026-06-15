/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800BE810
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x1800C0BC8 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C102C (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]

  if ( *((_DWORD *)this + 26) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      (char *)this + 72);
    *((_DWORD *)this + 26) = 0;
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
  v3 = 1;
  while ( *((_QWORD *)this + 21) )
  {
    v4 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)this + 152);
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids,
        *(_QWORD *)(v4 + 8));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  if ( v16 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v16 = 0;
  }
  g_streamMonitorManager = 0LL;
  v6 = qword_1801B7C00;
  qword_1801B7C00 = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_180151300, 0LL, 1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v7);
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
    v9 = RpcServerUnregisterIfEx(&unk_1801513C0, 0LL, 1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v9);
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
    v11 = RpcServerUnregisterIfEx(&unk_180151360, 0LL, 1);
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v11);
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
    v13 = RpcServerUnregisterIfEx(&unk_1801512A0, 0LL, 1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v13);
      }
    }
    else
    {
      v3 = 0;
    }
    *((_DWORD *)this + 17) = v3;
  }
  return 0LL;
}
