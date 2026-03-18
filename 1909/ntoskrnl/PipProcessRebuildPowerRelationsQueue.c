/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1407008C0
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14066FAC4 (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1407009D0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14085D5C0 (IoSetDependency.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140700890 (PipIsDeviceReadyForPowerRelations.c)
 *     PiGetProviderList @ 0x140704B0C (PiGetProviderList.c)
 *     PiQueryPowerRelations @ 0x14073922C (PiQueryPowerRelations.c)
 *     PipDeleteDependencyNode @ 0x140786780 (PipDeleteDependencyNode.c)
 *     PiEnumerateProviderListEntry @ 0x14085D69C (PiEnumerateProviderListEntry.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 *v2; // r11
  _QWORD *v3; // rbp
  _QWORD *v4; // r11
  _QWORD **ProviderList; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  PnpAcquireDependencyRelationsLock(1);
LABEL_2:
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v0 == &PiRebuildPowerRelationsQueue )
      goto LABEL_4;
    v1 = v0 - 9;
    v2 = v0;
    v3 = (_QWORD *)*(v0 - 3);
    v0 = (__int64 *)*v0;
    if ( !v3 )
      break;
    if ( PipIsDeviceReadyForPowerRelations((__int64)v3) )
    {
      ProviderList = (_QWORD **)PiGetProviderList(v3);
      v6 = *ProviderList;
      if ( *ProviderList == ProviderList )
      {
LABEL_8:
        v7 = *v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 )
          goto LABEL_13;
        v8 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v8 != v4 )
          goto LABEL_13;
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        v4[1] = v4;
        *v4 = v4;
        v9 = (*((_DWORD *)v1 + 22))-- == 1;
        if ( v9 )
          PipDeleteDependencyNode(v1);
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0);
        LOBYTE(v10) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v3[39] + 40LL), v10);
        ObfDereferenceObjectWithTag(v3, 0x44706E50u);
        PnpAcquireDependencyRelationsLock(1);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v6, &v12, 0LL);
        if ( !PipIsDeviceReadyForPowerRelations(v12) )
          break;
        v6 = (_QWORD *)*v6;
        if ( v6 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  if ( (__int64 *)v0[1] != v2 || (v11 = (__int64 **)v2[1], *v11 != v2) )
LABEL_13:
    __fastfail(3u);
  *v11 = v0;
  v0[1] = (__int64)v11;
  v2[1] = (__int64)v2;
  *v2 = (__int64)v2;
  v9 = (*((_DWORD *)v1 + 22))-- == 1;
  if ( v9 )
    PipDeleteDependencyNode(v1);
LABEL_4:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
