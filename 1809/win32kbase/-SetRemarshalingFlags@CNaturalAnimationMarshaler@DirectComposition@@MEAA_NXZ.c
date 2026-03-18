/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0171B20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016C8F0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax

  *((_DWORD *)this + 4) |= 0x4000u;
  v1 = *((_DWORD *)this + 4) | 0x18000;
  *((_DWORD *)this + 4) = v1;
  if ( (v1 & 0x400) != 0 )
  {
    v1 |= 0x800u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v1 & 0x1000) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x2000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}
