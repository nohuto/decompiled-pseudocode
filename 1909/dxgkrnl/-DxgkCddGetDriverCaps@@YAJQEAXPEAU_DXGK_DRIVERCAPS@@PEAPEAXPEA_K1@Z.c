/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C014BD80
 * Callers:
 *     <none>
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *this,
        struct _DXGK_DRIVERCAPS *a2,
        GUID *a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v8; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  struct DXGADAPTER **v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  struct DXGADAPTER *v21; // r8
  __int64 v22; // rdx
  struct _DXGK_DRIVERCAPS *v23; // rcx
  __int64 v24; // r9
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm1
  struct DXGADAPTER *v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h]
  _BYTE v46[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v47[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v48[72]; // [rsp+C8h] [rbp-38h] BYREF

  v43 = -1;
  v44 = 0LL;
  v8 = a5;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 3005);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 3005LL);
  memset(a2, 0, sizeof(struct _DXGK_DRIVERCAPS));
  v39 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v39);
  PairingAdapters = DxgkpGetPairingAdapters(this, 0LL, v10, &v40, 0LL, 0LL, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = v15;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    if ( !v39 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v36 + 24) = 3125LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v41 = 0LL;
    v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v41);
    v17 = DxgkpGetPairingAdapters(this, 0LL, 0LL, 0LL, v16, &v42, 0);
    v20 = v17;
    if ( v17 < 0 )
    {
      v37 = WdLogNewEntry5_WdTrace(v19, v18);
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = v20;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v39, v41);
    LODWORD(v15) = COREADAPTERACCESS::AcquireShared((__int64)v46, 0xFFFFFFFFLL, 0LL);
    if ( (int)v15 >= 0 )
    {
      v21 = v39;
      v22 = 4LL;
      v23 = a5;
      v24 = 4LL;
      v25 = (_OWORD *)((char *)v39 + 1848);
      do
      {
        *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
        *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
        *(_OWORD *)&v23->PointerCaps.0 = v25[2];
        *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
        *(_OWORD *)&v23->SchedulingCaps.0 = v25[4];
        *(_OWORD *)v23->GpuEngineTopology.Reserved = v25[5];
        *(_OWORD *)&v23->GpuEngineTopology.Reserved[4] = v25[6];
        v23 = (struct _DXGK_DRIVERCAPS *)((char *)v23 + 128);
        v26 = v25[7];
        v25 += 8;
        *(_OWORD *)&v23[-1].SupportSurpriseRemoval = v26;
        --v24;
      }
      while ( v24 );
      *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
      *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
      *(_OWORD *)&v23->PointerCaps.0 = v25[2];
      *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
      *(_QWORD *)&v23->SchedulingCaps.0 = *((_QWORD *)v25 + 8);
      if ( v41 )
      {
        v27 = (_OWORD *)((char *)v41 + 1848);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
          *(_OWORD *)&a2->PointerCaps.0 = v27[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v27[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v27[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v27[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v28 = v27[7];
          v27 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v28;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
        *(_OWORD *)&a2->PointerCaps.0 = v27[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
        v29 = *((_QWORD *)v27 + 8);
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v8->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v8->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v8->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v38 = *(_OWORD *)&v8->GpuEngineTopology.Reserved[8];
          v8 = (struct _DXGK_DRIVERCAPS *)((char *)v8 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v38;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
        v29 = *(_QWORD *)&v8->SchedulingCaps.0;
      }
      v39 = 0LL;
      *(_QWORD *)&a2->SchedulingCaps.0 = v29;
      LODWORD(v15) = 0;
      v30 = v40;
      *(_QWORD *)&a3->Data1 = v21;
      *a4 = v30;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v48);
    COREACCESS::~COREACCESS((COREACCESS *)v47);
    DXGADAPTER_REFERENCE::Assign(&v41, 0LL);
  }
  DXGADAPTER_REFERENCE::Assign(&v39, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v31);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v43);
  return (unsigned int)v15;
}
