/*
 * XREFs of ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017EFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((float *)this + 24) != 3.0
    || *((_DWORD *)this + 29)
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 28) != 1.0 )
  {
    return 1;
  }
  return result;
}
