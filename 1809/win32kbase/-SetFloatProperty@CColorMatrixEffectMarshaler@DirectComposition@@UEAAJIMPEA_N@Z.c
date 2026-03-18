/*
 * XREFs of ?SetFloatProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C017EAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetFloatProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  char v7; // al
  unsigned __int64 v8; // rcx
  bool v9; // dl
  __int64 v10; // r9

  v4 = 0;
  if ( (unsigned int)(a2 - 3) <= 0x13 )
  {
    v7 = a2;
    v8 = (unsigned __int64)(unsigned int)(a2 - 3) >> 2;
    v9 = 1;
    v10 = ((v7 + 1) & 3) + 4 * v8;
    if ( *((float *)this + v10 + 24) == a3 )
      v9 = 0;
    else
      *((float *)this + v10 + 24) = a3;
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
