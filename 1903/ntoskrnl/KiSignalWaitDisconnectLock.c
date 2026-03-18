/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x1402B13E0
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14017BE74 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
