/*
 * XREFs of PipSetDevNodeFlags @ 0x140707F6C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x140703C08 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x140703E88 (PnpQueryID.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140721F78 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateResources @ 0x1407238F0 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140723E28 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140724720 (PiQueryResourceRequirements.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140735D04 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14073BE30 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14075280C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140752E50 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x140874740 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140874898 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14087A7C8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14087A960 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x1409F47C0 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140A1FE40 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
