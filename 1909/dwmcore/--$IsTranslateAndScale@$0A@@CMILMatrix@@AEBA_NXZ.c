/*
 * XREFs of ??$IsTranslateAndScale@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18021B0FC
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180256AE4 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateAndScale<0>(__int64 a1)
{
  char result; // al

  if ( *(float *)(a1 + 4) != 0.0
    || *(float *)(a1 + 8) != 0.0
    || *(float *)(a1 + 12) != 0.0
    || *(float *)(a1 + 16) != 0.0
    || *(float *)(a1 + 24) != 0.0
    || *(float *)(a1 + 28) != 0.0
    || *(float *)(a1 + 32) != 0.0
    || *(float *)(a1 + 36) != 0.0
    || *(float *)(a1 + 44) != 0.0
    || *(float *)(a1 + 60) != 1.0 )
  {
    return 0;
  }
  *(_BYTE *)(a1 + 64) &= 0x3Fu;
  result = 1;
  *(_BYTE *)(a1 + 64) |= 0x40u;
  *(_BYTE *)(a1 + 65) &= ~2u;
  *(_BYTE *)(a1 + 65) |= 1u;
  return result;
}
