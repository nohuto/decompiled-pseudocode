/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406EBAF0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x1406F96D0 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408A2360 (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14000D040 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1405E40D0 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
