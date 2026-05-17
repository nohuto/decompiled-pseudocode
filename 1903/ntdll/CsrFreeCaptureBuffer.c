/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18004BE10
 * Callers:
 *     sub_18004BD54 @ 0x18004BD54 (sub_18004BD54.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_180165430 )
    return RtlFreeHeap(qword_180165B50, 0, a1);
  return result;
}
