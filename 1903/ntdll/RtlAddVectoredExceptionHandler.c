/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x18007F8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)sub_18007F8D0(First, Handler, 0LL);
}
