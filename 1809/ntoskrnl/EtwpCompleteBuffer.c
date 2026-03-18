/*
 * XREFs of EtwpCompleteBuffer @ 0x1406D4198
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x140314D18 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
