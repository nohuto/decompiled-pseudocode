/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140760D20
 * Callers:
 *     PopCheckShutdownMarker @ 0x1409DD374 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14071C4F4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(0x1Fu, a1, a2, a3);
}
