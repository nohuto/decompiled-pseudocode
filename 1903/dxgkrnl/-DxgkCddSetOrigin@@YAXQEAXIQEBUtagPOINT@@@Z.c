/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00C9FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00018A0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const GUID *a3)
{
  __int64 v5; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  DXGADAPTER ***v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  ADAPTER_DISPLAY *v15; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG Data1; // r9d
  LONG v19; // r10d
  __int64 v20; // rdx
  DXGADAPTER *v21; // r8
  int v22; // ecx
  int v23; // ecx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct tagRECT v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h]
  char v35; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v39[72]; // [rsp+B8h] [rbp-48h] BYREF

  v33 = -1;
  v34 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3014);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 3014LL);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v5, 0LL, 0LL, &v36, (unsigned __int64 *)&v32, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v28[3] = a1;
    v28[4] = v5;
    v28[5] = v10;
    WdLogEvent5_WdError(v28);
  }
  else
  {
    v11 = (DXGADAPTER ***)v36;
    if ( !v36 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v29 + 24) = 2358LL;
      WdLogEvent5_WdAssertion(v29);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v37, (struct DXGADAPTER *const)v11, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v11);
    v12 = COREADAPTERACCESS::AcquireExclusive(&v37, 1LL, 0LL);
    v14 = v12;
    if ( v12 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v31[3] = v14;
      v31[4] = v5;
      v31[5] = v11;
      v31[6] = (int)a3->Data1;
      v31[7] = *(int *)&a3->Data2;
      WdLogEvent5_WdEvent(v31);
    }
    else
    {
      v15 = (ADAPTER_DISPLAY *)v11[319];
      if ( !v15 )
      {
        v30 = WdLogNewEntry5_WdAssertion(0LL, v13);
        *(_QWORD *)(v30 + 24) = 2369LL;
        WdLogEvent5_WdAssertion(v30);
        v15 = (ADAPTER_DISPLAY *)v11[319];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v15, v5);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->Data1 - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->Data1;
        *((_DWORD *)SessionViewOwner + 9) += *(_DWORD *)&a3->Data2 - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = *(_DWORD *)&a3->Data2;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v11[319], v5);
      Data1 = a3->Data1;
      v19 = *(_DWORD *)&a3->Data2;
      v20 = 3968 * v5;
      v21 = v11[319][14];
      v22 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v32.left = a3->Data1;
      v32.top = v19;
      if ( (v22 & 0xFFFFFFFD) != 0 )
      {
        v32.right = Data1 + *(_DWORD *)((char *)v21 + v20 + 644);
        v23 = *(_DWORD *)((char *)v21 + v20 + 648);
      }
      else
      {
        v32.right = Data1 + *(_DWORD *)((char *)v21 + v20 + 648);
        v23 = *(_DWORD *)((char *)v21 + v20 + 644);
      }
      v32.bottom = v19 + v23;
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v24[3] = v5;
      v24[4] = v11;
      v24[5] = (int)a3->Data1;
      v24[6] = *(int *)&a3->Data2;
      v24[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v24);
      ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v11[319], v5, &v32);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v25);
  if ( v35 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v33);
  }
}
