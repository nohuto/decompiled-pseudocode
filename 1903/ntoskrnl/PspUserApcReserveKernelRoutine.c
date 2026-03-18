/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x1405B4F40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspUserApcReserveKernelRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
