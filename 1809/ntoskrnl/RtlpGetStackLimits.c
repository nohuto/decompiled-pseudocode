/*
 * XREFs of RtlpGetStackLimits @ 0x1400CAC00
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCCF0 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140925C08 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x14093C3CC (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
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
