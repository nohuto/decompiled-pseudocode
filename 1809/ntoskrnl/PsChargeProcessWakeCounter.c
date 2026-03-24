/*
 * XREFs of PsChargeProcessWakeCounter @ 0x140588720
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058999C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpQueueNotification @ 0x1405C054C (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 *     PspCreateActivityReference @ 0x1406D61DC (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x140866600 (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1400AC040 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x140636C70 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
