/*
 * XREFs of ?IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z @ 0x18008F09C
 * Callers:
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800902AC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180090B00 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIdentityTransform(float *a1)
{
  return a1[1] == 0.0
      && a1[2] == 0.0
      && a1[3] == 0.0
      && a1[4] == 0.0
      && a1[5] == 1.0
      && a1[6] == 0.0
      && a1[7] == 0.0
      && a1[8] == 0.0
      && a1[9] == 0.0
      && a1[10] == 1.0
      && a1[11] == 0.0
      && a1[12] == 0.0
      && a1[13] == 0.0
      && a1[14] == 0.0
      && a1[15] == 1.0;
}
