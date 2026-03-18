/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DF914
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF4A8 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0296234 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00DF994 (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2)
{
  struct HDXGMONITOR__ *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  int MonitorType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax

  *(_DWORD *)a2 = 0;
  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v3 )
    return 0;
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
    v6 = *((_QWORD *)this + 5);
  }
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *(_QWORD *)(v8 + 16);
  MonitorType = MonitorGetMonitorType(v3);
  v14 = MonitorType;
  if ( MonitorType < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v17[3] = v3;
    v17[4] = v9;
    v17[5] = v14;
    WdLogEvent5_WdError(v17);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
