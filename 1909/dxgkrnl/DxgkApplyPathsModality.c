/*
 * XREFs of DxgkApplyPathsModality @ 0x1C00CB700
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CE7A8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-31h]
  char v13; // [rsp+38h] [rbp-29h]
  int v14; // [rsp+48h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+58h] [rbp-9h]
  __int64 v17; // [rsp+60h] [rbp-1h]
  __int16 v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  __int64 v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  __int64 v22; // [rsp+88h] [rbp+27h]
  char v23; // [rsp+90h] [rbp+2Fh]
  int v24; // [rsp+94h] [rbp+33h]
  int v25; // [rsp+98h] [rbp+37h]
  BOOL v26; // [rsp+9Ch] [rbp+3Bh]
  int v27; // [rsp+A0h] [rbp+3Fh]

  v11 = -1;
  v12 = 0LL;
  v5 = a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2169;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2169);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2169LL);
  if ( a2 )
  {
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v21 = 0LL;
    v22 = a2;
    v23 = 0;
    v24 = 0;
    v26 = (v5 & 0x1000000) != 0;
    v25 = 1;
    v27 = 0;
    v7 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v14, v5, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v14);
  }
  else
  {
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v6);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return v7;
}
