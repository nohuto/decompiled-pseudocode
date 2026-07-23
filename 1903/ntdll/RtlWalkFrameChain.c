/*
 * XREFs of RtlWalkFrameChain @ 0x1800748C0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     sub_18010D4AC @ 0x18010D4AC (sub_18010D4AC.c)
 * Callees:
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  __int64 v3; // r8
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  v3 = Flags >> 8;
  if ( (unsigned int)v3 > 0xFE || Count == -1 )
    return 0;
  result = sub_18001F4F0((__int64)Callers, Count + 1, v3, (int)v3 + 1);
  if ( result )
    --result;
  return result;
}
