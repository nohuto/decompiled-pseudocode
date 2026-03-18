/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1C0147A00
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D08CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  char v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-9h] BYREF
  __int64 v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  __int64 v19; // [rsp+60h] [rbp+Fh]
  __int16 v20; // [rsp+68h] [rbp+17h]
  __int64 v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  __int64 v24; // [rsp+88h] [rbp+37h]
  char v25; // [rsp+90h] [rbp+3Fh]
  BOOL v26; // [rsp+94h] [rbp+43h]
  int v27; // [rsp+98h] [rbp+47h]
  _BOOL8 v28; // [rsp+9Ch] [rbp+4Bh]

  v13 = -1;
  v4 = a1;
  v14 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v15 = 1;
    v13 = 2168;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2168);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2168LL);
  if ( a2 )
  {
    if ( (v4 & 0xFEFD7FFF) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v12 + 24) = 228LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v24 = a2;
    v17 = 0LL;
    v18 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v16 = 0;
    v19 = 0LL;
    v20 = 0;
    v23 = 0LL;
    v25 = 0;
    v27 = 1;
    v26 = (v4 & 0x8000) != 0;
    v28 = (v4 & 0x1000000) != 0;
    v7 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v16, v4, 0);
    v26 = 0;
    v8 = v7;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v16);
  }
  else
  {
    v8 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v5);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v13);
  return v8;
}
