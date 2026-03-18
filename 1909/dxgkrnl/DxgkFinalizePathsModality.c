/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C00CC8A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC96C (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+20h] [rbp-29h] BYREF
  __int64 v10; // [rsp+28h] [rbp-21h]
  char v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+48h] [rbp-1h]
  __int64 v14; // [rsp+50h] [rbp+7h]
  __int64 v15; // [rsp+58h] [rbp+Fh]
  __int16 v16; // [rsp+60h] [rbp+17h]
  __int64 v17; // [rsp+68h] [rbp+1Fh]
  __int64 v18; // [rsp+70h] [rbp+27h]
  __int64 v19; // [rsp+78h] [rbp+2Fh]
  __int64 v20; // [rsp+80h] [rbp+37h]
  char v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]
  int v23; // [rsp+90h] [rbp+47h]
  __int64 v24; // [rsp+94h] [rbp+4Bh]

  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2170);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2170LL);
  if ( a1 )
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v19 = 0LL;
    v20 = a1;
    v21 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0LL;
    v5 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v12);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
  }
  else
  {
    v5 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9, v4);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return v5;
}
