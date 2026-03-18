/*
 * XREFs of PipSetDevNodeFlags @ 0x14070618C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x140701E28 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x1407020A8 (PnpQueryID.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407060CC (PipProcessEnumeratedChildDevice.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407200D8 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140721F88 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140733AA4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140739BA0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140751D7C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1407523C0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140875198 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14087B0C8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14087B260 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x1409F48B0 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140A1FC60 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
