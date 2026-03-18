/*
 * XREFs of IopDeleteDevice @ 0x1406A2470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x14018D824 (IopCleanupNotifications.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A25E4 (PnpDeleteAllDependencyRelations.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  PnpDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1 + 8), (PVOID)a1);
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
