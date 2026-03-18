/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C01328C8
 * Callers:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0132854 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0226A34 (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  struct DXGADAPTER *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-B8h] BYREF

  v9 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( *((_BYTE *)v9 + 185) )
  {
    Global = DXGGLOBAL::GetGlobal(a1, (__int64)v9);
    return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((_QWORD *)Global + 164), a4, a3, a5);
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v9, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v25, 0xFFFFFFFFLL, v10) < 0 )
    {
      v20 = WdLogNewEntry5_WdEvent(v11);
      *(_QWORD *)(v20 + 24) = 1192LL;
      WdLogEvent5_WdEvent(v20);
      LODWORD(v17) = 0;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(a2 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      v23 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 16);
      v22 = a3;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v12 + 520) + 8LL) + 640LL))(
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              &v23,
              0,
              &v22);
      v17 = v13;
      if ( v13 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v21 + 24) = v17;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        LODWORD(v17) = 0;
      }
      if ( v24[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    return (unsigned int)v17;
  }
}
