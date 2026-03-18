/*
 * XREFs of RtlpGetStackLimits @ 0x1400A2DD0
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400175E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x1400182A0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     IoGetStackLimits @ 0x1400A2DA0 (IoGetStackLimits.c)
 *     PspGetSetContextInternal @ 0x1405E87A0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140963D98 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x140979A10 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1400A2E20 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
