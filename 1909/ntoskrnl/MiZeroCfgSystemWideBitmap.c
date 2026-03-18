/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14012E91C
 * Callers:
 *     MiReturnImageBase @ 0x140609554 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 */

unsigned int *__fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140464528;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = unk_1404644C0;
  return MiZeroCfgSystemWideBitmapWorker(
           (unsigned int *)(v2 + 128),
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
