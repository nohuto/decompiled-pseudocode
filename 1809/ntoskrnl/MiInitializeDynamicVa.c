/*
 * XREFs of MiInitializeDynamicVa @ 0x1409D4630
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x1409D46E4 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x1409D4794 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_14043B5F8.Header.Size = 6;
  qword_14043B610 = 0LL;
  LOWORD(stru_14043B5F8.Header.Lock) = 0;
  stru_14043B5F8.Header.SignalState = 0;
  stru_14043B5F8.Header.WaitListHead.Blink = &stru_14043B5F8.Header.WaitListHead;
  stru_14043B5F8.Header.WaitListHead.Flink = &stru_14043B5F8.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_14043C9F0 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_14043CBE0 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_14043CBE0 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
