/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C012CF38
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C012CFDC (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     MonitorGetCCDMonitorID @ 0x1C00EC934 (MonitorGetCCDMonitorID.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01297D0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01298E8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DpiPersistence::GetMonitorIdFromTargetId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        unsigned __int16 *a5)
{
  __int64 v6; // rsi
  unsigned __int16 v8; // bp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned int v14; // edx
  struct HDXGMONITOR__ *v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  struct HDXGMONITOR__ *v24; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v24);
  v13 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v22[5] = (int)a2[1];
    v22[6] = *a2;
    v22[3] = v13;
    goto LABEL_10;
  }
  v14 = v8;
  v15 = v24;
  LODWORD(v13) = MonitorGetCCDMonitorID(v24, v14, a5);
  if ( (_DWORD)v13 == -2147483643 )
    LODWORD(v13) = -1073741789;
  v16 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v15);
  v20 = v16;
  if ( v16 >= 0 )
  {
    if ( (int)v13 >= 0 )
      return (unsigned int)v13;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v22[3] = (int)v13;
    v22[6] = (int)a2[1];
    v22[7] = *a2;
    v22[5] = v15;
LABEL_10:
    v22[4] = v6;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v13;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17);
  v23[6] = (int)a2[1];
  v23[7] = *a2;
  v23[3] = v20;
  v23[4] = v6;
  v23[5] = v15;
  WdLogEvent5_WdAssertion(v23);
  return (unsigned int)v20;
}
