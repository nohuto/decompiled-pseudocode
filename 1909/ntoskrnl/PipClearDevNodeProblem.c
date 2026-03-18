/*
 * XREFs of PipClearDevNodeProblem @ 0x1406FADBC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140703DF0 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14085D824 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140861764 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086C5C0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x1408745A0 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140874740 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087B46C (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14087B518 (PiRestartRemovalRelations.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x14072E904 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140877810 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags(a1, 0x2000LL);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13LL);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
