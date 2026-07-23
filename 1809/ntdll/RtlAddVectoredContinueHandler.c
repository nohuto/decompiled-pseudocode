/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x1800DAB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return RtlpAddVectoredHandler(First, (__int64)Handler, 1u);
}
