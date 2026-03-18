/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C026A92C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0245E18 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     McTemplateK0ppqqpx @ 0x1C0044E20 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C0044ED4 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C0044FAC (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C0045060 (McTemplateK0ppqqpt.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        DXGADAPTERSYNCOBJECT *this,
        unsigned __int64 a2,
        const GUID *a3)
{
  unsigned int *v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  const EVENT_DESCRIPTOR *v7; // rdx
  __int64 v8; // rax

  v3 = (unsigned int *)a2;
  if ( !bTracingEnabled )
    goto LABEL_22;
  a3 = (const GUID *)*((_QWORD *)this + 4);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  a2 = (unsigned int)(*(_DWORD *)(a2 + 192) - 1);
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)(a2 - 1);
    if ( (_DWORD)a2 )
    {
      a2 = (unsigned int)(a2 - 1);
      if ( !(_DWORD)a2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v7 = (const EVENT_DESCRIPTOR *)&EventReportFence;
        goto LABEL_17;
      }
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        a2 = (unsigned int)(a2 - 1);
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 == 1 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ppqqppqi(v3[50], &EventReportPeriodicMonitoredFence, (__int64)a3, v5, a3);
          }
          else
          {
            v6 = WdLogNewEntry5_WdAssertion(this, a2);
            *(_QWORD *)(v6 + 24) = 971LL;
            WdLogEvent5_WdAssertion(v6);
          }
          goto LABEL_22;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_22;
        v7 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_17:
        McTemplateK0ppqqpx(v3[66], v7, a3, v5, a3);
        goto LABEL_22;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqpx(v3[66], &EventReportCPUNotification, a3, v5, a3);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0ppqqpqq(v3[66], &EventReportSemaphore, (__int64)a3, v5, a3);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0ppqqpt(v3[66], &EventReportSynchronizationMutex, a3, v5, a3);
  }
LABEL_22:
  if ( v3[18] )
  {
    if ( v3[48] - 5 <= 1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 2331LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp((__int64)this, &EventReportSyncObject, a3, *((_QWORD *)this + 4), v3[18], 0LL);
    }
  }
}
