/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x140299FE0
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14016D674 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
