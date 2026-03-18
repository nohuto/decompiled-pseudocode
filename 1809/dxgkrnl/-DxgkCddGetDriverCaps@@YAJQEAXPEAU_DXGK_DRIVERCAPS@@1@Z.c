/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C0137E60
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(struct DXGADAPTER *a1, struct _DXGK_DRIVERCAPS *a2, const GUID *a3)
{
  const GUID *v3; // rdi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  struct DXGADAPTER *v15; // r14
  DXGADAPTER *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  GUID *v19; // rax
  GUID *v20; // rcx
  __int64 v21; // r8
  GUID v22; // xmm1
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  GUID v32; // xmm1
  unsigned __int64 v33; // [rsp+30h] [rbp-39h] BYREF
  int v34; // [rsp+38h] [rbp-31h] BYREF
  __int64 v35; // [rsp+40h] [rbp-29h]
  char v36; // [rsp+48h] [rbp-21h]
  char v37[8]; // [rsp+50h] [rbp-19h] BYREF
  char v38[32]; // [rsp+58h] [rbp-11h] BYREF
  char v39[72]; // [rsp+78h] [rbp+Fh] BYREF
  struct DXGADAPTER *v40; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v41; // [rsp+E8h] [rbp+7Fh] BYREF

  v34 = -1;
  v3 = a3;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3005);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3005);
  memset(a2, 0, sizeof(struct _DXGK_DRIVERCAPS));
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, &v41, (unsigned __int64 *)&v40, 0LL, 0LL);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = a1;
    *(_QWORD *)(v29 + 32) = v8;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, &v40, &v33);
    v14 = v9;
    if ( v9 < 0 )
    {
      v30 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v30 + 24) = a1;
      v15 = 0LL;
      *(_QWORD *)(v30 + 32) = v14;
    }
    else
    {
      v15 = v40;
    }
    v16 = v41;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v41, v15);
    DXGADAPTER::ReleaseReference(v16);
    if ( v15 )
      DXGADAPTER::ReleaseReference(v15);
    LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
    if ( (int)v8 >= 0 )
    {
      if ( !v16 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v31 + 24) = 3202LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v18 = 4LL;
      v19 = (GUID *)((char *)v16 + 1824);
      v20 = (GUID *)v3;
      v21 = 4LL;
      do
      {
        *v20 = *v19;
        v20[1] = v19[1];
        v20[2] = v19[2];
        v20[3] = v19[3];
        v20[4] = v19[4];
        v20[5] = v19[5];
        v20[6] = v19[6];
        v20 += 8;
        v22 = v19[7];
        v19 += 8;
        v20[-1] = v22;
        --v21;
      }
      while ( v21 );
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      *(_QWORD *)&v20[4].Data1 = *(_QWORD *)&v19[4].Data1;
      if ( v15 )
      {
        v23 = (_OWORD *)((char *)v15 + 1824);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v23;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v23[1];
          *(_OWORD *)&a2->PointerCaps.0 = v23[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v23[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v23[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v23[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v23[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v24 = v23[7];
          v23 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v24;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v23;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v23[1];
        *(_OWORD *)&a2->PointerCaps.0 = v23[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v23[3];
        v25 = *((_QWORD *)v23 + 8);
      }
      else
      {
        do
        {
          *(GUID *)&a2->HighestAcceptableAddress.LowPart = *v3;
          *(GUID *)&a2->ApertureSegmentCommitLimit = v3[1];
          *(GUID *)&a2->PointerCaps.0 = v3[2];
          *(GUID *)&a2->GammaRampCaps.0 = v3[3];
          *(GUID *)&a2->SchedulingCaps.0 = v3[4];
          *(GUID *)a2->GpuEngineTopology.Reserved = v3[5];
          *(GUID *)&a2->GpuEngineTopology.Reserved[4] = v3[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v32 = v3[7];
          v3 += 8;
          *(GUID *)&a2[-1].SupportSurpriseRemoval = v32;
          --v18;
        }
        while ( v18 );
        *(GUID *)&a2->HighestAcceptableAddress.LowPart = *v3;
        *(GUID *)&a2->ApertureSegmentCommitLimit = v3[1];
        *(GUID *)&a2->PointerCaps.0 = v3[2];
        *(GUID *)&a2->GammaRampCaps.0 = v3[3];
        v25 = *(_QWORD *)&v3[4].Data1;
      }
      *(_QWORD *)&a2->SchedulingCaps.0 = v25;
      LODWORD(v8) = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v34);
  return (unsigned int)v8;
}
