/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C7920
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C7E14 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct _D3DKMT_GETDISPLAYMODELIST *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct DXGADAPTER *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int DisplayModeList; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v38[7]; // [rsp+41h] [rbp-BFh] BYREF
  _D3DKMT_GETDISPLAYMODELIST v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  char v42; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v43; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v45[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v47[72]; // [rsp+D8h] [rbp-28h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3004LL);
  memset(&v39, 0, sizeof(v39));
  v37 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v43, &v44, 0);
    v11 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v30[3] = a1;
      v30[4] = a2->VidPnSourceId;
      v30[5] = v11;
      WdLogEvent5_WdEvent(v30);
    }
    else
    {
      v12 = v43;
      if ( !v43 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v10, v9);
        *(_QWORD *)(v31 + 24) = 1228LL;
        WdLogEvent5_WdAssertion(v31);
      }
      DxgkWaitForMonitorEventDoneInternal(v12);
      v38[0] = 0;
      v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v38, 0);
      v17 = v13;
      if ( v13 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v32 + 24) = v17;
        WdLogEvent5_WdError(v32);
        LODWORD(v11) = v17;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v12, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v12);
        v18 = COREADAPTERACCESS::AcquireShared((__int64)v45, 0xFFFFFFFFLL, 0LL);
        v11 = v18;
        if ( v18 < 0 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v33[3] = v11;
          v33[4] = PsGetCurrentProcess();
          v33[5] = a2->hAdapter;
          v33[6] = v12;
          WdLogEvent5_WdEvent(v33);
        }
        else
        {
          if ( !*((_QWORD *)v12 + 319) )
          {
            v34 = WdLogNewEntry5_WdAssertion(v20, v19);
            *(_QWORD *)(v34 + 24) = 1268LL;
            WdLogEvent5_WdAssertion(v34);
          }
          v39.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v12, (struct COREADAPTERACCESS *)v45, 0, &v39, &v37);
          v11 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v35 = WdLogNewEntry5_WdDmmEvent();
            *(_QWORD *)(v35 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v35 + 32) = v11;
            WdLogEvent5_WdDmmEvent(v35);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v39.ModeCount )
              {
                v36 = WdLogNewEntry5_WdWarning(pModeList, v22, v23);
                *(_QWORD *)(v36 + 24) = a2->ModeCount;
                *(_QWORD *)(v36 + 32) = v39.ModeCount;
                WdLogEvent5_WdWarning(v36);
                LODWORD(v11) = -1073741789;
              }
              else
              {
                memmove(pModeList, v39.pModeList, 44LL * v39.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v39.ModeCount;
            }
            if ( v37 )
            {
              operator delete[](v39.pModeList);
              v39.pModeList = 0LL;
            }
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v47);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
      }
      if ( v38[0] )
        DxgkReleaseSessionModeChangeLock();
    }
  }
  else
  {
    LODWORD(v11) = -1073741811;
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v29[3] = -1073741811LL;
    v29[4] = PsGetCurrentProcess();
    v29[5] = a2->hAdapter;
    WdLogEvent5_WdError(v29);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v25);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v40);
  return (unsigned int)v11;
}
