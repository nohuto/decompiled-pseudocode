/*
 * XREFs of RaidCompleteRequest @ 0x1C003A710
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidCompleteRequest(IRP *a1, unsigned int a2)
{
  return RaidCompleteRequestEx(a1, 0, a2);
}
