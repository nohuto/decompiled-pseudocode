/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C014361C
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C0128C70 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00D2C64 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C014372C (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  ADAPTER_DISPLAY *v10; // rcx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    if ( !a1[315] )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !a1[316] )
      return 0LL;
    v6 = a1[315];
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
      v10 = (ADAPTER_DISPLAY *)a1[315];
      v17 = v9;
      if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v10, a2)
        && v9
        && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), a2) )
      {
        MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                        (DMMVIDPNTOPOLOGY *)(v9 + 96),
                                        a2);
        if ( MostImportantPathFromSource )
          v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL) + 520LL) + 24LL);
        else
          v13 = 13;
        if ( v13 == 14 && !DMMVIDPN::IsPathFromSourcePoweredOff((DMMVIDPN *)v9, v12) )
          *a3 = 1;
      }
      auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
      return 0LL;
    }
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = a1;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v15);
  return 3221225473LL;
}
