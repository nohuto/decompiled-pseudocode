/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14013BCB8
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407584BC (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

__int64 CmSiProcessTupleInitialize()
{
  __int64 result; // rax

  result = 0LL;
  CmpRegistryProcess = 0LL;
  qword_140438CE8 = 0LL;
  return result;
}
