/*
 * XREFs of VfErrorReport1 @ 0x1409755E4
 * Callers:
 *     VfPnpVerifyIrpStackUpward @ 0x140980050 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ViErrorReport1 @ 0x14032867C (ViErrorReport1.c)
 */

__int64 __fastcall VfErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  return ViErrorReport1(a1, a2, a3);
}
