/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C013D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, GUID *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *DxgAdapter; // rbx
  __int64 v12; // r8
  void *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v24 = -1;
  v25 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 7057);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 7057LL);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6, v8);
    if ( !DxgAdapter )
      goto LABEL_21;
    if ( KeGetCurrentIrql() )
    {
      v19 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 40) + 28LL) >= 0x2003u )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v9);
        v20[3] = 275LL;
        v20[4] = 20LL;
        v20[5] = DxgAdapter;
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
      }
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_QWORD *)DxgAdapter + 319) )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v13 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v5 != 2 )
        {
          v23 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 1), v9, v12);
          *(_QWORD *)(v23 + 24) = v5;
          WdLogEvent5_WdWarning(v23);
          v14 = -1073741637;
          goto LABEL_13;
        }
        v13 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *(_QWORD *)&a3->Data1 = v13;
      v14 = 0;
    }
    else
    {
LABEL_21:
      v22 = WdLogNewEntry5_WdError(v10, v9, v12);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdError(v22);
      v14 = -1071775742;
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
    v18[3] = 0LL;
    v18[4] = v5;
    v18[5] = a1;
    WdLogEvent5_WdError(v18);
    v14 = -1073741811;
  }
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v9);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v24);
  return v14;
}
