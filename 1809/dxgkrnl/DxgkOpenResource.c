/*
 * XREFs of DxgkOpenResource @ 0x1C00F4AA0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1140 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rax
  __m128i v5; // xmm2
  unsigned int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h]
  char v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+80h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2005);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2005);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = a1;
    if ( a1 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v5 = *(__m128i *)v4;
    v14 = *(_OWORD *)(v4 + 16);
    v15 = *(_OWORD *)(v4 + 32);
    v16 = *(_OWORD *)(v4 + 48);
    v17 = *(_QWORD *)(v4 + 64);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
  }
  v7 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1, v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return v7;
}
