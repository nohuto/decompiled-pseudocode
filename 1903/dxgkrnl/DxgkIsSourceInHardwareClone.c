/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C0149E00
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, GUID *a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rsi
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v28; // rax
  __int64 LowPart; // rcx
  __int64 v30; // rax
  unsigned int v31[2]; // [rsp+20h] [rbp-89h] BYREF
  int v32; // [rsp+28h] [rbp-81h] BYREF
  __int64 v33; // [rsp+30h] [rbp-79h]
  char v34; // [rsp+38h] [rbp-71h]
  _BYTE v35[8]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v36[64]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v37[72]; // [rsp+88h] [rbp-21h] BYREF

  v32 = -1;
  v33 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2175);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2175LL);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)v31);
  v13 = v9;
  if ( !v9 )
  {
    v30 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v30 + 24) = a1->HighPart;
    *(_QWORD *)(v30 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v30);
    LODWORD(v19) = -1073741811;
    goto LABEL_8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v9, 0LL);
  v15 = COREADAPTERACCESS::AcquireShared((__int64)v35, 0xFFFFFFFFLL, v14);
  v19 = v15;
  if ( v15 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v28[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v28[5] = v19;
LABEL_14:
    v28[4] = LowPart;
    WdLogEvent5_WdError(v28);
    goto LABEL_7;
  }
  v20 = DmmEnumClientVidPnPathTargetsFromSource(v13, (unsigned int)v5, 1uLL, v31);
  v19 = v20;
  if ( v20 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v28[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v28[5] = v5;
    v28[6] = v19;
    goto LABEL_14;
  }
  a3->Data1 = v31[0] != -1;
LABEL_7:
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v24);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)v19;
}
