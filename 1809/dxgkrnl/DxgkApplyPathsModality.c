/*
 * XREFs of DxgkApplyPathsModality @ 0x1C0137200
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v10; // [rsp+28h] [rbp-39h] BYREF
  __int64 v11; // [rsp+30h] [rbp-31h]
  char v12; // [rsp+38h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+50h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  __int16 v17; // [rsp+68h] [rbp+7h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]
  char v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  int v24; // [rsp+98h] [rbp+37h]
  BOOL v25; // [rsp+9Ch] [rbp+3Bh]
  int v26; // [rsp+A0h] [rbp+3Fh]

  v10 = -1;
  v11 = 0LL;
  v5 = a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 2169;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2169);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2169);
  if ( a2 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v20 = 0LL;
    v21 = a2;
    v22 = 0;
    v23 = 0;
    v25 = (v5 & 0x1000000) != 0;
    v24 = 1;
    v26 = 0;
    v6 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v13, v5, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v13);
  }
  else
  {
    v6 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v10);
  return v6;
}
