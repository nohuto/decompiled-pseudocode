/*
 * XREFs of PoEnergyContextInitialize @ 0x1406C0388
 * Callers:
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  a1[54] = 0LL;
  a1[55] = 0LL;
  a1[54] = 0LL;
  result = PopEtGlobals;
  if ( PopEtGlobals )
  {
    result = PopEtGlobals + 768;
    a1[56] = PopEtGlobals + 768;
  }
  return result;
}
