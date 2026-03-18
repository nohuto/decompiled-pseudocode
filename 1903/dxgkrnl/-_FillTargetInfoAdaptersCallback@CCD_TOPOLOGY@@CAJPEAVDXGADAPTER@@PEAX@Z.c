/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D8350
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00FC21C (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rax
  MONITOR_MGR *v17; // rcx
  int MonitorInformationForTargets; // eax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v23[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v24[72]; // [rsp+68h] [rbp-60h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 69)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 70) )
    {
      v5 = *((_QWORD *)a2 + 8);
      break;
    }
  }
  if ( v5 )
    v7 = *(_WORD *)(v5 + 20);
  else
    v7 = 0;
  if ( i >= v7 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((__int64)v22, 0xFFFFFFFFLL, v9);
  v15 = v10;
  if ( v10 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v19[3] = v15;
    goto LABEL_29;
  }
  if ( !a1 )
    goto LABEL_22;
  v16 = *((_QWORD *)a1 + 319);
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    MonitorInformationForTargets = -1073741275;
    goto LABEL_18;
  }
  v17 = *(MONITOR_MGR **)(v16 + 96);
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, v11, v13);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
LABEL_22:
    MonitorInformationForTargets = -1073741811;
    goto LABEL_18;
  }
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   v17,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                   a2,
                                   v14);
LABEL_18:
  LODWORD(v15) = 0;
  if ( MonitorInformationForTargets != -1073741275 )
    LODWORD(v15) = MonitorInformationForTargets;
  if ( (int)v15 >= 0 )
    goto LABEL_21;
  v19 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
  v19[3] = (int)v15;
LABEL_29:
  v19[4] = a1;
  v19[5] = *((int *)a1 + 70);
  v19[6] = *((unsigned int *)a1 + 69);
  v19[7] = *((_QWORD *)a2 + 8);
  WdLogEvent5_WdError(v19);
LABEL_21:
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  return (unsigned int)v15;
}
