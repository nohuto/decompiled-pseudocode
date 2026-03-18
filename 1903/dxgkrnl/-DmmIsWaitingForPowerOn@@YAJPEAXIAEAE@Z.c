/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0154CD0
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C01347A0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005570 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00E60E0 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C0154DE0 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // r8
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  int TargetLinkTrainingStatus; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v4 = a2;
  if ( a1 )
  {
    if ( !a1[319] )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !a1[320] )
      return 0LL;
    v6 = a1[319];
    v7 = *(_QWORD *)(v6 + 88);
    if ( v7 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, *(_QWORD *)(v6 + 88));
      v8 = *(_QWORD *)(v7 + 88);
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 32));
        v9 = *(_QWORD *)(v7 + 88);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = (ADAPTER_DISPLAY *)a1[319];
      v17 = v9;
      if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v10, v4)
        && v9
        && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v4) )
      {
        MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                        (DMMVIDPNTOPOLOGY *)(v9 + 96),
                                        v4);
        if ( MostImportantPathFromSource )
          TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                       *(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL),
                                       0LL);
        else
          TargetLinkTrainingStatus = 13;
        if ( TargetLinkTrainingStatus == 14 && !DMMVIDPN::IsPathFromSourcePoweredOff((DMMVIDPN *)v9, v4) )
          *a3 = 1;
      }
      auto_rc<DMMVIDPN const>::reset(&v17, 0LL, v11);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
      return 0LL;
    }
    v15 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v15 + 24) = a1;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v15);
  return 3221225473LL;
}
