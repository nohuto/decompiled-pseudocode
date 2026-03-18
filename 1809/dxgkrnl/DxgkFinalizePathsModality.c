/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C011F390
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C011F0A0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  const GUID *v6; // r8
  int v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  char v10; // [rsp+30h] [rbp-19h]
  int v11; // [rsp+40h] [rbp-9h] BYREF
  __int64 v12; // [rsp+48h] [rbp-1h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  __int16 v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  __int64 v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]
  __int64 v19; // [rsp+80h] [rbp+37h]
  char v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]
  int v22; // [rsp+90h] [rbp+47h]
  __int64 v23; // [rsp+94h] [rbp+4Bh]

  v8 = -1;
  v9 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v10 = 1;
    v8 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2170);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 2170);
  if ( a1 )
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v18 = 0LL;
    v19 = a1;
    v20 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0LL;
    v4 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v11);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
  }
  else
  {
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, v6, v8);
  return v4;
}
