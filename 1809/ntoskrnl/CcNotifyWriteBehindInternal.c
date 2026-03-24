/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x14012BF3C
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14007EEC8 (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x14012BF20 (CcScanDpc.c)
 *     CcNotifyWriteBehindEx @ 0x1401532B4 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x140159AC0 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x14026B5B0 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(struct _KEVENT *a1, char a2)
{
  LONG result; // eax

  if ( CcInitializationComplete )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent(a1 + 14, 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent(a1 + 15, 0, 0);
    if ( (a2 & 4) != 0 )
      result = KeSetEvent(a1 + 16, 0, 0);
    if ( (a2 & 8) != 0 )
      result = KeSetEvent(a1 + 17, 0, 0);
    if ( (a2 & 0x10) != 0 )
      return KeSetEvent(a1 + 18, 0, 0);
  }
  return result;
}
