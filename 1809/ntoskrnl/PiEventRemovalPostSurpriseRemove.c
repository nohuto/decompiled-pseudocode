/*
 * XREFs of PiEventRemovalPostSurpriseRemove @ 0x1406F0610
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 */

_QWORD *__fastcall PiEventRemovalPostSurpriseRemove(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v7 = 0LL;
  PnpUnlinkDeviceRemovalRelations((void *)a1, *a3);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    ++*(_DWORD *)(*(_QWORD *)(v7 + 648) + 656LL);
    *(_QWORD *)(v7 + 648) |= 1uLL;
  }
  return PnpQueuePendingSurpriseRemoval(*(PVOID *)(v7 + 32), (void **)a3, *(_DWORD *)(a1 + 16), a2);
}
