/*
 * XREFs of PipSetDevNodeProblem @ 0x1407339B4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResources @ 0x140703C08 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x140703E88 (PnpQueryID.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140735D04 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x140861764 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086C5C0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessSetDeviceProblem @ 0x140874898 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087B46C (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceSetDevNodeProblem @ 0x14072E798 (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140877810 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v5; // esi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v3 = a3;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation(&P);
    PipSetDevNodeFlags(a1, 0x2000);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( a2 != v5 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12);
        v3 = *(_DWORD *)(a1 + 408);
      }
      if ( v3 != v7 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13);
        v3 = *(_DWORD *)(a1 + 408);
      }
      PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 404), v3, v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
