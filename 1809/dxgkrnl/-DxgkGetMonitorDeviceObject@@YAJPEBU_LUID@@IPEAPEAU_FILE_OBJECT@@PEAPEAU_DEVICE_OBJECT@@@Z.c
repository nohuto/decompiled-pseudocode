/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01309A0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDeviceObject @ 0x1C0130AF0 (MonitorGetDeviceObject.c)
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
  __int64 v12; // rcx
  DXGADAPTER *v13; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _LUID v32; // [rsp+28h] [rbp-39h] BYREF
  int v33; // [rsp+30h] [rbp-31h] BYREF
  __int64 v34; // [rsp+38h] [rbp-29h]
  char v35; // [rsp+40h] [rbp-21h]
  unsigned __int64 v36; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v37[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v38[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v39[40]; // [rsp+80h] [rbp+1Fh] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+67h] BYREF

  v33 = -1;
  v34 = 0LL;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2166);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2166);
  if ( !a1 || !a3 || !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(v13) = -1073741811;
    v29[3] = -1073741811LL;
LABEL_21:
    WdLogEvent5_WdWarning(v29);
    goto LABEL_12;
  }
  v32 = *a1;
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v32, v7, &v32, &v40);
  v13 = (DXGADAPTER *)v11;
  if ( v11 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v12);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v32, &v36);
    v13 = v15;
    if ( v15 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v15, 0LL);
      DXGADAPTER::ReleaseReference(v13);
      if ( *((_QWORD *)v13 + 315) )
      {
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
        v24 = v20;
        if ( v20 < 0 )
        {
          v31 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v31 + 24) = v13;
          *(_QWORD *)(v31 + 32) = v24;
          WdLogEvent5_WdWarning(v31);
          LODWORD(v13) = v24;
        }
        else
        {
          LODWORD(v13) = MonitorGetDeviceObject(v13, v40, a3, a4);
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v30 + 24) = v13;
        LODWORD(v13) = -1073741811;
        *(_QWORD *)(v30 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      goto LABEL_12;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v13) = -1073741811;
    v29[3] = v32.LowPart;
    v29[4] = v32.HighPart;
    v29[5] = -1073741811LL;
    goto LABEL_21;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v28[3] = a1->LowPart;
  v28[4] = a1->HighPart;
  v28[5] = v7;
  v28[6] = v13;
  WdLogEvent5_WdError(v28);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v33);
  return (unsigned int)v13;
}
