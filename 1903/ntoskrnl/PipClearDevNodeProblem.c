/*
 * XREFs of PipClearDevNodeProblem @ 0x1406F8FDC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140702010 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14085E124 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140862064 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086CEC0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x140874EA0 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087BD6C (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14087BE18 (PiRestartRemovalRelations.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x14072CA64 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140878110 (PiAuditDeviceEnableDisableAction.c)
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
