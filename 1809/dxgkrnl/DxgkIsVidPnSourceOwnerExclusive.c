/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C0138A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, unsigned int a2, GUID *a3)
{
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rcx
  int VidPnSourceOwnerType; // eax
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+28h] [rbp-19h] BYREF
  __int64 v16; // [rsp+30h] [rbp-11h]
  char v17; // [rsp+38h] [rbp-9h]
  _BYTE v18[8]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v20[40]; // [rsp+70h] [rbp+2Fh] BYREF

  v15 = -1;
  v16 = 0LL;
  v6 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2182;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2182);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2182);
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v13 + 24) = 6985LL;
    WdLogEvent5_WdAssertion(v13);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18) < 0 )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  if ( !a1[315] )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 6995LL;
    WdLogEvent5_WdAssertion(v14);
  }
  LOBYTE(a3->Data1) = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[315], a2);
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
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v15);
  return v6;
}
