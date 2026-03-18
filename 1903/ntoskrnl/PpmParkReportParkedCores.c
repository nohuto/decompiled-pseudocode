/*
 * XREFs of PpmParkReportParkedCores @ 0x14011E5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KeInitializeEnumerationContext @ 0x1400B9050 (KeInitializeEnumerationContext.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeAndAffinityEx @ 0x1400BE320 (KeAndAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400BEDF0 (KeSubtractAffinityEx.c)
 *     PpmPerfQueueAction @ 0x1401761BC (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeXorAffinityEx @ 0x1402A4F58 (KeXorAffinityEx.c)
 */

char PpmParkReportParkedCores()
{
  int v0; // eax
  int v1; // ebx
  int v2; // ebx
  int v3; // ebx
  __int64 Prcb; // rax
  __int64 v5; // rax
  ULONG v7; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v8[3]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 v9[88]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v10[88]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v11[88]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v10, 0, 0xA8uLL);
  memset(v11, 0, 0xA8uLL);
  memset(v9, 0, 0xA8uLL);
  if ( !PpmIsParkingEnabled )
    return 1;
  v0 = KeAndAffinityEx(PpmPerfChangedCoreParkingMask, PpmPerfNewCoreParkingMask, v10);
  v1 = v0;
  if ( !PoSoftParkingAllowed )
  {
    if ( v0 )
    {
      v2 = KeCountSetBitsAffinityEx(v10);
      goto LABEL_7;
    }
    return 1;
  }
  KeSubtractAffinityEx(PpmPerfNewCoreParkingMask, PpmPerfChangedCoreParkingMask, v11);
  KeXorAffinityEx(&PpmParkSoftParkingMask, &PpmParkNewSoftParkingMask, v9);
  if ( !(v1 | (unsigned int)KeAndAffinityEx(v9, v11, v9)) )
    return 1;
  v3 = KeCountSetBitsAffinityEx(v9);
  v2 = KeCountSetBitsAffinityEx(v10) + v3;
LABEL_7:
  PpmCheckCount = v2;
  KeInitializeEnumerationContext((__int64)v8, (__int64)v10);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v8) )
  {
    Prcb = KeGetPrcb(v7);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  if ( PoSoftParkingAllowed )
  {
    KeInitializeEnumerationContext((__int64)v8, (__int64)v9);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v8) )
    {
      v5 = KeGetPrcb(v7);
      PpmPerfQueueAction(v5, 4LL);
    }
  }
  return 0;
}
