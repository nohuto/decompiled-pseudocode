/*
 * XREFs of ExReInitializeRundownProtection @ 0x140178690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExReInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
}
