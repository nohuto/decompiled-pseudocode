/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C0288630
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C0288098 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  PVOID v15; // rbx
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  char v18; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v3 = (void **)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 2113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2113);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2113LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void **)MmUserProbeAddress;
  v4 = *v3;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v15 = Object;
    LODWORD(v9) = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v15);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v4;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, v11);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v16);
  return (unsigned int)v9;
}
