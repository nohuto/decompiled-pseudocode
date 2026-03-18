/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14013D7AC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

__int64 CmSiProcessTupleInitialize()
{
  __int64 result; // rax

  result = 0LL;
  CmpRegistryProcess = 0LL;
  qword_140463868 = 0LL;
  return result;
}
