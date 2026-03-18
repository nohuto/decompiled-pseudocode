/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01382CC
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C0138250 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00C6164 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00C61B0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
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
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edx
  struct HDXGMONITOR__ *v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  struct HDXGMONITOR__ *v22; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v22);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v20[5] = (int)a2[1];
    v20[6] = *a2;
    v20[3] = v11;
    goto LABEL_10;
  }
  v12 = v8;
  v13 = v22;
  LODWORD(v11) = MonitorGetCCDMonitorID(v22, v12, a5);
  if ( (_DWORD)v11 == -2147483643 )
    LODWORD(v11) = -1073741789;
  v16 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v13, v14, v15);
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( (int)v11 >= 0 )
      return (unsigned int)v11;
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v20[3] = (int)v11;
    v20[6] = (int)a2[1];
    v20[7] = *a2;
    v20[5] = v13;
LABEL_10:
    v20[4] = v6;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v11;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17);
  v21[6] = (int)a2[1];
  v21[7] = *a2;
  v21[3] = v18;
  v21[4] = v6;
  v21[5] = v13;
  WdLogEvent5_WdAssertion(v21);
  return (unsigned int)v18;
}
