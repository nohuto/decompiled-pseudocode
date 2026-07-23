/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14012DC10
 * Callers:
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140439EC0;
  if ( *(int *)(a1 + 8) >= 1 )
    v2 = qword_140439ED0;
  return MiZeroCfgSystemWideBitmapWorker(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 4) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
