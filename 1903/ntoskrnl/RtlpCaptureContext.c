/*
 * XREFs of RtlpCaptureContext @ 0x1401CBAF0
 * Callers:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x1401CBB6ALL);
}
