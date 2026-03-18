/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1401201EC
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x1401201D0 (CcScanDpc.c)
 *     CcNotifyWriteBehindHelper @ 0x140169CB0 (CcNotifyWriteBehindHelper.c)
 *     CcNotifyWriteBehindEx @ 0x14016A8C4 (CcNotifyWriteBehindEx.c)
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
