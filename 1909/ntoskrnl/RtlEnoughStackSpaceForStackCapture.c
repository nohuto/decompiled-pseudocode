/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x1400175E0
 * Callers:
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     IovpLogStackTrace @ 0x140963B18 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x14097D6A8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400A2DD0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v2, &v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)(KeGetCurrentStackPointer() - v2) >= 0xE30;
  return v0;
}
