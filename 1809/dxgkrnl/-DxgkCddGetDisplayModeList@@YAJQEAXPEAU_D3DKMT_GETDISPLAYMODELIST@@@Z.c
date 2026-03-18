/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121B30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0121FA8 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct _D3DKMT_GETDISPLAYMODELIST *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct DXGADAPTER *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int DisplayModeList; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _D3DKMT_GETDISPLAYMODELIST v35; // [rsp+30h] [rbp-49h] BYREF
  int v36; // [rsp+48h] [rbp-31h] BYREF
  __int64 v37; // [rsp+50h] [rbp-29h]
  char v38; // [rsp+58h] [rbp-21h]
  _BYTE v39[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v40[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v41[72]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int8 v42; // [rsp+E0h] [rbp+67h] BYREF
  struct DXGADAPTER *v43; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v44; // [rsp+F8h] [rbp+7Fh] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 3004);
  memset(&v35, 0, sizeof(v35));
  v42 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v43, &v44);
    v9 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
      v28[3] = a1;
      v28[4] = a2->VidPnSourceId;
      v28[5] = v9;
      WdLogEvent5_WdEvent(v28);
    }
    else
    {
      v10 = v43;
      if ( !v43 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v29 + 24) = 1231LL;
        WdLogEvent5_WdAssertion(v29);
      }
      DxgkWaitForMonitorEventDoneInternal(v10);
      LOBYTE(v43) = 0;
      v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 0);
      v13 = v11;
      if ( v11 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v30 + 24) = v13;
        WdLogEvent5_WdError(v30);
        LODWORD(v9) = v13;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v10, 0LL);
        DXGADAPTER::ReleaseReference(v10);
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
        v9 = v14;
        if ( v14 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
          v31[3] = v9;
          v31[4] = PsGetCurrentProcess();
          v31[5] = a2->hAdapter;
          v31[6] = v10;
          WdLogEvent5_WdEvent(v31);
        }
        else
        {
          if ( !*((_QWORD *)v10 + 315) )
          {
            v32 = WdLogNewEntry5_WdAssertion(v16);
            *(_QWORD *)(v32 + 24) = 1271LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v35.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v10, (struct COREADAPTERACCESS *)v39, 0, &v35, &v42);
          v9 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v33 = WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
            *(_QWORD *)(v33 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v33 + 32) = v9;
            WdLogEvent5_WdDmmEvent(v33);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v35.ModeCount )
              {
                v34 = WdLogNewEntry5_WdWarning(pModeList, v18, v20);
                *(_QWORD *)(v34 + 24) = a2->ModeCount;
                *(_QWORD *)(v34 + 32) = v35.ModeCount;
                WdLogEvent5_WdWarning(v34);
                LODWORD(v9) = -1073741789;
              }
              else
              {
                memmove(pModeList, v35.pModeList, 44LL * v35.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v35.ModeCount;
            }
            if ( v42 )
            {
              operator delete[](v35.pModeList);
              v35.pModeList = 0LL;
            }
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v41);
        COREACCESS::~COREACCESS((COREACCESS *)v40);
      }
      if ( (_BYTE)v43 )
        DxgkReleaseSessionModeChangeLock(v23);
    }
  }
  else
  {
    LODWORD(v9) = -1073741811;
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v27[3] = -1073741811LL;
    v27[4] = PsGetCurrentProcess();
    v27[5] = a2->hAdapter;
    WdLogEvent5_WdError(v27);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v36);
  return (unsigned int)v9;
}
