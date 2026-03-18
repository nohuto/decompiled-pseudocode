/*
 * XREFs of LogFwInitialize @ 0x1409505A4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140405AD0 |= 0x80u;
  qword_1404C64F8 = 0LL;
  qword_1404C6558 = 0LL;
  qword_1404C6530 = 0LL;
  dword_1404C6548 = 0;
  qword_1404C6540 = 0LL;
  qword_1404C6560 = 0LL;
  qword_1404C6520 = 0LL;
  qword_1404C6528 = 0LL;
  qword_1404C6508 = 0LL;
  qword_1404C6518 = 0LL;
  qword_1404C6538 = 0LL;
  qword_1404C6588 = 0LL;
  qword_1404C6590 = 0LL;
  qword_1404C6578 = 0LL;
  qword_1404C6568 = 0LL;
  dword_1404C6510 = 0;
  dword_1404C6500 = 0;
  dword_1404C6550 = 0;
  dword_1404C6580 = 0;
  dword_1404C654C = 0;
  dword_1404C6514 = 0;
  qword_140403BE0 = 1LL;
  qword_140403BD8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140403BE8 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_14043FE30, 0, sizeof(stru_14043FE30));
}
