/*
 * XREFs of sub_140584D70 @ 0x140584D70
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     sub_140585234 @ 0x140585234 (sub_140585234.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 */

__int64 __fastcall sub_140584D70(__int64 a1, _QWORD *a2)
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
  sub_140585234(0LL);
  return (unsigned int)v4;
}
