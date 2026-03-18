/*
 * XREFs of PoEnergyContextInitialize @ 0x1406E2358
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PopEtInit @ 0x140A1BBB4 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

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
