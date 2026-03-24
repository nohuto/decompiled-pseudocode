/*
 * XREFs of RtlpGetStackLimits @ 0x1400CAB20
 * Callers:
 *     RtlUnwindEx @ 0x14009DF30 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14009EB90 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1400A0F40 (RtlDispatchException.c)
 *     IoGetStackLimits @ 0x1400CAAF0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCC70 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140924C08 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x14093B3CC (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAB50 (KeQueryCurrentStackInformation.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // [rsp+40h] [rbp+18h] BYREF

  result = KeQueryCurrentStackInformation(&v3, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
