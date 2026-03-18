/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x1406FEC58
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406FEBF0 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14029D9AC (PiListEntryToDependencyEdge.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1406FED34 (PiGetDependentList.c)
 *     PiGetProviderList @ 0x140702D2C (PiGetProviderList.c)
 *     PipNotifyDependenciesChanged @ 0x14085E5D8 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipNotifyDeviceDependencyList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD **DependentList; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    DependentList = (_QWORD **)PiGetDependentList(v2);
  }
  else
  {
    DependentList = (_QWORD **)PiGetProviderList(v2);
  }
  v5 = *DependentList;
  v6 = DependentList;
  while ( v5 != v6 )
  {
    v7 = PiListEntryToDependencyEdge((__int64)v5, a2);
    v5 = (_QWORD *)*v5;
    if ( a2 )
    {
      v9 = *(_QWORD *)(v7 + 40);
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 32);
      v9 = 0LL;
    }
    PipNotifyDependenciesChanged(v9, v8);
  }
LABEL_5:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
