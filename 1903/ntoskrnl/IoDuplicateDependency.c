/*
 * XREFs of IoDuplicateDependency @ 0x14085DD10
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14029D9AC (PiListEntryToDependencyEdge.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1406FED34 (PiGetDependentList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140770138 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x1407701E8 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x14077028C (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x1407702A8 (PipCreateDependencyNode.c)
 *     PipDependencyCopyEdge @ 0x14085E2D8 (PipDependencyCopyEdge.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *BindingResolution; // rax
  _DWORD *DependencyNode; // rdi
  __int64 *DependentList; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v12[1] = 0;
  if ( a1 && a2 )
  {
    PnpAcquireDependencyRelationsLock(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      PnpReleaseDependencyRelationsLock();
      return v2;
    }
    v12[0] = 0;
    v13 = a2;
    BindingResolution = PipQueryBindingResolution((__int64)v12);
    DependencyNode = BindingResolution;
    if ( BindingResolution )
    {
      ++*((_DWORD *)BindingResolution + 22);
    }
    else
    {
      DependencyNode = (_DWORD *)PipCreateDependencyNode((__int64)v12);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = PiGetDependentList(a1);
    v8 = (__int64 *)*DependentList;
    if ( (__int64 *)*DependentList != DependentList )
    {
      while ( 1 )
      {
        v9 = PiListEntryToDependencyEdge((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = PipDependencyCopyEdge(v9, DependencyNode);
        if ( v10 < 0 )
          break;
        if ( v8 == DependentList )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    PipDereferenceDependencyNode(DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
