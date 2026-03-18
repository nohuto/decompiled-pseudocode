/*
 * XREFs of DxgkPersistPathsModality @ 0x1C0137910
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPersistPathsModality(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+28h] [rbp-29h] BYREF
  __int64 v12; // [rsp+30h] [rbp-21h]
  char v13; // [rsp+38h] [rbp-19h]
  struct D3DKMT_GETPATHSMODALITY *v14[4]; // [rsp+48h] [rbp-9h] BYREF
  __int16 v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  __int64 v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  __int64 v19; // [rsp+88h] [rbp+37h]
  bool v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  int v22; // [rsp+98h] [rbp+47h]
  __int64 v23; // [rsp+9Ch] [rbp+4Bh]

  v11 = -1;
  v4 = a1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2167;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2167);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2167);
  LODWORD(v14[0]) = 0;
  memset(&v14[1], 0, 24);
  v20 = a2 == 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = a2;
  v21 = 0;
  v22 = 1;
  v23 = 0LL;
  v7 = CCD_TOPOLOGY::Persist(v14, v4, v5, v6);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return v7;
}
