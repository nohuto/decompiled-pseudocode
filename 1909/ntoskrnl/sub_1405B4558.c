/*
 * XREFs of sub_1405B4558 @ 0x1405B4558
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B41C0 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405B4440 @ 0x1405B4440 (sub_1405B4440.c)
 *     sub_1409210B8 @ 0x1409210B8 (sub_1409210B8.c)
 *     sub_1409212A4 @ 0x1409212A4 (sub_1409212A4.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406AFD20 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405B4558(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
