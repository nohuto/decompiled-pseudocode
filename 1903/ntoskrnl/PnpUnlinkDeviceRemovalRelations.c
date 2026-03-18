/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x14072EC74 (PiEventRemovalPostSurpriseRemove.c)
 *     PipRemoveDevicesInRelationList @ 0x140731874 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140172854 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeRemoveFromTree @ 0x140172920 (PpDevNodeRemoveFromTree.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopEnumerateRelations @ 0x140730274 (IopEnumerateRelations.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073042C (PnpCleanupDeviceRegistryValues.c)
 *     IopIsDescendantNode @ 0x140730488 (IopIsDescendantNode.c)
 *     IopRemoveCurrentRelationFromList @ 0x140875A04 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF
  int v12; // [rsp+9Ch] [rbp+3Ch]
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF

  Object = a1;
  v9 = 0LL;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v12 = 0;
    v11 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v11,
                               (unsigned int)&Object,
                               (unsigned int)&v13,
                               0LL) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v8 + 300) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v8 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v8 + 40);
        v5 = PpDevNodeRemoveFromTree((_QWORD *)v8);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v5 )
        {
          v6 = *(_QWORD *)(v8 + 48) == 0LL;
          *(_QWORD *)(v8 + 648) = v4;
          if ( !v6 )
          {
            PiPnpRtlBeginOperation(&P);
            v9 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v8 + 48),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v9,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(v8 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v8);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v8 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v11);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}
