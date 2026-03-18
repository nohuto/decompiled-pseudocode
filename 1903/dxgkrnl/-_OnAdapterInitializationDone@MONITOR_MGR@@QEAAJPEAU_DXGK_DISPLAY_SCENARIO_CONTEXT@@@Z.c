/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175020
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C0174FB0 (MonitorInitializeAdapterDone.c)
 * Callees:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00DE8C8 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175098 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // r8
  int EmergentSimulatedTarget; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(
                              *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                              (unsigned int *)this + 40,
                              v4);
  v7 = *((unsigned int *)this + 40);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( (_DWORD)v7 == -1 )
      goto LABEL_3;
LABEL_5:
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
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
