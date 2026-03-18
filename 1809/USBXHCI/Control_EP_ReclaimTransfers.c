/*
 * XREFs of Control_EP_ReclaimTransfers @ 0x1C0025920
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C0024DAC (TR_QueueDpcForTransferCompletion.c)
 *     TR_TransfersReclaimed @ 0x1C00251D0 (TR_TransfersReclaimed.c)
 */

__int64 __fastcall Control_EP_ReclaimTransfers(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  bool v4; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 344) == 0LL;
  *(_BYTE *)(a1 + 104) = v3;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 352) |= 2u;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
  if ( v2 )
    return TR_QueueDpcForTransferCompletion(a1);
  else
    return TR_TransfersReclaimed(a1);
}
