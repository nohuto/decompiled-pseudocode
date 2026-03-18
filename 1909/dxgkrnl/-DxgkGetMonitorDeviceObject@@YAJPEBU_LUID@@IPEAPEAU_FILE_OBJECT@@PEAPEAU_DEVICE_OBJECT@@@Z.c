/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01428D0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F8E80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDeviceObject @ 0x1C0142A34 (MonitorGetDeviceObject.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *v15; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _LUID v37; // [rsp+20h] [rbp-A9h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-A1h] BYREF
  int v39; // [rsp+30h] [rbp-99h] BYREF
  __int64 v40; // [rsp+38h] [rbp-91h]
  char v41; // [rsp+40h] [rbp-89h]
  unsigned __int64 v42; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v43[8]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v44[64]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v45[72]; // [rsp+98h] [rbp-31h] BYREF

  v39 = -1;
  v40 = 0LL;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2166);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2166LL);
  if ( !a1 || !a3 || !a4 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(v15) = -1073741811;
    v34[3] = -1073741811LL;
LABEL_21:
    WdLogEvent5_WdWarning(v34);
    goto LABEL_12;
  }
  v37 = *a1;
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v37, (unsigned int)v7, &v37, &v38);
  v15 = (DXGADAPTER *)v11;
  if ( v11 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v37, &v42);
    v15 = v17;
    if ( v17 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v17, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
      if ( *((_QWORD *)v15 + 319) )
      {
        v24 = COREADAPTERACCESS::AcquireShared((__int64)v43, 0xFFFFFFFFLL, 0LL);
        v28 = v24;
        if ( v24 < 0 )
        {
          v36 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v36 + 24) = v15;
          *(_QWORD *)(v36 + 32) = v28;
          WdLogEvent5_WdWarning(v36);
          LODWORD(v15) = v28;
        }
        else
        {
          LODWORD(v15) = MonitorGetDeviceObject(v15, v38, a3, a4);
        }
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v35 + 24) = v15;
        LODWORD(v15) = -1073741811;
        *(_QWORD *)(v35 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v35);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      goto LABEL_12;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    LODWORD(v15) = -1073741811;
    v34[3] = v37.LowPart;
    v34[4] = v37.HighPart;
    v34[5] = -1073741811LL;
    goto LABEL_21;
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
  v33[3] = a1->LowPart;
  v33[4] = a1->HighPart;
  v33[5] = v7;
  v33[6] = v15;
  WdLogEvent5_WdError(v33);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v29);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v39);
  return (unsigned int)v15;
}
