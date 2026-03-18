/*
 * XREFs of PpmParkReportUnparkedCores @ 0x140120ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x140098BB0 (KeCountSetBitsAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x14009EC70 (KeSubtractAffinityEx.c)
 *     PpmPerfQueueAction @ 0x1401768EC (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        PpmPerfChangedCoreParkingMask,
                        PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = (unsigned __int16 *)qword_14042B668;
  v3 = 0;
  v2[0] = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    Prcb = KeGetPrcb(v6);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
