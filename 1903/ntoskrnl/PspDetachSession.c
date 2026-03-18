/*
 * XREFs of PspDetachSession @ 0x1406EC7B8
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(PVOID Object, __int64 a2)
{
  MmDetachSession((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
