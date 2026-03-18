/*
 * XREFs of DxgkSetSyncRefreshCountWaitTarget @ 0x1C0100920
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTarget(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rbx
  unsigned int refreshed; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v3 = a1;
  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 2026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2026);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2026LL);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  refreshed = DxgkSetSyncRefreshCountWaitTargetInternal(
                *(_OWORD *)v3,
                HIDWORD(*(_QWORD *)v3),
                *(_QWORD *)(v3 + 8),
                HIDWORD(*(_OWORD *)v3));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9, v5);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return refreshed;
}
