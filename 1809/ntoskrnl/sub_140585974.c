/*
 * XREFs of sub_140585974 @ 0x140585974
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058585C @ 0x14058585C (sub_14058585C.c)
 *     sub_1408E6958 @ 0x1408E6958 (sub_1408E6958.c)
 *     sub_1408E6B44 @ 0x1408E6B44 (sub_1408E6B44.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405859A0 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_140585974(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
