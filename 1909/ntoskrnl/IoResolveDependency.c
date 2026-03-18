/*
 * XREFs of IoResolveDependency @ 0x140192FF0
 * Callers:
 *     <none>
 * Callees:
 *     PnpReleaseDependencyRelationsLock @ 0x14066FC88 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140700804 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAttemptDependentsStart @ 0x140700AE0 (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14077371C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipAddBindingId @ 0x14077374C (PipAddBindingId.c)
 *     PipQueryBindingResolution @ 0x1407737CC (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140773870 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x14077388C (PipCreateDependencyNode.c)
 *     PipDeleteBindingId @ 0x14085D940 (PipDeleteBindingId.c)
 *     PipIsProviderStarted @ 0x14085DA84 (PipIsProviderStarted.c)
 *     PipLinkDeviceObjectAndDependencyNode @ 0x14085DAC0 (PipLinkDeviceObjectAndDependencyNode.c)
 *     PipMergeDependencyNodes @ 0x14085DC60 (PipMergeDependencyNodes.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14085DE10 (PipUnlinkDeviceObjectAndDependencyNode.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi
  __int64 BindingResolution; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 DependencyNode; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // rdx
  _DWORD v20[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]

  v20[1] = 0;
  v2 = a1;
  LOBYTE(a1) = 1;
  v4 = 0;
  PnpAcquireDependencyRelationsLock(a1);
  v20[0] = 1;
  v21 = v2;
  BindingResolution = PipQueryBindingResolution(v20);
  v7 = (_QWORD *)BindingResolution;
  if ( BindingResolution )
  {
    v16 = *(_QWORD *)(BindingResolution + 48);
    if ( v16 )
    {
      if ( v16 == a2 )
        goto LABEL_15;
      v4 = PipDeleteBindingId(v7, v2);
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( !v7[6] )
      {
        if ( a2 )
          v17 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
        else
          v17 = 0LL;
        if ( v17 )
        {
          if ( a2 )
            v18 = *(void **)(*(_QWORD *)(a2 + 312) + 80LL);
          else
            v18 = 0LL;
          PipMergeDependencyNodes(v18, v7);
        }
        else
        {
          PipLinkDeviceObjectAndDependencyNode(a2, v7);
        }
      }
      goto LABEL_8;
    }
  }
  if ( a2 )
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v20[0] = 0;
    v21 = a2;
    DependencyNode = PipCreateDependencyNode(v20, v6, v7);
    v11 = DependencyNode;
    if ( DependencyNode )
    {
      v4 = PipAddBindingId(DependencyNode, v2, v10);
      if ( v4 >= 0 )
      {
        PipDereferenceDependencyNode(v11);
        goto LABEL_8;
      }
      PipUnlinkDeviceObjectAndDependencyNode(a2, v11);
      PipDereferenceDependencyNode(v11);
    }
    else
    {
      v4 = -1073741670;
    }
LABEL_15:
    PnpReleaseDependencyRelationsLock();
    return (unsigned int)v4;
  }
  if ( a2 )
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v15 = 0LL;
  v4 = PipAddBindingId(v15, v2, v7);
  if ( v4 < 0 )
    goto LABEL_15;
LABEL_8:
  if ( a2 )
  {
    v12 = *(_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 396) & 0x20000) == 0 && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v12 + 40)) )
        PipAttemptDependentsStart(v19);
    }
  }
  PipAddtoRebuildPowerRelationsQueue(a2);
  PipAddDependentsToRebuildPowerRelationsQueue(a2);
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  return (unsigned int)v4;
}
