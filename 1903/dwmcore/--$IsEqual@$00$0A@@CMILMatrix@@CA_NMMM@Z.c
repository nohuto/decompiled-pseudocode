/*
 * XREFs of ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x1800171A8
 * Callers:
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsEqual<1,0>(float a1, float a2, float a3)
{
  float v3; // xmm0_4

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - a2)) & _xmm);
  return a3 > v3;
}
