/*
 * XREFs of WheapSendErrorRecordTelemetry @ 0x14034027C
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1403401A0 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x14078BA40 (WheapEtwEnableCallback.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall WheapSendErrorRecordTelemetry(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-50h] BYREF
  _DWORD Src[8]; // [rsp+48h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  memset(Src, 0, sizeof(Src));
  if ( WheapTickCountAtLastTelemetry )
    WheapTelemetryElapsedTicks += MEMORY[0xFFFFF78000000320] - WheapTickCountAtLastTelemetry;
  WheapTickCountAtLastTelemetry = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int8)WheapTelemetryCount >= 0x1Eu )
  {
    if ( WheapTelemetryCount != 30 )
      goto LABEL_8;
    Src[3] = 0;
    v2 = Src;
    Src[7] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[5] = -2147483625;
    Src[4] = 1280201291;
    Src[6] = 3;
  }
  else
  {
    v2 = v4;
    v4[0] = 0x1674C6857LL;
    v4[1] = 40LL;
    v4[2] = 0x800000164C4E524BuLL;
    v4[3] = 0x800000001LL;
    v4[4] = a1;
  }
  WheaLogInternalEvent(v2);
LABEL_8:
  result = WheapTelemetryElapsedTicks * KeMaximumIncrement;
  ++WheapTelemetryCount;
  if ( result >= 0x1312D00 )
  {
    WheapTelemetryElapsedTicks = 0LL;
    WheapTelemetryCount = 0;
  }
  return result;
}
