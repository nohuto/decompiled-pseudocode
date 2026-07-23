/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x1800D89A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return sub_18007F8D0(First, (__int64)Handler, 1u);
}
