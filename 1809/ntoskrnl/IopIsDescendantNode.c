/*
 * XREFs of IopIsDescendantNode @ 0x1406EFA6C
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1406EDD04 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsDescendantNode(unsigned int **a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  if ( a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
  return PipIsDeviceInDeviceObjectList(*a1, *(_QWORD *)(v3 + 32), 0LL);
}
