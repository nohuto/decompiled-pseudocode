/*
 * XREFs of sub_140584974 @ 0x140584974
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405845DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058485C @ 0x14058485C (sub_14058485C.c)
 *     sub_1408E56B8 @ 0x1408E56B8 (sub_1408E56B8.c)
 *     sub_1408E58A4 @ 0x1408E58A4 (sub_1408E58A4.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEC4 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_140584974(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
