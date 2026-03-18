/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0204450 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0270D40 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkSetPresenterViewMode @ 0x1C014F490 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026EDBC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FF54 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  struct _LUID v6; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // r15
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v20; // eax
  __int64 v21; // r8
  struct _LUID v23; // [rsp+30h] [rbp-91h] BYREF
  int v24; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-85h]
  __int64 v26; // [rsp+40h] [rbp-81h]
  int v27; // [rsp+48h] [rbp-79h]
  int v28; // [rsp+4Ch] [rbp-75h]
  int v29; // [rsp+50h] [rbp-71h]
  __int16 v30; // [rsp+54h] [rbp-6Dh]
  char v31; // [rsp+56h] [rbp-6Bh]
  int v32; // [rsp+58h] [rbp-69h]
  _DWORD v33[2]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v34; // [rsp+68h] [rbp-59h]
  __int64 v35; // [rsp+70h] [rbp-51h]
  __int64 v36; // [rsp+78h] [rbp-49h]
  __int64 v37; // [rsp+80h] [rbp-41h]
  int v38; // [rsp+88h] [rbp-39h]
  int v39; // [rsp+8Ch] [rbp-35h]
  unsigned int v40; // [rsp+90h] [rbp-31h]
  unsigned int v41; // [rsp+94h] [rbp-2Dh]
  __int64 v42; // [rsp+98h] [rbp-29h]
  struct _LUID v43; // [rsp+A0h] [rbp-21h]
  unsigned int v44; // [rsp+A8h] [rbp-19h]
  int v45; // [rsp+ACh] [rbp-15h]
  unsigned int v46; // [rsp+B0h] [rbp-11h]
  int v47; // [rsp+B4h] [rbp-Dh]
  int v48; // [rsp+B8h] [rbp-9h]
  unsigned int v49; // [rsp+BCh] [rbp-5h]

  v28 = -1;
  v5 = 0;
  v24 = 0;
  v6 = a1;
  v32 = 0;
  *(_BYTE *)a5 |= 2u;
  v23 = a1;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v10 = a2;
  v27 = 0;
  v29 = 257;
  v30 = 0;
  v31 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0LL, 0LL);
      v11 = HandleMonitorDepartureCase(&v24, &v23, v10, a3, a4, a5 + 24);
      goto LABEL_22;
    }
    v12 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v11 = HandleMonitorArrival(&v24, &v23, v10, a3, a4, a5 + 24);
    goto LABEL_22;
  }
  if ( a3 != 6 )
    goto LABEL_24;
  if ( a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v13 + 24) = 4262LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v11 = HandleRapidHPDAction(
          (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v24,
          &v23,
          v10,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_22:
  v6 = v23;
  v5 = v11;
  if ( v11 < 0 )
    goto LABEL_38;
  v9 = v25;
LABEL_24:
  if ( !(_DWORD)v9 )
  {
    Global = DXGGLOBAL::GetGlobal(v9, a2);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v6, (unsigned __int64 *)&v23);
    if ( v15 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v15 + 2432)))) & 0x10;
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
    }
  }
  if ( a3 || a4 != 1 )
    LOBYTE(v9) = 0;
  else
    LOBYTE(v9) = 32;
  LOBYTE(v9) = v9 & 0x20;
  *(_BYTE *)a5 |= v9;
  v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, a2) + 74);
  if ( v17 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, a2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
  else
  {
    LOBYTE(a2) = (v31 != 0 ? 0x40 : 0) | *(_BYTE *)a5 & 0xBF | (BYTE1(v29) != 0 ? 4 : 0) | ((_BYTE)v30 != 0 ? 8 : 0);
    *(_BYTE *)a5 = a2;
  }
LABEL_38:
  v38 = 0;
  v37 = 0LL;
  v39 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33[0] = 2;
  v33[1] = 96;
  v41 = a3;
  v45 = v32;
  v47 = v24;
  v48 = v26;
  v49 = v25;
  v40 = BYTE1(v29) & 1 | (4 * (BYTE2(v29) & 1 | (2 * (HIBYTE(v29) & 1))));
  v42 = a4;
  v43 = v6;
  v44 = v10;
  v46 = v5;
  v20 = PsGetCurrentProcessSessionId(v40, a2);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v20, v21);
  return v5;
}
