/*
 * XREFs of NetPacketGetSize @ 0x1C0108300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NetPacketGetSize()
{
  return ~(dword_1C00A0864 - 1) & (unsigned int)(dword_1C00A0864 + Size - 1);
}
