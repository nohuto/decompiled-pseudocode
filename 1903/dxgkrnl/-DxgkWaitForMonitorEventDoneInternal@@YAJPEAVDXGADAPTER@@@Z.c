/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C7094
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C6BA0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C71E0 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C721C (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v27[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v28[72]; // [rsp+88h] [rbp-60h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
    if ( *((_QWORD *)this + 319) == v6 )
    {
      v21 = WdLogNewEntry5_WdError(v5, v4, v6);
      LODWORD(v18) = -1073741637;
      *(_QWORD *)(v21 + 24) = this;
      *(_QWORD *)(v21 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      v7 = COREADAPTERACCESS::AcquireShared((__int64)v26, 0xFFFFFFFFLL, v6);
      if ( v7 < 0 )
      {
        LODWORD(v18) = v7;
      }
      else
      {
        v8 = (void *)*((_QWORD *)this + 24);
        ObfReferenceObject(v8);
        v9 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v8);
        if ( (int)v9 < 0 )
        {
          v22 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v22 + 24) = v9;
          WdLogEvent5_WdError(v22);
          LODWORD(v18) = v9;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v14 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v18 = v14;
          if ( v14 == 258 )
          {
            v23 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v23 + 24) = 1917LL;
            WdLogEvent5_WdWarning(v23);
          }
          else if ( v14 < 0 )
          {
            v24 = WdLogNewEntry5_WdError(v16, v15, v17);
            *(_QWORD *)(v24 + 24) = v18;
            WdLogEvent5_WdError(v24);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
  }
  return (unsigned int)v18;
}
