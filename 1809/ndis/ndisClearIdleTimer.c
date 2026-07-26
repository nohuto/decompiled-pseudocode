/*
 * XREFs of ndisClearIdleTimer @ 0x1C0074A4C
 * Callers:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072530 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSubmitIdleRequest @ 0x1C0076428 (ndisSubmitIdleRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisClearIdleTimer(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // bl

  v1 = *(_QWORD *)(a1 + 4488);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  KeCancelTimer((PKTIMER)(v1 + 16));
  *(_DWORD *)(v1 + 504) &= ~1u;
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v2);
}
