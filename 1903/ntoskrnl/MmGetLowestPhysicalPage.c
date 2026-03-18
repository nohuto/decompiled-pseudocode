/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14013D634
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * a1) + 7872LL);
}
