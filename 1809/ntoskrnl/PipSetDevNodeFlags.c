/*
 * XREFs of PipSetDevNodeFlags @ 0x1406E637C
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E62BC (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x1406E95EC (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PnpQueryID @ 0x1406ED5F8 (PnpQueryID.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1406FD700 (PiMarkDeviceTreeForReenumeration.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14070E990 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083B62C (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x14083B77C (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408408C8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x1409DDA48 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
