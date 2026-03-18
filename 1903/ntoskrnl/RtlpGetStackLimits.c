/*
 * XREFs of RtlpGetStackLimits @ 0x1400C2F50
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400171F0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 *     IoGetStackLimits @ 0x1400C2F20 (IoGetStackLimits.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140963D98 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x140979A10 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1400C2FA0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1401C4200 (KeGetCurrentStackPointer.c)
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
