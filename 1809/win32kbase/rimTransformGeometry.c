/*
 * XREFs of rimTransformGeometry @ 0x1C012C3C8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C012B2F8 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMApplyTransforms @ 0x1C0112708 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C0128F5C (rimComputeHimetricGeometry.c)
 */

__int64 __fastcall rimTransformGeometry(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = IsApplyPTPTranslationSupported();
    if ( (int)result >= 0 )
      return ApplyPTPTranslation(a1, a3);
  }
  else
  {
    RIMApplyTransforms(a1, a2, a3, a4, a5);
    return rimComputeHimetricGeometry(a1, (__int64)a3, (__int64)(a3 + 8));
  }
  return result;
}
