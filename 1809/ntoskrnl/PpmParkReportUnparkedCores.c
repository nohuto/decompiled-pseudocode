/*
 * XREFs of PpmParkReportUnparkedCores @ 0x140122470
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x1401759D8 (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        (unsigned __int16 *)&PpmPerfChangedCoreParkingMask,
                        (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = (unsigned __int16 *)qword_140406198;
  v3 = 0;
  v2[0] = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
  {
    Prcb = KeGetPrcb(v4);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
