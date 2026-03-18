/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02398A8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C01D5F70 (DxgkPollDisplayChildren.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C023B9D0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkSetPresenterViewMode @ 0x1C013AE30 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023B0F4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  char v16; // r12
  char v17; // cl
  __int64 v19; // [rsp+30h] [rbp-91h] BYREF
  __int64 v20; // [rsp+38h] [rbp-89h]
  int v21; // [rsp+40h] [rbp-81h]
  int v22; // [rsp+44h] [rbp-7Dh]
  int v23; // [rsp+48h] [rbp-79h]
  __int16 v24; // [rsp+4Ch] [rbp-75h]
  char v25; // [rsp+4Eh] [rbp-73h]
  unsigned int v26; // [rsp+50h] [rbp-71h]
  struct _LUID v27; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v28[12]; // [rsp+60h] [rbp-61h] BYREF

  v22 = -1;
  v27 = a1;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v23 = 257;
  v9 = 0;
  v24 = 0;
  v10 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( a3 == 11 )
    LOWORD(v23) = 0;
  else
    *(_BYTE *)a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_11;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_11:
      DxgkSetPresenterViewMode(0LL, 0);
      v11 = HandleMonitorDepartureCase(&v19, &v27, a2, a3, a4, a5 + 24);
      goto LABEL_25;
    }
    v12 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_24;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_24:
    DxgkSetPresenterViewMode(0LL, 0);
    v11 = HandleMonitorArrival(&v19, &v27, a2, a3, a4, a5 + 24);
    goto LABEL_25;
  }
  if ( a3 != 6 )
    goto LABEL_27;
  if ( a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 4249LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v11 = HandleRapidHPDAction(
          (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v19,
          &v27,
          a2,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_25:
  v9 = v11;
  if ( v11 < 0 )
  {
LABEL_36:
    v16 = BYTE1(v23);
    goto LABEL_37;
  }
  v10 = HIDWORD(v19);
LABEL_27:
  if ( !(_DWORD)v10 )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v27);
    if ( v15 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v15 + 2408)))) & 0x10;
      DXGADAPTER::ReleaseReference(v15);
    }
  }
  if ( a3 && a3 != 11 || (LOBYTE(v10) = 32, a4 != 1) )
    LOBYTE(v10) = 0;
  LOBYTE(v10) = v10 & 0x20;
  *(_BYTE *)a5 |= v10;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v10) + 20313) )
    goto LABEL_36;
  v16 = BYTE1(v23);
  v17 = *(_BYTE *)a5 | (BYTE1(v23) != 0 ? 4 : 0);
  *(_BYTE *)a5 = (v25 != 0 ? 0x40 : 0) | (v17 ^ (v17 ^ (v17 | ((_BYTE)v24 != 0 ? 8 : 0))) & 8) & 0xBF;
LABEL_37:
  memset(v28, 0, sizeof(v28));
  memset(&v28[1], 0, 36);
  v28[0] = 0x6000000002LL;
  HIDWORD(v28[6]) = a3;
  v28[7] = a4;
  v28[11] = __PAIR64__(HIDWORD(v19), v20);
  LODWORD(v28[6]) = v16 & 1 | (4 * (BYTE2(v23) & 1 | (2 * (HIBYTE(v23) & 1))));
  v28[8] = a1;
  v28[9] = __PAIR64__(v26, a2);
  v28[10] = __PAIR64__(v19, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28);
  return v9;
}
