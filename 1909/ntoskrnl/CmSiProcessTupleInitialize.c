/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14013DCEC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

__int64 CmSiProcessTupleInitialize()
{
  __int64 result; // rax

  result = 0LL;
  CmpRegistryProcess = 0LL;
  qword_140463548 = 0LL;
  return result;
}
