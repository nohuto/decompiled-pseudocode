/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x1C02706A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D237C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00DE8C0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        const GUID *a3,
        _DWORD *a4)
{
  int v8; // eax
  int TopologyClass; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+28h] [rbp-49h] BYREF
  __int64 v15; // [rsp+30h] [rbp-41h]
  char v16; // [rsp+38h] [rbp-39h]
  _DWORD v17[2]; // [rsp+40h] [rbp-31h] BYREF
  const GUID *v18; // [rsp+48h] [rbp-29h]
  const GUID *v19; // [rsp+50h] [rbp-21h]
  int v20; // [rsp+58h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-9h]
  __int64 v23; // [rsp+70h] [rbp-1h]
  __int16 v24; // [rsp+78h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  struct D3DKMT_GETPATHSMODALITY *v28; // [rsp+98h] [rbp+27h]
  bool v29; // [rsp+A0h] [rbp+2Fh]
  int v30; // [rsp+A4h] [rbp+33h]
  int v31; // [rsp+A8h] [rbp+37h]
  __int64 v32; // [rsp+ACh] [rbp+3Bh]
  int v33; // [rsp+D8h] [rbp+67h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 2177;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2177);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2177LL);
  if ( a4 )
    *a4 = 0;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v29 = a1 == 0LL;
  v26 = 0LL;
  v8 = *a2;
  v23 = 0LL;
  v24 = 0;
  v27 = 0LL;
  v28 = a1;
  v30 = 0;
  v31 = 1;
  v32 = 0LL;
  v17[0] = 0;
  v18 = a3;
  v19 = a3;
  v17[1] = v8;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0LL, 0LL, (struct _QDC_CONTEXT *)v17);
  if ( TopologyClass >= 0 )
  {
    *a2 = ((char *)v19 - (char *)v18) / 200 + (_DWORD)v19 - (_DWORD)v18;
    if ( a4 )
    {
      v33 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)&v20, (enum CCD_TOPOLOGY_CLASS *)&v33);
      if ( TopologyClass >= 0 )
        *a4 = v33;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v10);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  return (unsigned int)TopologyClass;
}
