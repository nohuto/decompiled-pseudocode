/*
 * XREFs of PipClearDevNodeFlags @ 0x140707494
 * Callers:
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PiProcessReenumeration @ 0x140720024 (PiProcessReenumeration.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140721DD0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpProcessRelation @ 0x14072F16C (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x140750C40 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140750DA4 (IopReleaseResources.c)
 *     IopReleaseFilteredBootResources @ 0x140751758 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x140751D7C (PnpBuildCmResourceLists.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140874EA0 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14087AE38 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14087D17C (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
