/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00D82A0
 * Callers:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00D822C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C01F6394 (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  struct DXGADAPTER *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v22[80]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+8h] BYREF

  v9 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( *((_BYTE *)v9 + 185) )
  {
    Global = DXGGLOBAL::GetGlobal(a1);
    return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((_QWORD *)Global + 168), a4, a3, a5);
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v9, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22) < 0 )
    {
      v18 = WdLogNewEntry5_WdEvent(v11, v10);
      *(_QWORD *)(v18 + 24) = 1194LL;
      WdLogEvent5_WdEvent(v18);
      LODWORD(v15) = 0;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(a2 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v20 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 16);
      v23 = a3;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v12 + 520) + 8LL) + 640LL))(
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              &v20,
              0,
              &v23);
      v15 = v13;
      if ( v13 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v19 + 24) = v15;
        WdLogEvent5_WdError(v19);
      }
      else
      {
        LODWORD(v15) = 0;
      }
      if ( v21[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    return (unsigned int)v15;
  }
}
