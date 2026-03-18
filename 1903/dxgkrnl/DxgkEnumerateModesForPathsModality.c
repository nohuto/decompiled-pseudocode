/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1C026D620
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0024A4C (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00DA6D0 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00DE9F8 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C02BFFFC (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0560 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02C0C18 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        const GUID *a3,
        PVOID *a4,
        _DWORD *a5)
{
  unsigned int v6; // r15d
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 i; // rsi
  __int64 v31; // r10
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rcx
  const GUID *v42; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-148h] BYREF
  int v44; // [rsp+38h] [rbp-140h] BYREF
  __int64 v45; // [rsp+40h] [rbp-138h]
  char v46; // [rsp+48h] [rbp-130h]
  int v47; // [rsp+50h] [rbp-128h]
  int v48; // [rsp+54h] [rbp-124h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-120h] BYREF
  SIZE_T Length; // [rsp+60h] [rbp-118h]
  _BYTE v51[48]; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v52; // [rsp+98h] [rbp-E0h]
  _BYTE v53[76]; // [rsp+A0h] [rbp-D8h] BYREF
  int v54; // [rsp+ECh] [rbp-8Ch]
  int v55; // [rsp+F4h] [rbp-84h]
  _DWORD v56[24]; // [rsp+100h] [rbp-78h] BYREF

  v6 = (unsigned int)a3;
  v8 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v46 = 1;
    v44 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2171);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2171LL);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v8 & 0xFEFD7FFF) != 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v11 + 24) = 279LL;
      WdLogEvent5_WdAssertion(v11);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v53, a2);
    v12 = v54;
    if ( (v8 & 0x8000) != 0 )
      v54 |= 1u;
    if ( (v8 & 0x1000000) != 0 )
      v55 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v51);
    v13 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v53,
            v8 | 0x40000u,
            v6,
            (struct CCD_MODE_RESULT_SET *)v51);
    v17 = v13;
    if ( v13 >= 0 )
    {
      LODWORD(v17) = 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
    }
    if ( (int)v17 < 0 )
    {
LABEL_37:
      v54 = v12;
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v51);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v34);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v36, v44);
      return (unsigned int)v17;
    }
    v19 = v52;
    v20 = 72LL * v52;
    if ( v20 <= 0xFFFFFFFF )
    {
      v48 = 72 * v52;
      BaseAddress = 0LL;
      Length = (unsigned int)v20;
      RegionSize = (unsigned int)v20;
      LODWORD(v17) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v17 < 0 )
      {
        v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = v19;
        WdLogEvent5_WdLowResource(v25);
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v51);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v53);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v26);
        if ( v46 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v27, &EventProfilerExit, v28, v44);
        }
        return 3221225626LL;
      }
      ProbeForWrite(BaseAddress, Length, 1u);
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v47 = i;
        if ( (unsigned int)i >= (unsigned int)v19 )
          break;
        memset(v56, 0, sizeof(v56));
        if ( !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v51,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v56) )
          break;
        v31 = 9 * i;
        *((_DWORD *)BaseAddress + 2 * v31 + 12) = v56[16];
        *((_DWORD *)BaseAddress + 2 * v31 + 13) = v56[17];
        *((_DWORD *)BaseAddress + 2 * v31 + 14) = v56[19];
        *((_BYTE *)BaseAddress + 8 * v31 + 60) = v56[22];
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v56, (__int64)BaseAddress + 72 * i);
        v32 = v56[23] >> 2;
        *((_DWORD *)BaseAddress + 2 * v33 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v33 + 16) ^ (v56[23] >> 2)) & 0x3F;
        *((_DWORD *)BaseAddress + 2 * v33 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v33 + 16) ^ v32) & 0xFC0000;
        *((_DWORD *)BaseAddress + 2 * v33 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v33 + 16) ^ v32) & 0x3F000;
        *((_DWORD *)BaseAddress + 2 * v33 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v33 + 16) ^ v32) & 0xFC0;
        *((_DWORD *)BaseAddress + 2 * v33 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v33 + 16) ^ v32) & 0x3F000000;
      }
      *a4 = BaseAddress;
      *a5 = v19;
      goto LABEL_37;
    }
    v37 = WdLogNewEntry5_WdError(v15, 0xFFFFFFFFLL, v16);
    *(_QWORD *)(v37 + 24) = v19;
    WdLogEvent5_WdError(v37);
    CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v51);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v38);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v44);
    return 3221225621LL;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v9);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, &EventProfilerExit, v42, v44);
    return 3221225485LL;
  }
}
