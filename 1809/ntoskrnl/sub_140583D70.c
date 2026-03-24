/*
 * XREFs of sub_140583D70 @ 0x140583D70
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14058410C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     sub_140584234 @ 0x140584234 (sub_140584234.c)
 *     WbAlloc @ 0x140624D14 (WbAlloc.c)
 */

__int64 __fastcall sub_140583D70(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0x50uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0x50uLL);
    MEMORY[0] = 1LL;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = *(_DWORD *)(a1 + 8);
    MEMORY[0x20] = *(_QWORD *)a1;
    *a2 = 0LL;
  }
  sub_140584234(0LL);
  return (unsigned int)v4;
}
