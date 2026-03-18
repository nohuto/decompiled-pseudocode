/*
 * XREFs of LogFwInitialize @ 0x1409905F4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *LogFwInitialize()
{
  dword_14042C010 |= 0x80u;
  qword_1404F2838 = 0LL;
  qword_1404F28B0 = 0LL;
  qword_1404F2880 = 0LL;
  dword_1404F289C = 0;
  qword_1404F2860 = 0LL;
  qword_1404F2888 = 0LL;
  qword_1404F2850 = 0LL;
  qword_1404F2878 = 0LL;
  qword_1404F2848 = 0LL;
  qword_1404F2868 = 0LL;
  qword_1404F2858 = 0LL;
  qword_1404F28A8 = 0LL;
  qword_1404F28B8 = 0LL;
  qword_1404F28C0 = 0LL;
  qword_1404F2890 = 0LL;
  dword_1404F2840 = 0;
  dword_1404F2834 = 0;
  dword_1404F2870 = 0;
  dword_1404F28A4 = 0;
  dword_1404F28A0 = 0;
  dword_1404F2830 = 0;
  qword_14042A040 = 1LL;
  qword_14042A038 = 0x7FFFFFFFFFFFFFFFLL;
  qword_14042A048 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_14046B9B0, 0, sizeof(stru_14046B9B0));
}
