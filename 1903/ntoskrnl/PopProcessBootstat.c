/*
 * XREFs of PopProcessBootstat @ 0x140A14E04
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1402FF220 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x140769EE0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140769FE0 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A14E68 (PopCheckShutdownMarker.c)
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
