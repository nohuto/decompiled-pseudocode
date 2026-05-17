/*
 * XREFs of RtlpIsFrameInBounds @ 0x18006AC2C
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001F4F0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
