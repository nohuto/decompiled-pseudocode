/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14012DFCC
 * Callers:
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 */

unsigned int *__fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140464828;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = unk_1404647C0;
  return MiZeroCfgSystemWideBitmapWorker(
           (unsigned int *)(v2 + 128),
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
