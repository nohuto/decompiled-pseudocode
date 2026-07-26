/*
 * XREFs of ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD79C
 * Callers:
 *     ndisWdfMiniportUpdatePowerState @ 0x1C00A5F68 (ndisWdfMiniportUpdatePowerState.c)
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisWdfIsAoAcPowerTransition(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v2; // al
  unsigned __int8 WdfAoAcTransition; // bl

  AoAc = a1->AoAc;
  v2 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  WdfAoAcTransition = AoAc->WdfAoAcTransition;
  KeReleaseSpinLock(&AoAc->Lock, v2);
  return WdfAoAcTransition;
}
