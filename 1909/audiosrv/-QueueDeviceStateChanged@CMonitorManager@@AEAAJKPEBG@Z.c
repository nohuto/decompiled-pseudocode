/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18010BFAC
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18010B010 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18010B340 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18010B3B0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180047348 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180048474 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x1801007E0 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180107908 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(char *pv, int a2, unsigned __int16 *a3)
{
  char *v5; // rdi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  CMonitorManager::DeviceStateChangedContext *v7; // rbx
  unsigned int v8; // ebx
  struct _TP_WORK *ThreadpoolWork; // r14
  signed int LastError; // eax
  __int64 *v11; // rax
  __int64 **v12; // rcx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // rbx
  CMonitorManager::DeviceStateChangedContext *v16; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v17[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v18; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v19; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+98h] [rbp+20h]
  int v24; // [rsp+98h] [rbp+20h]

  v17[1] = (CMonitorManager::DeviceStateChangedContext *)-2LL;
  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v6, (__int64)&ATL::g_strmgr);
    *((_DWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v16 = v7;
  v17[0] = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_26;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v7, a3);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v14 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v14;
    v8 = *(_DWORD *)v14;
    if ( v23 < 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v16);
      goto LABEL_26;
    }
    v5 = pv;
    v7 = v16;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v7 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v8);
    }
    goto LABEL_26;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 160);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v8 = 0;
    v11 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
            (__int64)(v5 + 200),
            (__int64 *)v17,
            *((_QWORD *)v5 + 26));
    v12 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v12 )
      *v12 = v11;
    else
      *((_QWORD *)v5 + 25) = v11;
    *((_QWORD *)v5 + 26) = v11;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v24 = *(_DWORD *)v15;
    v8 = *(_DWORD *)v15;
    if ( v24 < 0 )
      goto LABEL_24;
    v5 = pv;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_24:
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_26:
  if ( v17[0] )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v17[0]);
  return v8;
}
