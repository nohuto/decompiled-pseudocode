/*
 * XREFs of PspSendWakeNotification @ 0x1406010F4
 * Callers:
 *     PspChargeJobWakeCounter @ 0x1405FE81C (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1406AE394 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x14008F50C (PspRequestDeferredJobNotification.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     EtwTraceWakeEvent @ 0x1408B9200 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140542350 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
