/*
 * XREFs of PspDetachSession @ 0x1406EDA24
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(PVOID Object, __int64 a2)
{
  MmDetachSession((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
