/*
 * XREFs of LogFwInitialize @ 0x1409905F4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *LogFwInitialize()
{
  dword_14042C030 |= 0x80u;
  qword_1404F2AF0 = 0LL;
  qword_1404F2B50 = 0LL;
  qword_1404F2B28 = 0LL;
  dword_1404F2B40 = 0;
  qword_1404F2B38 = 0LL;
  qword_1404F2B58 = 0LL;
  qword_1404F2B08 = 0LL;
  qword_1404F2B20 = 0LL;
  qword_1404F2B00 = 0LL;
  qword_1404F2B18 = 0LL;
  qword_1404F2B30 = 0LL;
  qword_1404F2B80 = 0LL;
  qword_1404F2B88 = 0LL;
  qword_1404F2B70 = 0LL;
  qword_1404F2B60 = 0LL;
  dword_1404F2AF8 = 0;
  dword_1404F2B14 = 0;
  dword_1404F2B48 = 0;
  dword_1404F2B78 = 0;
  dword_1404F2B44 = 0;
  dword_1404F2B10 = 0;
  qword_14042A030 = 1LL;
  qword_14042A028 = 0x7FFFFFFFFFFFFFFFLL;
  qword_14042A038 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_14046BC70, 0, sizeof(stru_14046BC70));
}
