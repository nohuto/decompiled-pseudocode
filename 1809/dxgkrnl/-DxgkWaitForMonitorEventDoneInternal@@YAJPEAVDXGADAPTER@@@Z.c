/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0121FA8
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121B30 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01220DC (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0122118 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  void *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v24[48]; // [rsp+58h] [rbp-30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, this, 0LL);
    if ( *((_QWORD *)this + 315) == v5 )
    {
      v18 = WdLogNewEntry5_WdError(v4);
      LODWORD(v15) = -1073741637;
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v18);
    }
    else
    {
      v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
      if ( v6 < 0 )
      {
        LODWORD(v15) = v6;
      }
      else
      {
        v7 = (void *)*((_QWORD *)this + 24);
        ObfReferenceObject(v7);
        v8 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v7);
        if ( (int)v8 < 0 )
        {
          v19 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v19 + 24) = v8;
          WdLogEvent5_WdError(v19);
          LODWORD(v15) = v8;
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v22);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v11 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v15 = v11;
          if ( v11 == 258 )
          {
            v20 = WdLogNewEntry5_WdWarning(v13, v12, v14);
            *(_QWORD *)(v20 + 24) = 1600LL;
            WdLogEvent5_WdWarning(v20);
          }
          else if ( v11 < 0 )
          {
            v21 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v21 + 24) = v15;
            WdLogEvent5_WdError(v21);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v17 + 32) = 0LL;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
  }
  return (unsigned int)v15;
}
