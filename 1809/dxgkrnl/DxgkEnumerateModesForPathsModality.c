/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1C0238CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0022788 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00BD660 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CA420 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0287CAC (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02881E8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02888A8 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        const GUID *a3,
        PVOID *a4,
        _DWORD *a5)
{
  unsigned int v6; // r12d
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 i; // rsi
  __int64 v28; // r10
  unsigned int v29; // edx
  __int64 v30; // r10
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v33; // rcx
  const GUID *v34; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-148h] BYREF
  int v36; // [rsp+38h] [rbp-140h] BYREF
  __int64 v37; // [rsp+40h] [rbp-138h]
  char v38; // [rsp+48h] [rbp-130h]
  int v39; // [rsp+50h] [rbp-128h]
  int v40; // [rsp+54h] [rbp-124h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-120h] BYREF
  SIZE_T Length; // [rsp+60h] [rbp-118h]
  _BYTE v43[48]; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v44; // [rsp+98h] [rbp-E0h]
  _BYTE v45[76]; // [rsp+A0h] [rbp-D8h] BYREF
  int v46; // [rsp+ECh] [rbp-8Ch]
  int v47; // [rsp+F4h] [rbp-84h]
  _BYTE v48[64]; // [rsp+100h] [rbp-78h] BYREF
  int v49; // [rsp+140h] [rbp-38h]
  int v50; // [rsp+144h] [rbp-34h]
  int v51; // [rsp+14Ch] [rbp-2Ch]
  char v52; // [rsp+158h] [rbp-20h]
  unsigned int v53; // [rsp+15Ch] [rbp-1Ch]

  v6 = (unsigned int)a3;
  v8 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2171);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2171);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v8 & 0xFEFD7FFF) != 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 273LL;
      WdLogEvent5_WdAssertion(v10);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v45, a2);
    v11 = v46;
    if ( (v8 & 0x8000) != 0 )
      v46 |= 1u;
    if ( (v8 & 0x1000000) != 0 )
      v47 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v43);
    v12 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v45,
            v8 | 0x40000u,
            v6,
            (struct CCD_MODE_RESULT_SET *)v43);
    v14 = v12;
    if ( v12 >= 0 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
    }
    if ( (int)v14 >= 0 )
    {
      v16 = v44;
      v17 = 72LL * v44;
      v18 = 0xFFFFFFFFLL;
      if ( v17 <= 0xFFFFFFFF )
        v18 = (unsigned int)v17;
      v40 = v18;
      if ( v17 > 0xFFFFFFFF )
      {
        v19 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v19 + 24) = v16;
        WdLogEvent5_WdError(v19);
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v43);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v45);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( v38 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v20, &EventProfilerExit, v21, v36);
        }
        return 3221225621LL;
      }
      BaseAddress = 0LL;
      Length = (unsigned int)v18;
      RegionSize = (unsigned int)v18;
      LODWORD(v14) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v14 < 0 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = v16;
        WdLogEvent5_WdLowResource(v24);
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v43);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v45);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v25, &EventProfilerExit, v26, v36);
        return 3221225626LL;
      }
      ProbeForWrite(BaseAddress, Length, 1u);
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v39 = i;
        if ( (unsigned int)i >= (unsigned int)v16
          || !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v43,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v48) )
        {
          break;
        }
        v28 = 9 * i;
        *((_DWORD *)BaseAddress + 2 * v28 + 12) = v49;
        *((_DWORD *)BaseAddress + 2 * v28 + 13) = v50;
        *((_DWORD *)BaseAddress + 2 * v28 + 14) = v51;
        *((_BYTE *)BaseAddress + 8 * v28 + 60) = v52;
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v48, (__int64)BaseAddress + 72 * i);
        v29 = v53 >> 2;
        *((_DWORD *)BaseAddress + 2 * v30 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v30 + 16) ^ (v53 >> 2)) & 0x3F;
        *((_DWORD *)BaseAddress + 2 * v30 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v30 + 16) ^ v29) & 0xFC0000;
        *((_DWORD *)BaseAddress + 2 * v30 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v30 + 16) ^ v29) & 0x3F000;
        *((_DWORD *)BaseAddress + 2 * v30 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v30 + 16) ^ v29) & 0xFC0;
        *((_DWORD *)BaseAddress + 2 * v30 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v30 + 16) ^ v29) & 0x3F000000;
      }
      *a4 = BaseAddress;
      *a5 = v16;
    }
    v46 = v11;
    CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v43);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v36);
    return (unsigned int)v14;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v33, &EventProfilerExit, v34, v36);
    return 3221225485LL;
  }
}
