/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x1406A25E4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x1406A2470 (IopDeleteDevice.c)
 * Callees:
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140770138 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140784370 (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall PnpDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
    }
    PnpReleaseDependencyRelationsLock();
    if ( v3 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
