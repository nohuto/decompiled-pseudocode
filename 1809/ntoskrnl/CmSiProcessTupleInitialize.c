/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14013BB98
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407572EC (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

__int64 CmSiProcessTupleInitialize()
{
  __int64 result; // rax

  result = 0LL;
  CmpRegistryProcess = 0LL;
  qword_140437C28 = 0LL;
  return result;
}
