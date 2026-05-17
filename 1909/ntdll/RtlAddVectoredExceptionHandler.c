/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x18007FF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddVectoredExceptionHandler(__int64 a1, __int64 a2)
{
  return RtlpAddVectoredHandler(a1, a2, 0LL);
}
