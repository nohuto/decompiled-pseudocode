/*
 * XREFs of PipClearDevNodeProblem @ 0x1406F6CF8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14015A93C (PnpRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x1406E8554 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PiProcessClearDeviceProblem @ 0x14075FDBC (PiProcessClearDeviceProblem.c)
 *     PipAttemptDependentStart @ 0x140823CF4 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140827CB8 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408324D0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3EC (PiProcessResourceRequirementsChanged.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140840338 (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x1408403E4 (PiRestartRemovalRelations.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060A3C0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1406E6500 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x14070DDDC (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14083CF44 (PiAuditDeviceEnableDisableAction.c)
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
    PipClearDevNodeFlags(a1, 0x2000);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
