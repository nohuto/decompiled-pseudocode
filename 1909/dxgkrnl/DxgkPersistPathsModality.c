/*
 * XREFs of DxgkPersistPathsModality @ 0x1C0130350
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v10; // [rsp+28h] [rbp-29h] BYREF
  __int64 v11; // [rsp+30h] [rbp-21h]
  char v12; // [rsp+38h] [rbp-19h]
  int v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  __int64 v16; // [rsp+60h] [rbp+Fh]
  __int16 v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+2Fh]
  __int64 v21; // [rsp+88h] [rbp+37h]
  bool v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]
  int v24; // [rsp+98h] [rbp+47h]
  __int64 v25; // [rsp+9Ch] [rbp+4Bh]

  v10 = -1;
  v4 = a1;
  v11 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 2167;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2167);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2167LL);
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v22 = a2 == 0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = a2;
  v23 = 0;
  v24 = 1;
  v25 = 0LL;
  v5 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v13, v4);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v6);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v10);
  return v5;
}
