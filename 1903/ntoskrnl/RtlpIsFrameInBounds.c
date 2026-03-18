/*
 * XREFs of RtlpIsFrameInBounds @ 0x14013B004
 * Callers:
 *     RtlDispatchException @ 0x1400173E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
