/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C02032EC
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C015ED40 (_SetMagnificationInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  __int64 v1; // rdx
  const struct tagRECT *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v2 + 1) )
    return 1LL;
  UserSetLastError(87LL, v1, v3, v4);
  return 0LL;
}
