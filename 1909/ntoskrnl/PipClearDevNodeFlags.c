/*
 * XREFs of PipClearDevNodeFlags @ 0x140709274
 * Callers:
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PiProcessReenumeration @ 0x140721EC4 (PiProcessReenumeration.c)
 *     PnpAllocateResources @ 0x1407238F0 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140723C70 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x14073209C (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407516D0 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140751834 (IopReleaseResources.c)
 *     IopReleaseFilteredBootResources @ 0x1407521E8 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14075280C (PnpBuildCmResourceLists.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x1408745A0 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140874740 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14087A538 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14087C87C (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
