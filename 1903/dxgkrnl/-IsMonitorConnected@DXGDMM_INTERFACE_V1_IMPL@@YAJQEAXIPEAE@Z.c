/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C017F480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     MonitorIsMonitorConnected @ 0x1C012865C (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        GUID *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int IsMonitorConnected; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v21 = -1;
  v22 = 0LL;
  v5 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 6057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6057);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 6057LL);
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    IsMonitorConnected = -1073741811;
    goto LABEL_9;
  }
  LOBYTE(a3->Data1) = 0;
  if ( !this )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v19);
    IsMonitorConnected = -1071775742;
    goto LABEL_9;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_QWORD *)this + 319) )
  {
    v19 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v19 + 24) = this;
    goto LABEL_16;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(this, v5, 0, a3);
LABEL_9:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v13);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v21);
  return IsMonitorConnected;
}
