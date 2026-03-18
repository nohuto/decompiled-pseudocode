/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x1C023B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00BEE90 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7E1C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        const GUID *a3,
        _DWORD *a4)
{
  int v8; // eax
  int TopologyClass; // ebx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // [rsp+28h] [rbp-49h] BYREF
  const GUID *v14; // [rsp+30h] [rbp-41h]
  const GUID *v15; // [rsp+38h] [rbp-39h]
  int v16; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h]
  char v18; // [rsp+50h] [rbp-21h]
  int v19; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+60h] [rbp-11h]
  __int64 v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  __int16 v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int64 v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  struct D3DKMT_GETPATHSMODALITY *v27; // [rsp+98h] [rbp+27h]
  bool v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]
  int v30; // [rsp+A8h] [rbp+37h]
  __int64 v31; // [rsp+ACh] [rbp+3Bh]
  int v32; // [rsp+D8h] [rbp+67h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 2177;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2177);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2177);
  if ( a4 )
    *a4 = 0;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v28 = a1 == 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v26 = 0LL;
  v27 = a1;
  v13 = 0LL;
  v8 = *a2;
  v29 = 0;
  v30 = 1;
  v31 = 0LL;
  v14 = a3;
  v15 = a3;
  HIDWORD(v13) = v8;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0LL, 0LL, (struct _QDC_CONTEXT *)&v13);
  if ( TopologyClass >= 0 )
  {
    *a2 = ((char *)v15 - (char *)v14) / 200 + (_DWORD)v15 - (_DWORD)v14;
    if ( a4 )
    {
      v32 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)&v19, (enum CCD_TOPOLOGY_CLASS *)&v32);
      if ( TopologyClass >= 0 )
        *a4 = v32;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v16);
  return (unsigned int)TopologyClass;
}
