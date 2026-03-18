/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x1407598F0
 * Callers:
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407599E8 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2, a3);
}
