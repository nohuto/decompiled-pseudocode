/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x14012C00C
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x14012BFF0 (CcScanDpc.c)
 *     CcNotifyWriteBehindEx @ 0x1401533B4 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x140159BC0 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
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
