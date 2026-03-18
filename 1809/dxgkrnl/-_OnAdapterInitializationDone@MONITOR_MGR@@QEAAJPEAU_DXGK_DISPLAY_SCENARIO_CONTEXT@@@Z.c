/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146F54
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C0146EE4 (MonitorInitializeAdapterDone.c)
 * Callees:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00BFEB8 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  int EmergentSimulatedTarget; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(
                              *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                              (unsigned int *)this + 40);
  v7 = *((unsigned int *)this + 40);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( (_DWORD)v7 == -1 )
      goto LABEL_3;
LABEL_5:
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
    goto LABEL_3;
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_5;
LABEL_3:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2);
  result = 0LL;
  *((_BYTE *)this + 5) = 1;
  return result;
}
