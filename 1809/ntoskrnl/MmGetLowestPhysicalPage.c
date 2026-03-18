/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14013BA04
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * a1) + 7104LL);
}
