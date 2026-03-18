/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C012D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, GUID *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGADAPTER *DxgAdapter; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7057);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 7057);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
    if ( !DxgAdapter )
      goto LABEL_21;
    if ( KeGetCurrentIrql() )
    {
      v17 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x2003u )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
        v18[3] = 275LL;
        v18[4] = 20LL;
        v18[5] = DxgAdapter;
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_QWORD *)DxgAdapter + 315) )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v11 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v5 != 2 )
        {
          v21 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 1), v9, v10);
          *(_QWORD *)(v21 + 24) = v5;
          WdLogEvent5_WdWarning(v21);
          v12 = -1073741637;
          goto LABEL_13;
        }
        v11 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *(_QWORD *)&a3->Data1 = v11;
      v12 = 0;
    }
    else
    {
LABEL_21:
      v20 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      v12 = -1071775742;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v16[3] = 0LL;
    v16[4] = v5;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v12 = -1073741811;
  }
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v22);
  return v12;
}
