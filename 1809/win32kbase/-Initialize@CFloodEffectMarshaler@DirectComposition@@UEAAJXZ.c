/*
 * XREFs of ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C017F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0173F10 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::Initialize(DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 6) = xmmword_1C01A9938;
  }
  return result;
}
