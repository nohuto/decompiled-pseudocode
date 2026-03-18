/*
 * XREFs of PipNotifyDependenciesChanged @ 0x14085E5D8
 * Callers:
 *     PipCreateNewDependencyEdge @ 0x14029DA60 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x14029DBB4 (PipFreeDependencyEdge.c)
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PipMergeDependencyEdgeList @ 0x14085E3DC (PipMergeDependencyEdgeList.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipNotifyDependenciesChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 48);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 48);
        if ( v5 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 25);
      }
    }
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v8, 24);
      }
    }
  }
}
