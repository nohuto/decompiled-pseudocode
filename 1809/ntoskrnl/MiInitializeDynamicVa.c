/*
 * XREFs of MiInitializeDynamicVa @ 0x1409D3630
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x1409D36E4 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x1409D3794 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_14043A538.Header.Size = 6;
  qword_14043A550 = 0LL;
  LOWORD(stru_14043A538.Header.Lock) = 0;
  stru_14043A538.Header.SignalState = 0;
  stru_14043A538.Header.WaitListHead.Blink = &stru_14043A538.Header.WaitListHead;
  stru_14043A538.Header.WaitListHead.Flink = &stru_14043A538.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_14043B930 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_14043BB20 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_14043BB20 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
