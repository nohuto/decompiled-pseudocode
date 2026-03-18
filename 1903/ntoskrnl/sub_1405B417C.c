/*
 * XREFs of sub_1405B417C @ 0x1405B417C
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B3DE4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405B4064 @ 0x1405B4064 (sub_1405B4064.c)
 *     sub_140921658 @ 0x140921658 (sub_140921658.c)
 *     sub_140921844 @ 0x140921844 (sub_140921844.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406ADDF0 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405B417C(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
