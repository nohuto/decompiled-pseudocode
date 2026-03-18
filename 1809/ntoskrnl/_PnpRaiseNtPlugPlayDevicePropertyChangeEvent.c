/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90
 * Callers:
 *     PipSetDevNodeState @ 0x140159DB8 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015A93C (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14015ACA0 (PipRestoreDevNodeState.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1406E50FC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1406E6500 (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PipClearDevNodeUserFlags @ 0x1406E9DBC (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14070BB5C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14070E260 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x140756DF4 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140763F10 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x1408241A8 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x1406E2D9C (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E5B04 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1406E6180 (_CmMapPropertyKeyToRegProp.c)
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
    v6 = qword_140355160[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
