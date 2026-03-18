/*
 * XREFs of PipClearDevNodeFlags @ 0x1406E6500
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1406E7F30 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     IopRemoveDevice @ 0x1406ECE24 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED448 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCD0 (PnpInvalidateRelationsInList.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     PnpAllocateResources @ 0x1406FADDC (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FB154 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessReenumeration @ 0x1406FC3D4 (PiProcessReenumeration.c)
 *     IopRemoveLegacyDeviceNode @ 0x14072CFE4 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x14072D148 (IopReleaseResources.c)
 *     IopReleaseFilteredBootResources @ 0x14072D9A8 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14072DFBC (PnpBuildCmResourceLists.c)
 *     PiProcessClearDeviceProblem @ 0x14075FDBC (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3EC (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14083B374 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14083F3F8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x140841780 (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
