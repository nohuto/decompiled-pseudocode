/*
 * XREFs of RtlpInitializeNonVolatileFlush @ 0x14018AD0C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS RtlpInitializeNonVolatileFlush()
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    if ( (SystemInformation[2] & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_6:
        result = SystemInformation[1];
        RtlpClFlushSize = SystemInformation[1];
        return result;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_6;
  }
  return result;
}
