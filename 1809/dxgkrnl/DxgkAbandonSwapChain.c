/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C0252710
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02521CC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, const GUID *a3)
{
  void **v3; // rbx
  void *v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  PVOID v14; // rbx
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  char v17; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v3 = (void **)a1;
  v15 = -1;
  v16 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2113);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2113);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void **)MmUserProbeAddress;
  v4 = *v3;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v14 = Object;
    LODWORD(v9) = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v14);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v4;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v15);
  return (unsigned int)v9;
}
