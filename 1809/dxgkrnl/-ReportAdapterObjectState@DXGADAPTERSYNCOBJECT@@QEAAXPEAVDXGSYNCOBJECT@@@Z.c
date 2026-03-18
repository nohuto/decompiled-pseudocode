/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C02358F4
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx @ 0x1C0022480 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C0022534 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C002260C (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C00226C0 (McTemplateK0ppqqpt.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        const GUID *a3)
{
  __int64 v5; // r9
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rax

  if ( !bTracingEnabled )
    goto LABEL_22;
  a3 = (const GUID *)*((_QWORD *)this + 4);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v6 = *((_DWORD *)a2 + 42) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v12 = (const EVENT_DESCRIPTOR *)&EventReportFence;
        goto LABEL_17;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ppqqppqi(*((unsigned int *)a2 + 44), &EventReportPeriodicMonitoredFence, (__int64)a3, v5, a3);
          }
          else
          {
            v11 = WdLogNewEntry5_WdAssertion(this);
            *(_QWORD *)(v11 + 24) = 971LL;
            WdLogEvent5_WdAssertion(v11);
          }
          goto LABEL_22;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v12 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_17:
        McTemplateK0ppqqpx(*((unsigned int *)a2 + 60), v12, a3, v5, a3);
        goto LABEL_22;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqpx(*((unsigned int *)a2 + 60), &EventReportCPUNotification, a3, v5, a3);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0ppqqpqq(*((unsigned int *)a2 + 60), &EventReportSemaphore, (__int64)a3, v5, a3);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0ppqqpt(*((unsigned int *)a2 + 60), &EventReportSynchronizationMutex, a3, v5, a3);
  }
LABEL_22:
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 42) - 5) <= 1 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v13 + 24) = 2344LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(
          (__int64)this,
          &EventReportSyncObject,
          a3,
          *((_QWORD *)this + 4),
          *((unsigned int *)a2 + 18),
          0LL);
    }
  }
}
