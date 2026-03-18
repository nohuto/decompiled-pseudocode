/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C020D140
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01FCFC8 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *this, const struct _DXGKARG_SETPALETTE *a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rsi
  ADAPTER_DISPLAY **v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  const GUID *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  char v34; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v35; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v41[72]; // [rsp+C8h] [rbp-38h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 3010LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  PairingAdapters = DxgkpGetPairingAdapters(this, a2->VidPnSourceId, &v36, &v38, &v35, &v37, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v15 = (__int64 *)v36;
    v16 = (ADAPTER_DISPLAY **)v35;
    if ( !v36 || !v35 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v17 + 24) = 2278LL;
      WdLogEvent5_WdAssertion(v17);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)&v39,
      (struct DXGADAPTER *const)v15,
      (struct DXGADAPTER *const)v16);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v15);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v16);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v39, 2LL);
    v12 = v18;
    if ( v18 >= 0 )
    {
      if ( !v15[320] )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v22 + 24) = 2295LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( !v16[319] )
      {
        v23 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v23 + 24) = 2296LL;
        WdLogEvent5_WdAssertion(v23);
      }
      ADAPTER_RENDER::FlushScheduler(v15[320], 6, 0xFFFFFFFF, 0);
      v12 = (int)ADAPTER_DISPLAY::DdiSetPalette(v16[319], a2, v24);
      ADAPTER_RENDER::FlushScheduler(v15[320], 7, 0xFFFFFFFF, 0);
      if ( (int)v12 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
        v28[3] = v12;
        v28[4] = v16;
        v28[5] = a2->VidPnSourceId;
        v28[6] = Current;
        WdLogEvent5_WdError(v28);
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20);
      v21[3] = v12;
      v21[4] = v15;
      v21[5] = v16;
      v21[6] = Current;
      WdLogEvent5_WdEvent(v21);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdError(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v14);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v12;
}
