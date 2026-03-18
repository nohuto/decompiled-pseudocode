/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A7650
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A77D0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  char v4; // bl

  v2 = *((float *)this + 74);
  v3 = *((_DWORD *)this + 4) & 0xFFFF83FF;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
  {
    v3 &= ~0x8000u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 50) )
    *((_DWORD *)this + 4) = v3 & 0xFFFEFFFF;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 51) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 14) && *((_QWORD *)this + 16)
    || *((_DWORD *)this + 46)
    || *((_DWORD *)this + 50) )
  {
    return 1;
  }
  return v4;
}
