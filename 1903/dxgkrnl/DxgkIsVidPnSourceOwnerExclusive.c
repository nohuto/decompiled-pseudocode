/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C00CA620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, unsigned int a2, GUID *a3)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int VidPnSourceOwnerType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-79h] BYREF
  __int64 v20; // [rsp+28h] [rbp-71h]
  char v21; // [rsp+30h] [rbp-69h]
  _BYTE v22[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v23[64]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v24[72]; // [rsp+88h] [rbp-11h] BYREF

  v19 = -1;
  v20 = 0LL;
  v6 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 2182;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2182);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2182LL);
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v17 + 24) = 7391LL;
    WdLogEvent5_WdAssertion(v17);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v22, 0xFFFFFFFFLL, v9) < 0 )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  if ( !a1[319] )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v18 + 24) = 7401LL;
    WdLogEvent5_WdAssertion(v18);
  }
  LOBYTE(a3->Data1) = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[319], a2);
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType == 3 )
    {
      LOBYTE(a3->Data1) = 1;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_11:
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v13);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v19);
  return v6;
}
