/*
 * XREFs of PipSetDevNodeFlags @ 0x1406E50DC
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DA64C (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E10 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E501C (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1406E6C4C (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x1406E834C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     PnpQueryID @ 0x1406EC358 (PnpQueryID.c)
 *     IopReleaseDeviceResources @ 0x1406ED684 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1406EF560 (PipSetDevNodeProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateResources @ 0x1406FADBC (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB2EC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBBF8 (PiQueryResourceRequirements.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1406FC460 (PiMarkDeviceTreeForReenumeration.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140709154 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14070D6F0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x14072CE94 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14072DF9C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5C0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3CC (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x14083A51C (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14083B354 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14083F668 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14083F804 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x1409C09B8 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x1409DCA48 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A70 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
