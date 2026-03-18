/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30
 * Callers:
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x140173CB4 (PipRestoreDevNodeState.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x1407017E0 (PipClearDevNodeUserFlags.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1407371C0 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14073AB78 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x14077D5D0 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x14078A8D0 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14085E5D8 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x140703F44 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140706AA4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x140707114 (_CmMapPropertyKeyToRegProp.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_140375170[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
