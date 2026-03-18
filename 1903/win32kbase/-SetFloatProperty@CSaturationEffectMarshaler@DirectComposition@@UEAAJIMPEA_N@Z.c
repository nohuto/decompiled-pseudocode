/*
 * XREFs of ?SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01C0EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSaturationEffectMarshaler::SetFloatProperty(
        DirectComposition::CSaturationEffectMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  bool v4; // al

  v4 = 0;
  if ( a2 )
    return 3221225485LL;
  if ( *((float *)this + 22) != a3 )
  {
    *((float *)this + 22) = a3;
    v4 = 1;
  }
  *a4 = v4;
  return 0LL;
}
