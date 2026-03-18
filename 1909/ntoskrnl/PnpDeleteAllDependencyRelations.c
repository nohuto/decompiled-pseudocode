/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x14066FAC4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x14066F950 (IopDeleteDevice.c)
 * Callees:
 *     PnpReleaseDependencyRelationsLock @ 0x14066FC88 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14077371C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1407866D0 (PipDeleteAllDependencyRelations.c)
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
