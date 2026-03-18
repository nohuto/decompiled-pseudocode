/*
 * XREFs of MiInitializeDynamicVa @ 0x140A17CC0
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A17D74 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A17E24 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140465C00.Header.Size = 6;
  qword_140465C18 = 0LL;
  LOWORD(stru_140465C00.Header.Lock) = 0;
  stru_140465C00.Header.SignalState = 0;
  stru_140465C00.Header.WaitListHead.Blink = &stru_140465C00.Header.WaitListHead;
  stru_140465C00.Header.WaitListHead.Flink = &stru_140465C00.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140467128 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_1404672F0 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_1404672F0 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
