/*
 * XREFs of LogFwInitialize @ 0x1409515A4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140406AD0 |= 0x80u;
  qword_1404C75B8 = 0LL;
  qword_1404C7630 = 0LL;
  qword_1404C75E8 = 0LL;
  dword_1404C7618 = 0;
  qword_1404C75F8 = 0LL;
  qword_1404C7610 = 0LL;
  qword_1404C75C0 = 0LL;
  qword_1404C7600 = 0LL;
  qword_1404C75D0 = 0LL;
  qword_1404C75D8 = 0LL;
  qword_1404C75E0 = 0LL;
  qword_1404C7648 = 0LL;
  qword_1404C7640 = 0LL;
  qword_1404C7638 = 0LL;
  qword_1404C7620 = 0LL;
  dword_1404C75B0 = 0;
  dword_1404C75C8 = 0;
  dword_1404C75F0 = 0;
  dword_1404C761C = 0;
  dword_1404C7608 = 0;
  dword_1404C75B4 = 0;
  qword_140404BE0 = 1LL;
  qword_140404BD8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140404BE8 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140440EF0, 0, sizeof(stru_140440EF0));
}
