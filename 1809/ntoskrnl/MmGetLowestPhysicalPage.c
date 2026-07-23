/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14013BB24
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * a1) + 7104LL);
}
