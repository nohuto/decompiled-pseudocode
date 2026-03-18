/*
 * XREFs of DxgkOpenResource @ 0x1C00F2740
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221450 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F2868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v10; // [rsp+28h] [rbp-70h] BYREF
  __int64 v11; // [rsp+30h] [rbp-68h]
  char v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int128 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+80h] [rbp-18h]

  v10 = -1;
  v11 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 2005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2005);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2005LL);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = a1;
    if ( a1 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v13 = *(_OWORD *)(v4 + 16);
    v14 = *(_OWORD *)(v4 + 32);
    v15 = *(_OWORD *)(v4 + 48);
    v16 = *(_QWORD *)(v4 + 64);
  }
  v5 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v6);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v10);
  return v5;
}
