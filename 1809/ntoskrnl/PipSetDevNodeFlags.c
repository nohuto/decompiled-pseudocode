/*
 * XREFs of PipSetDevNodeFlags @ 0x1406E50FC
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E503C (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x1406E836C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PnpQueryID @ 0x1406EC378 (PnpQueryID.c)
 *     IopReleaseDeviceResources @ 0x1406ED6A4 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateResources @ 0x1406FADDC (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB30C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1406FC480 (PiMarkDeviceTreeForReenumeration.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140709174 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14070D710 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x14072CEB4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14072DFBC (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5E0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3EC (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x14083A53C (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14083B374 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14083F688 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14083F824 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x1409C09B8 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x1409DCA48 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
