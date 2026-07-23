/*
 * XREFs of PopProcessBootstat @ 0x1409FBBBC
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1402FECD0 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x1407598B0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x1407599B0 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 */

int PopProcessBootstat()
{
  int result; // eax
  __int64 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  DataBuffer = 0LL;
  v2 = 0LL;
  v3 = 0;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(v2) )
    {
      PopTraceBootError();
      DataBuffer = 0LL;
      v2 = 0LL;
      v3 = 0;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
