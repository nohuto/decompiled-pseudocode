/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18004BE10
 * Callers:
 *     sub_18004BD54 @ 0x18004BD54 (sub_18004BD54.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !byte_180165430 )
    return RtlFreeHeap(qword_180165B50, 0, BaseAddress);
  return result;
}
