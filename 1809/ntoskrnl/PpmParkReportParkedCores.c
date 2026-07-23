/*
 * XREFs of PpmParkReportParkedCores @ 0x140122420
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x1401759D8 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PpmParkReportParkedCores()
{
  __int64 Prcb; // rax
  ULONG v2; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int16 *v3[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v4; // [rsp+38h] [rbp-D0h]
  __int16 v5; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v6; // [rsp+48h] [rbp-C0h]

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeAndAffinityEx(
                        (unsigned __int16 *)&PpmPerfChangedCoreParkingMask,
                        (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
                        &v5) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v5);
  v3[1] = v6;
  v3[0] = (unsigned __int16 *)&v5;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, v3) )
  {
    Prcb = KeGetPrcb(v2);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  return 0;
}
