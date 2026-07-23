/*
 * XREFs of PsChargeProcessWakeCounter @ 0x140589720
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     PspCreateActivityReference @ 0x1406D747C (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x140867860 (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1400ABF80 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
