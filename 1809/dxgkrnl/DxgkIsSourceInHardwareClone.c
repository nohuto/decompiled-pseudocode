/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C0139690
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, GUID *a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  const GUID *v17; // r8
  _QWORD *v19; // rax
  __int64 LowPart; // rcx
  __int64 v21; // rax
  int v22; // [rsp+28h] [rbp-29h] BYREF
  __int64 v23; // [rsp+30h] [rbp-21h]
  char v24; // [rsp+38h] [rbp-19h]
  _BYTE v25[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v26[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v27[40]; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned __int64 v28; // [rsp+D0h] [rbp+7Fh] BYREF

  v22 = -1;
  v23 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2175);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2175);
  Global = DXGGLOBAL::GetGlobal(v6);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v28);
  v10 = v8;
  if ( !v8 )
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = a1->HighPart;
    *(_QWORD *)(v21 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v21);
    LODWORD(v13) = -1073741811;
    goto LABEL_8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v8, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
  v13 = v11;
  if ( v11 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v19[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v19[5] = v13;
LABEL_14:
    v19[4] = LowPart;
    WdLogEvent5_WdError(v19);
    goto LABEL_7;
  }
  v14 = DmmEnumClientVidPnPathTargetsFromSource(v10, v5, 1uLL, (unsigned int *const)&v28);
  v13 = v14;
  if ( v14 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v19[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v19[5] = v5;
    v19[6] = v13;
    goto LABEL_14;
  }
  a3->Data1 = v28 != -1;
LABEL_7:
  DXGADAPTER::ReleaseReference(v10);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  COREACCESS::~COREACCESS((COREACCESS *)v26);
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v22);
  return (unsigned int)v13;
}
